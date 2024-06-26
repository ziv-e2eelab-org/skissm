/*
 * Copyright © 2020-2021 by Academia Sinica
 *
 * This file is part of SKISSM.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * SKISSM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with SKISSM.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "skissm/ratchet.h"

#include <string.h>
#include <stdio.h>

#include "skissm/cipher.h"
#include "skissm/mem_util.h"

static const char MESSAGE_KEY_SEED[] = "MessageKeys";
static const uint8_t CHAIN_KEY_SEED[1] = {0x02};
static const size_t MAX_SKIPPED_MESSAGE_KEY_NODES = 8192;

static void copy_skipped_msg_key_node(
    Skissm__SkippedMsgKeyNode **dest,
    Skissm__SkippedMsgKeyNode **src,
    size_t num
) {
    size_t i;
    for (i = 0; i < num; i++){
        dest[i] = (Skissm__SkippedMsgKeyNode *) malloc(sizeof(Skissm__SkippedMsgKeyNode));
        skissm__skipped_msg_key_node__init(dest[i]);
        copy_protobuf_from_protobuf(&(dest[i]->ratchet_key_public), &(src[i]->ratchet_key_public));
        dest[i]->msg_key = (Skissm__MsgKey *) malloc(sizeof(Skissm__MsgKey));
        skissm__msg_key__init(dest[i]->msg_key);
        dest[i]->msg_key->index = src[i]->msg_key->index;
        copy_protobuf_from_protobuf(&(dest[i]->msg_key->derived_key), &(src[i]->msg_key->derived_key));
    }
}

static void free_receiver_chain(
    Skissm__ReceiverChainNode ***src,
    size_t num
) {
    size_t i;
    for (i = 0; i < num; i++) {
        if ((*src)[i] != NULL) {
            skissm__receiver_chain_node__free_unpacked((*src)[i], NULL);
            (*src)[i] = NULL;
        }
    }
    free_mem((void **)src, sizeof(Skissm__ReceiverChainNode *) * num);
    *src = NULL;
}

static void free_skipped_message_key(
    Skissm__SkippedMsgKeyNode ***src,
    size_t num
) {
    size_t i;
    for (i = 0; i < num; i++) {
        if ((*src)[i] != NULL) {
            skissm__skipped_msg_key_node__free_unpacked((*src)[i], NULL);
            (*src)[i] = NULL;
        }
    }
    free_mem((void **)src, sizeof(Skissm__SkippedMsgKeyNode *) * num);
    *src = NULL;
}

static void create_chain_key(
    const cipher_suite_t *cipher_suite,
    const ProtobufCBinaryData root_key,
    const ProtobufCBinaryData *our_private_key,
    const ProtobufCBinaryData *their_key,
    ProtobufCBinaryData *new_root_key,
    Skissm__ChainKey *new_chain_key,
    ProtobufCBinaryData *ratchet_public_key
) {
    int shared_key_len = cipher_suite->hash_suite->get_crypto_param().hash_len;
    int shared_secret_len = cipher_suite->kem_suite->get_crypto_param().shared_secret_len;

    uint8_t secret[shared_secret_len];
    memset(secret, 0, shared_secret_len);
    uint8_t *ciphertext = cipher_suite->kem_suite->ss_key_gen(our_private_key, their_key, secret);
    uint8_t derived_secrets[2 * shared_key_len];
    cipher_suite->hash_suite->hkdf(
        secret, sizeof(secret),
        root_key.data, root_key.len,
        (uint8_t *)KDF_INFO_RATCHET, sizeof(KDF_INFO_RATCHET) - 1,
        derived_secrets, sizeof(derived_secrets)
    );

    if (new_root_key->data){
        overwrite_protobuf_from_array(new_root_key, derived_secrets);
    } else{
        copy_protobuf_from_array(new_root_key, derived_secrets, shared_key_len);
    }

    if (ciphertext != NULL) {
        if (ratchet_public_key->data != NULL) {
            free_mem((void **)&(ratchet_public_key->data), ratchet_public_key->len);
            ratchet_public_key->len = 0;
        }
        uint32_t ciphertext_len = cipher_suite->kem_suite->get_crypto_param().kem_ciphertext_len;
        ratchet_public_key->data = (uint8_t *)malloc(sizeof(uint8_t) * ciphertext_len);
        memcpy(ratchet_public_key->data, ciphertext, ciphertext_len);
        ratchet_public_key->len = ciphertext_len;

        free_mem((void **)&ciphertext, ciphertext_len);
    }
    new_chain_key->index = 0;
    if (new_chain_key->shared_key.data) {
        overwrite_protobuf_from_array(&(new_chain_key->shared_key), derived_secrets + shared_key_len);
    } else {
        copy_protobuf_from_array(&(new_chain_key->shared_key), derived_secrets + shared_key_len, shared_key_len);
    }

    unset(derived_secrets, sizeof(derived_secrets));
    unset(secret, sizeof(secret));
}

static void advance_chain_key(
    const cipher_suite_t *cipher_suite,
    Skissm__ChainKey *chain_key
) {
    int shared_key_len = cipher_suite->hash_suite->get_crypto_param().hash_len;
    uint8_t shared_key[shared_key_len];
    memset(shared_key, 0, shared_key_len);
    cipher_suite->hash_suite->hmac(
        chain_key->shared_key.data, chain_key->shared_key.len,
        CHAIN_KEY_SEED, sizeof(CHAIN_KEY_SEED),
        shared_key
    );

    chain_key->index = chain_key->index + 1;
    overwrite_protobuf_from_array(&chain_key->shared_key, shared_key);
}

static void create_msg_keys(
    const cipher_suite_t *cipher_suite,
    const Skissm__ChainKey *chain_key,
    Skissm__MsgKey *msg_key
) {
    free_protobuf(&(msg_key->derived_key));
    int msg_key_len = cipher_suite->symmetric_encryption_suite->get_crypto_param().aead_key_len
                    + cipher_suite->symmetric_encryption_suite->get_crypto_param().aead_iv_len;
    msg_key->derived_key.data = (uint8_t *) malloc(sizeof(uint8_t) * msg_key_len);
    msg_key->derived_key.len = msg_key_len;

    int hash_len = cipher_suite->hash_suite->get_crypto_param().hash_len;
    uint8_t salt[hash_len];
    memset(salt, 0, hash_len);
    cipher_suite->hash_suite->hkdf(
        chain_key->shared_key.data, chain_key->shared_key.len,
        salt, sizeof(salt),
        (uint8_t *)MESSAGE_KEY_SEED, sizeof(MESSAGE_KEY_SEED) - 1,
        msg_key->derived_key.data, msg_key->derived_key.len
    );
    msg_key->index = chain_key->index;
}

static size_t verify_and_decrypt(
    const cipher_suite_t *cipher_suite,
    ProtobufCBinaryData ad,
    const Skissm__MsgKey *message_key,
    const Skissm__One2oneMsgPayload *payload,
    uint8_t **plaintext_data
) {    
    size_t result = cipher_suite->symmetric_encryption_suite->decrypt(
        &ad,
        message_key->derived_key.data,
        payload->ciphertext.data, payload->ciphertext.len,
        plaintext_data
    );

    if (result == 0)
        ssm_notify_log(NULL, BAD_MESSAGE_DECRYPTION, "verify_and_decrypt()");

    return result;
}

static size_t verify_and_decrypt_for_existing_chain(
    const cipher_suite_t *cipher_suite,
    ProtobufCBinaryData ad,
    const Skissm__ChainKey *chain,
    const Skissm__One2oneMsgPayload *payload,
    uint8_t **plaintext_data
) {
    if (payload->sequence < chain->index) {
        ssm_notify_log(NULL, BAD_MESSAGE_SEQUENCE, "verify_and_decrypt_for_existing_chain()");
        return 0;
    }

    Skissm__ChainKey *new_chain = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
    skissm__chain_key__init(new_chain);
    new_chain->index = chain->index;
    copy_protobuf_from_protobuf(&new_chain->shared_key, &chain->shared_key);

    while (new_chain->index < payload->sequence) {
        advance_chain_key(cipher_suite, new_chain);
    }
    assert(new_chain->index == payload->sequence);

    Skissm__MsgKey *mk = (Skissm__MsgKey *) malloc(sizeof(Skissm__MsgKey));
    skissm__msg_key__init(mk);
    create_msg_keys(cipher_suite, new_chain, mk);

    size_t result = verify_and_decrypt(
        cipher_suite, ad, mk, payload,
        plaintext_data
    );

    skissm__chain_key__free_unpacked(new_chain, NULL);
    skissm__msg_key__free_unpacked(mk, NULL);

    return result;
}

static size_t verify_and_decrypt_for_new_chain(
    const cipher_suite_t *cipher_suite,
    const Skissm__Ratchet *ratchet, ProtobufCBinaryData ad,
    const Skissm__One2oneMsgPayload *payload,
    uint8_t **plaintext_data
) {
    ProtobufCBinaryData new_root_key = {0, NULL};
    Skissm__ReceiverChainNode new_chain;

    /** The sender_chain will not be released since we need our ratchet key
     * for ECDH or Decaps. */
    if (ratchet->sender_chain == NULL) {
        ssm_notify_log(NULL, BAD_MESSAGE_DECRYPTION, "verify_and_decrypt_for_new_chain()");
        return 0;
    }

    uint32_t coming_root_sequence = payload->root_sequence;
    uint32_t our_root_sequence = ratchet->root_sequence;

    // coming_root_sequence should be positive
    if (coming_root_sequence == 0) {
        ssm_notify_log(NULL, BAD_MESSAGE_FORMAT, "verify_and_decrypt_for_new_chain()");
        return 0;
    }
    if (cipher_suite->kem_suite->get_crypto_param().pqc_param == false) {
        assert(payload->ratchet_key.len == cipher_suite->kem_suite->get_crypto_param().asym_pub_key_len);
    } else {
        assert(payload->ratchet_key.len == cipher_suite->kem_suite->get_crypto_param().kem_ciphertext_len);
    }

    skissm__receiver_chain_node__init(&new_chain);

    new_chain.chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
    skissm__chain_key__init(new_chain.chain_key);

    uint32_t i;
    copy_protobuf_from_protobuf(&new_root_key, &(ratchet->root_key));
    ProtobufCBinaryData *our_private_key = &(ratchet->receiver_chain->our_ratchet_private_key);
    for (i = our_root_sequence; i < coming_root_sequence; i++) {
        create_chain_key(
            cipher_suite,
            new_root_key, our_private_key,
            &(payload->ratchet_key), &new_root_key,
            new_chain.chain_key, NULL
        );
    }

    size_t result = verify_and_decrypt_for_existing_chain(
        cipher_suite,
        ad, new_chain.chain_key, payload,
        plaintext_data
    );

    free_protobuf(&new_root_key);
    unset((void volatile *)&new_root_key, sizeof(ProtobufCBinaryData));
    free_protobuf(&(new_chain.chain_key->shared_key));
    unset((void volatile *)&new_chain, sizeof(Skissm__ReceiverChainNode));

    return result;
}

