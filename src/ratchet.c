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
#include "skissm/error.h"
#include "skissm/mem_util.h"

static const char MESSAGE_KEY_SEED[] = "MessageKeys";
static const uint8_t CHAIN_KEY_SEED[1] = {0x02};
static const size_t MAX_RECEIVER_CHAIN_NODES = 4;
static const size_t MAX_SKIPPED_MESSAGE_KEY_NODES = 32;
static const size_t MAX_CHAIN_INDEX = 512;

static void copy_receiver_chain_node(
    Skissm__ReceiverChainNode **dest,
    Skissm__ReceiverChainNode **src,
    size_t num
) {
    size_t i;
    for (i = 0; i < num; i++){
        dest[i] = (Skissm__ReceiverChainNode *) malloc(sizeof(Skissm__ReceiverChainNode));
        skissm__receiver_chain_node__init(dest[i]);
        copy_protobuf_from_protobuf(&(dest[i]->ratchet_key_public), &(src[i]->ratchet_key_public));
        dest[i]->chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
        skissm__chain_key__init(dest[i]->chain_key);
        dest[i]->chain_key->index = src[i]->chain_key->index;
        copy_protobuf_from_protobuf(&(dest[i]->chain_key->shared_key), &(src[i]->chain_key->shared_key));
    }
}

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
    for (i = 0; i < num; i++){
        skissm__receiver_chain_node__free_unpacked((*src)[i], NULL);
        (*src)[i] = NULL;
    }
    free(*src);
    *src = NULL;
}

static void free_skipped_message_key(
    Skissm__SkippedMsgKeyNode ***src,
    size_t num
) {
    size_t i;
    for (i = 0; i < num; i++){
        skissm__skipped_msg_key_node__free_unpacked((*src)[i], NULL);
        (*src)[i] = NULL;
    }
    free(*src);
    *src = NULL;
}

static void create_chain_key(
    const cipher_suite_t *cipher_suite,
    const ProtobufCBinaryData root_key,
    const ProtobufCBinaryData *our_private_key,
    const ProtobufCBinaryData *their_key,
    ProtobufCBinaryData *new_root_key,
    Skissm__ChainKey *new_chain_key
) {
    int shared_key_len = cipher_suite->get_crypto_param().hash_len;

    uint8_t secret[shared_key_len];
    memset(secret, 0, shared_key_len);
    cipher_suite->ss_key_gen(our_private_key, their_key, secret);
    uint8_t derived_secrets[2 * shared_key_len];
    cipher_suite->hkdf(
        secret, sizeof(secret),
        root_key.data, root_key.len,
        (uint8_t *)KDF_INFO_RATCHET, sizeof(KDF_INFO_RATCHET) - 1,
        derived_secrets, sizeof(derived_secrets)
    );

    if (new_root_key->data){
        overwrite_protobuf_from_array(new_root_key, derived_secrets);
    } else{
        copy_protobuf_from_array(new_root_key, derived_secrets, sizeof(derived_secrets));
    }

    new_chain_key->index = 0;
    copy_protobuf_from_array(&new_chain_key->shared_key, derived_secrets + 32, shared_key_len);

    unset(derived_secrets, sizeof(derived_secrets));
    unset(secret, sizeof(secret));
}