void initialise_ratchet(Skissm__Ratchet **ratchet){
    *ratchet = (Skissm__Ratchet *) malloc(sizeof(Skissm__Ratchet));
    skissm__ratchet__init(*ratchet);
}

void initialise_as_bob(
    const cipher_suite_t *cipher_suite,
    Skissm__Ratchet *ratchet, const uint8_t *shared_secret, size_t shared_secret_length,
    const Skissm__KeyPair *our_ratchet_key, ProtobufCBinaryData *their_ratchet_key
){
    int shared_key_len = cipher_suite->hash_suite->get_crypto_param().hash_len;
    // the ssk will be 64 bytes
    uint8_t derived_secrets[2 * shared_key_len];
    int hash_len = cipher_suite->hash_suite->get_crypto_param().hash_len;
    uint8_t salt[hash_len];
    memset(salt, 0, hash_len);
    cipher_suite->hash_suite->hkdf(
        shared_secret, shared_secret_length,
        salt, sizeof(salt),
        (uint8_t *)KDF_INFO_ROOT, sizeof(KDF_INFO_ROOT) - 1,
        derived_secrets, sizeof(derived_secrets)
    );

    ratchet->receiver_chain = (Skissm__ReceiverChainNode *) malloc(sizeof(Skissm__ReceiverChainNode));
    Skissm__ReceiverChainNode *receiver_chain = ratchet->receiver_chain;
    skissm__receiver_chain_node__init(receiver_chain);
    copy_protobuf_from_protobuf(&(receiver_chain->our_ratchet_private_key), &(our_ratchet_key->private_key));

    ratchet->sender_chain = (Skissm__SenderChainNode *) malloc(sizeof(Skissm__SenderChainNode));
    Skissm__SenderChainNode *sender_chain = ratchet->sender_chain;
    skissm__sender_chain_node__init(sender_chain);
    sender_chain->chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
    skissm__chain_key__init(sender_chain->chain_key);
    sender_chain->chain_key->index = 0;

    /** The first half of the derived_secrets will be the root key,
     *  and the second half will be the sender chain key */
    copy_protobuf_from_array(&(ratchet->root_key), derived_secrets, shared_key_len);

    copy_protobuf_from_array(&(sender_chain->chain_key->shared_key), derived_secrets + shared_key_len, shared_key_len);

    copy_protobuf_from_protobuf(&(sender_chain->their_ratchet_public_key), their_ratchet_key);

    if (cipher_suite->kem_suite->get_crypto_param().pqc_param == false) {
        // ECC mode
        copy_protobuf_from_protobuf(&(sender_chain->our_ratchet_public_key), &(our_ratchet_key->public_key));
    } else {
        // PQC mode
        uint32_t ciphertext_len = cipher_suite->kem_suite->get_crypto_param().kem_ciphertext_len;
        sender_chain->our_ratchet_public_key.len = ciphertext_len;
        int temp_shared_key_len = cipher_suite->kem_suite->get_crypto_param().shared_secret_len;
        uint8_t temp_secret[temp_shared_key_len];
        sender_chain->our_ratchet_public_key.data = cipher_suite->kem_suite->ss_key_gen(NULL, their_ratchet_key, temp_secret);

        unset(temp_secret, sizeof(temp_secret));
    }

    unset(derived_secrets, sizeof(derived_secrets));
}

void initialise_as_alice(
    const cipher_suite_t *cipher_suite,
    Skissm__Ratchet *ratchet, const uint8_t *shared_secret, size_t shared_secret_length,
    const Skissm__KeyPair *our_ratchet_key,
    ProtobufCBinaryData *their_ratchet_key, ProtobufCBinaryData *their_encaps_ciphertext
){
    int shared_key_len = cipher_suite->hash_suite->get_crypto_param().hash_len;
    // the length of derived_secrets will be 64 bytes
    uint8_t derived_secrets[2 * shared_key_len];
    memset(derived_secrets, 0, 2 * shared_key_len);
    int hash_len = cipher_suite->hash_suite->get_crypto_param().hash_len;
    uint8_t salt[hash_len];
    memset(salt, 0, hash_len);

    // shared_secret_length may be 128 or 96
    cipher_suite->hash_suite->hkdf(
        shared_secret, shared_secret_length,
        salt, sizeof(salt),
        (uint8_t *)KDF_INFO_ROOT, sizeof(KDF_INFO_ROOT) - 1,
        derived_secrets, sizeof(derived_secrets)
    );
    ratchet->receiver_chain = (Skissm__ReceiverChainNode *) malloc(sizeof(Skissm__ReceiverChainNode));
    Skissm__ReceiverChainNode *receiver_chain = ratchet->receiver_chain;
    skissm__receiver_chain_node__init(receiver_chain);
    receiver_chain->chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
    skissm__chain_key__init(receiver_chain->chain_key);

    /** The first half of the derived_secrets will be the root key,
     *  and the second half will be the receiver chain key */
    copy_protobuf_from_array(&(ratchet->root_key), derived_secrets, shared_key_len);

    copy_protobuf_from_array(&(receiver_chain->chain_key->shared_key), derived_secrets + shared_key_len, shared_key_len);

    copy_protobuf_from_protobuf(&(receiver_chain->our_ratchet_private_key), &(our_ratchet_key->private_key));
    if (cipher_suite->kem_suite->get_crypto_param().pqc_param == false) {
        // ECC mode
        copy_protobuf_from_protobuf(&(receiver_chain->their_ratchet_public_key), their_ratchet_key);
    } else {
        // PQC mode
        copy_protobuf_from_protobuf(&(receiver_chain->their_ratchet_public_key), their_encaps_ciphertext);
    }

    // generate a new root key and a sender chain key
    ratchet->sender_chain = (Skissm__SenderChainNode *) malloc(sizeof(Skissm__SenderChainNode));
    Skissm__SenderChainNode *sender_chain = ratchet->sender_chain;
    skissm__sender_chain_node__init(sender_chain);

    sender_chain->chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
    skissm__chain_key__init(sender_chain->chain_key);

    if (cipher_suite->kem_suite->get_crypto_param().pqc_param == false) {
        // ECC mode
        create_chain_key(
            cipher_suite, ratchet->root_key, &(our_ratchet_key->private_key), their_ratchet_key,
            &(ratchet->root_key), sender_chain->chain_key, NULL
        );
        copy_protobuf_from_protobuf(&(sender_chain->our_ratchet_public_key), &(our_ratchet_key->public_key));
        copy_protobuf_from_protobuf(&(sender_chain->their_ratchet_public_key), their_ratchet_key);
    } else {
        // PQC mode
        create_chain_key(
            cipher_suite, ratchet->root_key, NULL, their_ratchet_key,
            &(ratchet->root_key), sender_chain->chain_key, &(sender_chain->our_ratchet_public_key)
        );
        copy_protobuf_from_protobuf(&(sender_chain->their_ratchet_public_key), their_ratchet_key);
    }

    // inviter's initial root sequence
    ratchet->root_sequence = 1;

    unset(derived_secrets, sizeof(derived_secrets));
}