static void advance_chain_key(
    const cipher_suite_t *cipher_suite,
    Skissm__ChainKey *chain_key
) {
    int shared_key_len = cipher_suite->get_crypto_param().hash_len;
    uint8_t shared_key[shared_key_len];
    memset(shared_key, 0, shared_key_len);
    cipher_suite->hmac(
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
    int msg_key_len = cipher_suite->get_crypto_param().aead_key_len + cipher_suite->get_crypto_param().aead_iv_len;
    msg_key->derived_key.data = (uint8_t *) malloc(sizeof(uint8_t) * msg_key_len);
    msg_key->derived_key.len = msg_key_len;

    int hash_len = cipher_suite->get_crypto_param().hash_len;
    uint8_t salt[hash_len];
    memset(salt, 0, hash_len);
    cipher_suite->hkdf(
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
    size_t result = cipher_suite->decrypt(
        ad.data,
        message_key->derived_key.data,
        payload->ciphertext.data, payload->ciphertext.len,
        plaintext_data
    );

    if (result == (size_t)(-1))
        ssm_notify_error(BAD_MESSAGE_DECRYPTION, "verify_and_decrypt()");

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
        ssm_notify_error(BAD_MESSAGE_SEQUENCE, "verify_and_decrypt_for_existing_chain()");
        return (size_t)(-1);
    }

    // limit the number of hashes we're prepared to compute
    if (payload->sequence - chain->index > MAX_CHAIN_INDEX) {
        ssm_notify_error(BAD_MESSAGE_SEQUENCE, "verify_and_decrypt_for_existing_chain()");
        return (size_t)(-2);
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
        ssm_notify_error(BAD_MESSAGE_DECRYPTION, "verify_and_decrypt_for_new_chain()");
        return (size_t)(-1);
    }

    // Limit the number of hashes we're prepared to compute
    if (payload->sequence > MAX_CHAIN_INDEX) {
        ssm_notify_error(BAD_MESSAGE_SEQUENCE, "verify_and_decrypt_for_new_chain()");
        return (size_t)(-2);
    }

    assert(payload->ratchet_key.len == cipher_suite->get_crypto_param().asym_key_len);

    skissm__receiver_chain_node__init(&new_chain);
    copy_protobuf_from_protobuf(&(new_chain.ratchet_key_public), &(payload->ratchet_key));

    new_chain.chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
    skissm__chain_key__init(new_chain.chain_key);

    create_chain_key(
        cipher_suite,
        ratchet->root_key, &(ratchet->sender_chain->ratchet_key),
        &(new_chain.ratchet_key_public), &new_root_key, new_chain.chain_key
    );
    size_t result = verify_and_decrypt_for_existing_chain(
        cipher_suite,
        ad, new_chain.chain_key, payload,
        plaintext_data
    );

    free_protobuf(&new_root_key);
    unset((void volatile *)&new_root_key, sizeof(ProtobufCBinaryData));
    free_protobuf(&(new_chain.ratchet_key_public));
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
    const Skissm__KeyPair *our_ratchet_key
){
    int shared_key_len = cipher_suite->get_crypto_param().hash_len;
    // the ssk will be 64 bytes
    uint8_t derived_secrets[2 * shared_key_len];
    int hash_len = cipher_suite->get_crypto_param().hash_len;
    uint8_t salt[hash_len];
    memset(salt, 0, hash_len);
    cipher_suite->hkdf(
        shared_secret, shared_secret_length,
        salt, sizeof(salt),
        (uint8_t *)KDF_INFO_ROOT, sizeof(KDF_INFO_ROOT) - 1,
        derived_secrets, sizeof(derived_secrets)
    );

    ratchet->sender_chain = (Skissm__SenderChainNode *) malloc(sizeof(Skissm__SenderChainNode));
    skissm__sender_chain_node__init(ratchet->sender_chain);
    ratchet->sender_chain->chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
    skissm__chain_key__init(ratchet->sender_chain->chain_key);
    ratchet->sender_chain->chain_key->index = 0;

    /** The first half of the ssk will be the root key,
     *  and the second half will be the sending chain key */
    copy_protobuf_from_array(&(ratchet->root_key), derived_secrets, shared_key_len);

    copy_protobuf_from_array(&(ratchet->sender_chain->chain_key->shared_key), derived_secrets + shared_key_len, shared_key_len);

    copy_protobuf_from_protobuf(&(ratchet->sender_chain->ratchet_key), &(our_ratchet_key->private_key));

    unset(derived_secrets, sizeof(derived_secrets));
}

void initialise_as_alice(
    const cipher_suite_t *cipher_suite,
    Skissm__Ratchet *ratchet, const uint8_t *shared_secret, size_t shared_secret_length,
    const Skissm__KeyPair *our_ratchet_key, ProtobufCBinaryData *their_ratchet_key
){
    int shared_key_len = cipher_suite->get_crypto_param().hash_len;
    // the length of derived_secrets will be 64 bytes
    uint8_t derived_secrets[2 * shared_key_len];
    memset(derived_secrets, 0, 2 * shared_key_len);
    int hash_len = cipher_suite->get_crypto_param().hash_len;
    uint8_t salt[hash_len];
    memset(salt, 0, hash_len);

    // shared_secret_length may be 128 or 96
    cipher_suite->hkdf(
        shared_secret, shared_secret_length,
        salt, sizeof(salt),
        (uint8_t *)KDF_INFO_ROOT, sizeof(KDF_INFO_ROOT) - 1,
        derived_secrets, sizeof(derived_secrets)
    );
    ratchet->receiver_chains = (Skissm__ReceiverChainNode **) malloc(sizeof(Skissm__ReceiverChainNode *));
    ratchet->receiver_chains[0] = (Skissm__ReceiverChainNode *) malloc(sizeof(Skissm__ReceiverChainNode));
    skissm__receiver_chain_node__init(ratchet->receiver_chains[0]);
    ratchet->receiver_chains[0]->chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
    skissm__chain_key__init(ratchet->receiver_chains[0]->chain_key);

    /** The first half of the ssk will be the root key,
     *  and the second half will be the receiving chain key */
    copy_protobuf_from_array(&(ratchet->root_key), derived_secrets, shared_key_len);

    copy_protobuf_from_array(&(ratchet->receiver_chains[0]->chain_key->shared_key), derived_secrets + shared_key_len, shared_key_len);

    copy_protobuf_from_protobuf(&(ratchet->receiver_chains[0]->ratchet_key_public), their_ratchet_key);

    (ratchet->n_receiver_chains)++;

    // generate a new root key and a sending chain key
    ratchet->sender_chain = (Skissm__SenderChainNode *) malloc(sizeof(Skissm__SenderChainNode));
    skissm__sender_chain_node__init(ratchet->sender_chain);

    ratchet->sender_chain->chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
    skissm__chain_key__init(ratchet->sender_chain->chain_key);

    create_chain_key(cipher_suite, ratchet->root_key, &(our_ratchet_key->private_key), their_ratchet_key, &(ratchet->root_key), ratchet->sender_chain->chain_key);

    copy_protobuf_from_protobuf(&(ratchet->sender_chain->ratchet_key), &(our_ratchet_key->public_key));

    unset(derived_secrets, sizeof(derived_secrets));
}

void encrypt_ratchet(
    const cipher_suite_t *cipher_suite,
    Skissm__Ratchet *ratchet,
    ProtobufCBinaryData ad,
    const uint8_t *plaintext_data, size_t plaintext_data_len,
    Skissm__One2oneMsgPayload **payload
) {
    if (ratchet->sender_chain != NULL){
        if (ratchet->sender_chain->chain_key->index > MAX_CHAIN_INDEX){
            skissm__sender_chain_node__free_unpacked(ratchet->sender_chain, NULL);
            ratchet->sender_chain = NULL;
        }
    }
    // prepare a new sender chain if no available
    if (ratchet->sender_chain == NULL) {
        ratchet->sender_chain = (Skissm__SenderChainNode *) malloc(sizeof(Skissm__SenderChainNode));
        skissm__sender_chain_node__init(ratchet->sender_chain);
        Skissm__KeyPair *ratchet_key_pair = (Skissm__KeyPair *) malloc(sizeof(Skissm__KeyPair));
        skissm__key_pair__init(ratchet_key_pair);
        cipher_suite->asym_key_gen(&(ratchet_key_pair->public_key), &(ratchet_key_pair->private_key));
        copy_protobuf_from_protobuf(&(ratchet->sender_chain->ratchet_key), &(ratchet_key_pair->public_key));
        ratchet->sender_chain->chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
        skissm__chain_key__init(ratchet->sender_chain->chain_key);
        create_chain_key(
            cipher_suite,
            ratchet->root_key,
            &(ratchet_key_pair->private_key),
            &(ratchet->receiver_chains[ratchet->n_receiver_chains - 1]->ratchet_key_public),
            &(ratchet->root_key), ratchet->sender_chain->chain_key
        );
    }

    Skissm__MsgKey *msg_key;
    msg_key = (Skissm__MsgKey *) malloc(sizeof(Skissm__MsgKey));
    skissm__msg_key__init(msg_key);
    create_msg_keys(cipher_suite, ratchet->sender_chain->chain_key, msg_key);
    advance_chain_key(cipher_suite, ratchet->sender_chain->chain_key);

    uint32_t sequence = msg_key->index;
    int key_len = cipher_suite->get_crypto_param().asym_key_len;
    uint8_t *ratchet_key_data = (uint8_t *) malloc(key_len);
    memcpy(ratchet_key_data, ratchet->sender_chain->ratchet_key.data, key_len);

    *payload = (Skissm__One2oneMsgPayload *) malloc(sizeof(Skissm__One2oneMsgPayload));
    skissm__one2one_msg_payload__init(*payload);
    (*payload)->sequence = sequence;
    (*payload)->ratchet_key.data = ratchet_key_data;
    (*payload)->ratchet_key.len = key_len;
    (*payload)->ciphertext.len = cipher_suite->encrypt(
        ad.data,
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
    int key_len = cipher_suite->get_crypto_param().asym_key_len;

    if (!payload->ratchet_key.data
        || !payload->ciphertext.data) {
        ssm_notify_error(BAD_MESSAGE_FORMAT, "decrypt_ratchet()");
        return (size_t)(-1);
    }

    if (payload->ratchet_key.len != key_len) {
        ssm_notify_error(BAD_MESSAGE_FORMAT, "decrypt_ratchet()");
        return (size_t)(-2);
    }

    Skissm__ReceiverChainNode *chain = NULL;

    // find the corresponding receiving chain
    Skissm__ReceiverChainNode **cur = ratchet->receiver_chains;
    if (cur){
        size_t i;
        for (i = 0; i < ratchet->n_receiver_chains; i++){
            if (0 == memcmp(cur[i]->ratchet_key_public.data, payload->ratchet_key.data, key_len)){
                chain = cur[i];
                break;
            }
        }
    }

    size_t result = (size_t)(-1);
    if (!chain) {
        /* They have started using a new ephemeral ratchet key.
         * We will check if we can decrypt the message correctly.
         * We will not store our new chain key now.
         * We will store our new chain key later when decrypting the message correctly. */
        result = verify_and_decrypt_for_new_chain(
            cipher_suite,
            ratchet, ad, payload, plaintext_data
        );
        if (result < (size_t)(0)) {
            ssm_notify_error(BAD_MESSAGE_MAC, "decrypt_ratchet()");
            return (size_t)(-3);
        }
    } else if (chain->chain_key->index > payload->sequence) {
        /* Chain already advanced beyond the key for this message
         * Check if the message keys are in the skipped key list. */
        size_t i;
        for (i = 0; i < ratchet->n_skipped_msg_keys; i++){
            if (payload->sequence == ratchet->skipped_msg_keys[i]->msg_key->index
                && 0 == memcmp(ratchet->skipped_msg_keys[i]->ratchet_key_public.data, payload->ratchet_key.data,
                key_len
                )
            ){
                result = verify_and_decrypt(
                    cipher_suite, ad, ratchet->skipped_msg_keys[i]->msg_key, payload,
                    plaintext_data
                );

                if (result >= 0){
                    skissm__skipped_msg_key_node__free_unpacked(ratchet->skipped_msg_keys[i], NULL);
                    ratchet->skipped_msg_keys[i] = NULL;
                }
            }
        }
        if (result < (size_t)(0)) {
            ssm_notify_error(BAD_MESSAGE_MAC, "decrypt_ratchet()");
            return (size_t)(-4);
        }
    } else {
        // they use the same ratchet key
        result = verify_and_decrypt_for_existing_chain(
            cipher_suite,
            ad, chain->chain_key,
            payload, plaintext_data
        );
        if (result < (size_t)(0)) {
            ssm_notify_error(BAD_MESSAGE_MAC, "decrypt_ratchet()");
            return (size_t)(-5);
        }
    }

    if (!chain) {
        /* They have started using a new ephemeral ratchet key.
         * We need to derive a new set of chain keys.
         * We can discard our previous empheral ratchet key.
         * We will generate a new key when we send the next message. */

        chain = (Skissm__ReceiverChainNode *) malloc(sizeof(Skissm__ReceiverChainNode));
        skissm__receiver_chain_node__init(chain);

        copy_protobuf_from_protobuf(&(chain->ratchet_key_public), &(payload->ratchet_key));

        /* Create a new chain key */
        chain->chain_key = (Skissm__ChainKey *) malloc(sizeof(Skissm__ChainKey));
        skissm__chain_key__init(chain->chain_key);
        create_chain_key(
            cipher_suite,
            ratchet->root_key, &(ratchet->sender_chain->ratchet_key), &(chain->ratchet_key_public),
            &(ratchet->root_key), chain->chain_key
        );
        if (ratchet->receiver_chains == NULL){
            ratchet->receiver_chains = (Skissm__ReceiverChainNode **) malloc(sizeof(Skissm__ReceiverChainNode *));
        } else{
            Skissm__ReceiverChainNode **temp_receiver_chains;
            if (ratchet->n_receiver_chains == MAX_RECEIVER_CHAIN_NODES){
                temp_receiver_chains = (Skissm__ReceiverChainNode **) malloc(sizeof(Skissm__ReceiverChainNode *) * MAX_RECEIVER_CHAIN_NODES);
                copy_receiver_chain_node(temp_receiver_chains, &(ratchet->receiver_chains[1]), MAX_RECEIVER_CHAIN_NODES - 1);
                free_receiver_chain(&(ratchet->receiver_chains), ratchet->n_receiver_chains);
                (ratchet->n_receiver_chains)--;
            } else{
                temp_receiver_chains = (Skissm__ReceiverChainNode **) malloc(sizeof(Skissm__ReceiverChainNode *) * (ratchet->n_receiver_chains + 1));
                copy_receiver_chain_node(temp_receiver_chains, ratchet->receiver_chains, ratchet->n_receiver_chains);
                free_receiver_chain(&(ratchet->receiver_chains), ratchet->n_receiver_chains);
            }
            ratchet->receiver_chains = temp_receiver_chains;
        }
        ratchet->receiver_chains[ratchet->n_receiver_chains] = chain;
        (ratchet->n_receiver_chains)++;
    }

    if (chain->chain_key->index < payload->sequence){
        /* We skipped some messages.
         * We will generate the corresponding message keys and store them
         * together with their ratchet key in the skipped message key list. */
        while (chain->chain_key->index < payload->sequence){
            Skissm__SkippedMsgKeyNode *key = (Skissm__SkippedMsgKeyNode *) malloc(sizeof(Skissm__SkippedMsgKeyNode));
            skissm__skipped_msg_key_node__init(key);
            key->msg_key = (Skissm__MsgKey *) malloc(sizeof(Skissm__MsgKey));
            skissm__msg_key__init(key->msg_key);
            create_msg_keys(cipher_suite, chain->chain_key, key->msg_key);
            copy_protobuf_from_protobuf(&(key->ratchet_key_public), &(chain->ratchet_key_public));
            if (ratchet->skipped_msg_keys == NULL){
                ratchet->skipped_msg_keys = (Skissm__SkippedMsgKeyNode **) malloc(sizeof(Skissm__SkippedMsgKeyNode *));
            } else{
                Skissm__SkippedMsgKeyNode **temp_skipped_message_keys;
                if (ratchet->n_skipped_msg_keys == MAX_SKIPPED_MESSAGE_KEY_NODES){
                    temp_skipped_message_keys = (Skissm__SkippedMsgKeyNode **) malloc(sizeof(Skissm__SkippedMsgKeyNode *) * MAX_SKIPPED_MESSAGE_KEY_NODES);
                    copy_skipped_msg_key_node(temp_skipped_message_keys, &(ratchet->skipped_msg_keys[1]), MAX_SKIPPED_MESSAGE_KEY_NODES - 1);
                    free_skipped_message_key(&(ratchet->skipped_msg_keys), ratchet->n_skipped_msg_keys);
                    (ratchet->n_skipped_msg_keys)--;
                } else{
                    temp_skipped_message_keys = (Skissm__SkippedMsgKeyNode **) malloc(sizeof(Skissm__SkippedMsgKeyNode *) * (ratchet->n_skipped_msg_keys + 1));
                    copy_skipped_msg_key_node(temp_skipped_message_keys, ratchet->skipped_msg_keys, ratchet->n_skipped_msg_keys);
                    free_skipped_message_key(&(ratchet->skipped_msg_keys), ratchet->n_skipped_msg_keys);
                }
                ratchet->skipped_msg_keys = temp_skipped_message_keys;
            }
            ratchet->skipped_msg_keys[ratchet->n_skipped_msg_keys] = key;
            (ratchet->n_skipped_msg_keys)++;
            advance_chain_key(cipher_suite, chain->chain_key);
        }
    }

    advance_chain_key(cipher_suite, chain->chain_key);

    return result;
}