void encrypt_ratchet(
    const cipher_suite_t *cipher_suite,
    Skissm__Ratchet *ratchet,
    ProtobufCBinaryData ad,
    const uint8_t *plaintext_data, size_t plaintext_data_len,
    Skissm__One2oneMsgPayload **payload
) {
    Skissm__SenderChainNode *sender_chain = ratchet->sender_chain;

    Skissm__MsgKey *msg_key = (Skissm__MsgKey *) malloc(sizeof(Skissm__MsgKey));
    skissm__msg_key__init(msg_key);
    create_msg_keys(cipher_suite, sender_chain->chain_key, msg_key);
    advance_chain_key(cipher_suite, sender_chain->chain_key);

    (ratchet->sending_message_sequence)++;

    uint32_t sequence = msg_key->index;

    *payload = (Skissm__One2oneMsgPayload *) malloc(sizeof(Skissm__One2oneMsgPayload));
    skissm__one2one_msg_payload__init(*payload);
    (*payload)->sequence = sequence;
    copy_protobuf_from_protobuf(&((*payload)->ratchet_key), &(ratchet->sender_chain->our_ratchet_public_key));
    (*payload)->root_sequence = ratchet->root_sequence;
    (*payload)->sending_message_sequence = ratchet->sending_message_sequence;
    (*payload)->ciphertext.len = cipher_suite->symmetric_encryption_suite->encrypt(
        &ad,
        msg_key->derived_key.data,
        plaintext_data, plaintext_data_len,
        &((*payload)->ciphertext.data)
    );

    // release
    skissm__msg_key__free_unpacked(msg_key, NULL);

    // done
    return;
}

size_t decrypt_ratchet(
    const cipher_suite_t *cipher_suite,
    Skissm__Ratchet *ratchet, ProtobufCBinaryData ad, Skissm__One2oneMsgPayload *payload,
    uint8_t **plaintext_data
) {
    int ratchet_key_len;
    if (cipher_suite->kem_suite->get_crypto_param().pqc_param == false) {
        ratchet_key_len = cipher_suite->kem_suite->get_crypto_param().asym_pub_key_len;
    } else {
        ratchet_key_len = cipher_suite->kem_suite->get_crypto_param().kem_ciphertext_len;
    }

    if (!payload->ratchet_key.data || !payload->ciphertext.data) {
        ssm_notify_log(NULL, BAD_MESSAGE_FORMAT, "decrypt_ratchet()");
        return 0;
    }

    Skissm__ReceiverChainNode *receiver_chain = NULL;
    bool skipped_message = false;

    uint32_t coming_root_sequence = payload->root_sequence;
    uint32_t our_root_sequence = ratchet->root_sequence;
    if (coming_root_sequence != our_root_sequence) {
        if (coming_root_sequence < our_root_sequence) {
            if (coming_root_sequence == our_root_sequence - 1) {
                if (!compare_protobuf(&(ratchet->receiver_chain->their_ratchet_public_key), &(payload->ratchet_key))) {
                    ssm_notify_log(NULL, BAD_MESSAGE_FORMAT, "decrypt_ratchet()");
                    return 0;
                }
                // the current chain
                receiver_chain = ratchet->receiver_chain;
                if (receiver_chain->chain_key->index > payload->sequence) {
                    skipped_message = true;
                }
            } else {
                // the chain before the current one
                skipped_message = true;
            }
        } else {
            if (coming_root_sequence == our_root_sequence + 1) {
                // a new ratchet key is generated
            } else {
                ssm_notify_log(NULL, BAD_MESSAGE_SEQUENCE, "decrypt_ratchet() coming_root_sequence: %d, our_root_sequence: %d",
                    coming_root_sequence, our_root_sequence);
                return 0;
            }
        }
    } else {
        ssm_notify_log(NULL, BAD_MESSAGE_SEQUENCE, "decrypt_ratchet() coming_root_sequence: %d, our_root_sequence: %d",
            coming_root_sequence, our_root_sequence);
        return 0;
    }

    size_t result = 0;
    if (skipped_message == true) {
        /* receiver_chain already advanced beyond the key for this message
         * Check if the message keys are in the skipped key list. */
        size_t i, j;
        for (i = 0; i < ratchet->n_skipped_msg_key_list; i++){
            if (payload->sequence == ratchet->skipped_msg_key_list[i]->msg_key->index
                && 0 == memcmp(
                    ratchet->skipped_msg_key_list[i]->ratchet_key_public.data,
                    payload->ratchet_key.data,
                    ratchet_key_len
                )
            ){
                result = verify_and_decrypt(
                    cipher_suite, ad, ratchet->skipped_msg_key_list[i]->msg_key, payload,
                    plaintext_data
                );

                if (result > 0){
                    Skissm__SkippedMsgKeyNode **temp_skipped_message_keys = (Skissm__SkippedMsgKeyNode **) malloc(sizeof(Skissm__SkippedMsgKeyNode *) * (ratchet->n_skipped_msg_key_list - 1));

                    size_t k = 0;
                    for (j = 0; j < ratchet->n_skipped_msg_key_list; j++) {
                        if (j == i) {
                            // remove node
                            continue;
                        }
                        temp_skipped_message_keys[k] = (Skissm__SkippedMsgKeyNode *) malloc(sizeof(Skissm__SkippedMsgKeyNode));
                        skissm__skipped_msg_key_node__init(temp_skipped_message_keys[k]);
                        copy_protobuf_from_protobuf(&(temp_skipped_message_keys[k]->ratchet_key_public), &(ratchet->skipped_msg_key_list[j]->ratchet_key_public));
                        temp_skipped_message_keys[k]->msg_key = (Skissm__MsgKey *) malloc(sizeof(Skissm__MsgKey));
                        skissm__msg_key__init(temp_skipped_message_keys[k]->msg_key);
                        temp_skipped_message_keys[k]->msg_key->index = ratchet->skipped_msg_key_list[j]->msg_key->index;
                        copy_protobuf_from_protobuf(&(temp_skipped_message_keys[k]->msg_key->derived_key), &(ratchet->skipped_msg_key_list[j]->msg_key->derived_key));
                        k++;
                    }
                    free_skipped_message_key(&(ratchet->skipped_msg_key_list), ratchet->n_skipped_msg_key_list);
                    ratchet->skipped_msg_key_list = temp_skipped_message_keys;
                    (ratchet->n_skipped_msg_key_list)--;
                    break;
                } else {
                    ssm_notify_log(NULL, BAD_MESSAGE_MAC, "verify_and_decrypt() in decrypt_ratchet()");
                    return 0;
                }
            }
        }
        if (result == 0) {
            // the corresponding message key not found
            ssm_notify_log(NULL, BAD_MESSAGE_KEY, "decrypt_ratchet()");
        }
    } else {
        if (receiver_chain == NULL) {
            /* They have started using a new ephemeral ratchet key.
            * We will check if we can decrypt the message correctly.
            * We will not store our new chain key now.
            * We will store our new chain key later when decrypting the message correctly. */
            result = verify_and_decrypt_for_new_chain(
                cipher_suite,
                ratchet, ad, payload, plaintext_data
            );
            if (result == 0) {
                ssm_notify_log(NULL, BAD_MESSAGE_MAC, "verify_and_decrypt_for_new_chain() in decrypt_ratchet()");
                return 0;
            }
        } else {
            /* They use the same ratchet key. The sequence of the payload(incoming message)
             * may be bigger than or equal to the index of our receiver chain. */
            result = verify_and_decrypt_for_existing_chain(
                cipher_suite,
                ad, receiver_chain->chain_key,
                payload, plaintext_data
            );
            if (result == 0) {
                ssm_notify_log(NULL, BAD_MESSAGE_MAC, "verify_and_decrypt_for_existing_chain() in decrypt_ratchet()");
                return 0;
            }
        }
    }

    // ready to advance chain key of receiver_chain
    if (receiver_chain == NULL && skipped_message == false) {
        /* They have started using a new ephemeral ratchet key.
         * We need to derive a new set of chain keys.
         * We can discard our previous empheral ratchet key.
         * We will generate a new key when we send the next message. */

        if (payload->sending_message_sequence - ratchet->received_message_sequence > payload->sequence + 1) {
            int ret = 0;
            if (ratchet->receiver_chain->chain_key == NULL) {
                ret = -1;
            }

            if (ret == 0) {
                // we skipped some messages in the previous ratchet
                size_t skipped_num =
                        payload->sending_message_sequence - ratchet->received_message_sequence -
                        (payload->sequence + 1);
                if (ratchet->skipped_msg_key_list == NULL) {
                    ratchet->skipped_msg_key_list = (Skissm__SkippedMsgKeyNode **) malloc(
                            sizeof(Skissm__SkippedMsgKeyNode * ) * skipped_num);
                } else {
                    Skissm__SkippedMsgKeyNode **temp_skipped_message_keys;
                    temp_skipped_message_keys = (Skissm__SkippedMsgKeyNode **) malloc(
                            sizeof(Skissm__SkippedMsgKeyNode * ) *
                            (ratchet->n_skipped_msg_key_list + skipped_num));
                    copy_skipped_msg_key_node(temp_skipped_message_keys,
                                              ratchet->skipped_msg_key_list,
                                              ratchet->n_skipped_msg_key_list);
                    free_skipped_message_key(&(ratchet->skipped_msg_key_list),
                                             ratchet->n_skipped_msg_key_list);
                    ratchet->skipped_msg_key_list = temp_skipped_message_keys;
                }
                size_t cur_seq;
                for (cur_seq = 0; cur_seq < skipped_num; cur_seq++) {
                    // insert data
                    Skissm__SkippedMsgKeyNode *key = (Skissm__SkippedMsgKeyNode *) malloc(
                            sizeof(Skissm__SkippedMsgKeyNode));
                    skissm__skipped_msg_key_node__init(key);
                    key->msg_key = (Skissm__MsgKey *) malloc(sizeof(Skissm__MsgKey));
                    skissm__msg_key__init(key->msg_key);
                    create_msg_keys(cipher_suite, ratchet->receiver_chain->chain_key, key->msg_key);
                    copy_protobuf_from_protobuf(&(key->ratchet_key_public),
                                                &(ratchet->receiver_chain->their_ratchet_public_key));

                    ratchet->skipped_msg_key_list[ratchet->n_skipped_msg_key_list] = key;
                    (ratchet->n_skipped_msg_key_list)++;
                    advance_chain_key(cipher_suite, ratchet->receiver_chain->chain_key);
                }
            }
        }

        Skissm__KeyPair *new_ratchet_key_pair = NULL;

        Skissm__ReceiverChainNode *new_receiver_chain = (Skissm__ReceiverChainNode *) malloc(sizeof(Skissm__ReceiverChainNode));
        skissm__receiver_chain_node__init(new_receiver_chain);

        // copy their ratchet key
        copy_protobuf_from_protobuf(&(new_receiver_chain->their_ratchet_public_key), &(payload->ratchet_key));

        // create a new receiver chain key
        new_receiver_chain->chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
        skissm__chain_key__init(new_receiver_chain->chain_key);
        create_chain_key(
            cipher_suite,
            ratchet->root_key,
            &(ratchet->receiver_chain->our_ratchet_private_key),
            &(new_receiver_chain->their_ratchet_public_key),
            &(ratchet->root_key),
            new_receiver_chain->chain_key,
            NULL
        );

        receiver_chain = new_receiver_chain;

        // create a new sender chain
        Skissm__SenderChainNode *new_sender_chain = (Skissm__SenderChainNode *)malloc(sizeof(Skissm__SenderChainNode));
        skissm__sender_chain_node__init(new_sender_chain);

        new_sender_chain->chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
        skissm__chain_key__init(new_sender_chain->chain_key);
        if (cipher_suite->kem_suite->get_crypto_param().pqc_param == false) {
            // ECC mode
            new_ratchet_key_pair = (Skissm__KeyPair *) malloc(sizeof(Skissm__KeyPair));
            skissm__key_pair__init(new_ratchet_key_pair);
            cipher_suite->kem_suite->asym_key_gen(&new_ratchet_key_pair->public_key, &new_ratchet_key_pair->private_key);

            copy_protobuf_from_protobuf(&(new_receiver_chain->our_ratchet_private_key), &(new_ratchet_key_pair->private_key));

            copy_protobuf_from_protobuf(&(new_sender_chain->our_ratchet_public_key), &(new_ratchet_key_pair->public_key));
            copy_protobuf_from_protobuf(&(new_sender_chain->their_ratchet_public_key), &(new_receiver_chain->their_ratchet_public_key));
            create_chain_key(
                cipher_suite,
                ratchet->root_key, &(new_ratchet_key_pair->private_key), &(new_sender_chain->their_ratchet_public_key),
                &(ratchet->root_key), new_sender_chain->chain_key, NULL
            );
        } else {
            // PQC mode
            copy_protobuf_from_protobuf(&(new_receiver_chain->our_ratchet_private_key), &(ratchet->receiver_chain->our_ratchet_private_key));

            copy_protobuf_from_protobuf(&(new_sender_chain->their_ratchet_public_key), &(ratchet->sender_chain->their_ratchet_public_key));
            create_chain_key(
                cipher_suite,
                ratchet->root_key, NULL, &(new_sender_chain->their_ratchet_public_key),
                &(ratchet->root_key), new_sender_chain->chain_key, &(new_sender_chain->our_ratchet_public_key)
            );
        }

        skissm__receiver_chain_node__free_unpacked(ratchet->receiver_chain, NULL);
        ratchet->receiver_chain = new_receiver_chain;
        (ratchet->root_sequence)++;

        skissm__sender_chain_node__free_unpacked(ratchet->sender_chain, NULL);
        ratchet->sender_chain = new_sender_chain;
        (ratchet->root_sequence)++;
    }

    if (receiver_chain == NULL) {
        // that means we decrypt the message with the previous ratchet
        return result;
    }

    if (receiver_chain->chain_key->index < payload->sequence){
        /* We skipped some messages.
         * We will generate the corresponding message keys and store them
         * together with their ratchet key in the skipped message key list. */
        size_t skipped_num = payload->sequence - receiver_chain->chain_key->index;
        if (ratchet->skipped_msg_key_list == NULL){
            ratchet->skipped_msg_key_list = (Skissm__SkippedMsgKeyNode **) malloc(sizeof(Skissm__SkippedMsgKeyNode *) * skipped_num);
        } else{
            Skissm__SkippedMsgKeyNode **temp_skipped_message_keys;
            temp_skipped_message_keys = (Skissm__SkippedMsgKeyNode **) malloc(sizeof(Skissm__SkippedMsgKeyNode *) * (ratchet->n_skipped_msg_key_list + skipped_num));
            copy_skipped_msg_key_node(temp_skipped_message_keys, ratchet->skipped_msg_key_list, ratchet->n_skipped_msg_key_list);
            free_skipped_message_key(&(ratchet->skipped_msg_key_list), ratchet->n_skipped_msg_key_list);
            ratchet->skipped_msg_key_list = temp_skipped_message_keys;
        }
        while (receiver_chain->chain_key->index < payload->sequence){
            // insert data
            Skissm__SkippedMsgKeyNode *key = (Skissm__SkippedMsgKeyNode *) malloc(sizeof(Skissm__SkippedMsgKeyNode));
            skissm__skipped_msg_key_node__init(key);
            key->msg_key = (Skissm__MsgKey *) malloc(sizeof(Skissm__MsgKey));
            skissm__msg_key__init(key->msg_key);
            create_msg_keys(cipher_suite, receiver_chain->chain_key, key->msg_key);
            copy_protobuf_from_protobuf(&(key->ratchet_key_public), &(receiver_chain->their_ratchet_public_key));

            ratchet->skipped_msg_key_list[ratchet->n_skipped_msg_key_list] = key;
            (ratchet->n_skipped_msg_key_list)++;
            advance_chain_key(cipher_suite, receiver_chain->chain_key);
        }

        ratchet->received_message_sequence = payload->sending_message_sequence;
    }

    if (receiver_chain->chain_key->index == payload->sequence) {
        /* If we decrypt the incoming message by a skipped message key,
         * we will not need to advance the chain key. */
        advance_chain_key(cipher_suite, receiver_chain->chain_key);
    }

    return result;
}
