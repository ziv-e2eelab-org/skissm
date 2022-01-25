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
#include <assert.h>
#include <string.h>

#include "skissm/cipher.h"
#include "skissm/mem_util.h"
#include "skissm/ratchet.h"

#include "test_util.h"
#include "test_env.h"

static void test_alice_to_bob(
  Skissm__KeyPair alice_ratchet_key,
  Skissm__KeyPair bob_spk,
  ProtobufCBinaryData session_id,
  ProtobufCBinaryData ad,
  uint8_t *shared_secret
) {
    Skissm__E2eeRatchet *alice_ratchet = NULL, *bob_ratchet = NULL;
    initialise_ratchet(&alice_ratchet);
    initialise_ratchet(&bob_ratchet);

    initialise_as_alice(alice_ratchet, shared_secret,
                        strlen((const char *)shared_secret), &alice_ratchet_key,
                        &(bob_spk.public_key));
    initialise_as_bob(bob_ratchet, shared_secret, strlen((const char *)shared_secret),
                      &bob_spk);
    int key_len = CIPHER.suite1->get_crypto_param().asym_key_len;
    assert(
        memcmp(
            bob_spk.public_key.data,
            bob_ratchet->sender_chain->ratchet_key_pair->public_key.data,
            key_len) == 0);
    assert(
        memcmp(
            bob_spk.private_key.data,
            bob_ratchet->sender_chain->ratchet_key_pair->private_key.data,
            key_len) == 0);

    uint8_t plaintext[] = "Message";
    size_t plaintext_length = sizeof(plaintext) - 1;

    size_t decrypt_length;

    /* Alice sends Bob a message */
    Skissm__E2eeMsgPayload *message;

    encrypt_ratchet(alice_ratchet, ad, plaintext, plaintext_length, &message);

    uint8_t *output;
    decrypt_length = decrypt_ratchet(bob_ratchet, ad, message, &output);
    print_msg("output: ", output, decrypt_length);

    bool result;
    assert(result = is_equal(plaintext, output, plaintext_length));

    if (result) {
      print_result("Decryption success!!!", true);
    } else {
      print_result("Decryption failed!!!", false);
    }

    skissm__e2ee_msg_payload__free_unpacked(message, NULL);
    free_mem((void **)&output, decrypt_length);
    skissm__e2ee_ratchet__free_unpacked(alice_ratchet, NULL);
    skissm__e2ee_ratchet__free_unpacked(bob_ratchet, NULL);
}

static void test_bob_to_alice(
  Skissm__KeyPair alice_ratchet_key,
  Skissm__KeyPair bob_spk,
  ProtobufCBinaryData session_id,
  ProtobufCBinaryData ad, uint8_t *shared_secret
) {
    Skissm__E2eeRatchet *alice_ratchet = NULL, *bob_ratchet = NULL;
    initialise_ratchet(&alice_ratchet);
    initialise_ratchet(&bob_ratchet);

    initialise_as_alice(alice_ratchet, shared_secret,
                        strlen((const char *)shared_secret), &alice_ratchet_key,
                        &(bob_spk.public_key));
    initialise_as_bob(bob_ratchet, shared_secret, strlen((const char *)shared_secret),
                      &bob_spk);
    int key_len = CIPHER.suite1->get_crypto_param().asym_key_len;
    assert(
        memcmp(
            bob_spk.public_key.data,
            bob_ratchet->sender_chain->ratchet_key_pair->public_key.data,
            key_len) == 0);

    uint8_t plaintext[] = "Message";
    size_t plaintext_length = sizeof(plaintext) - 1;

    size_t decrypt_length;

    /* Bob sends Alice a message */
    Skissm__E2eeMsgPayload *message;
    encrypt_ratchet(bob_ratchet, ad, plaintext, plaintext_length, &message);

    uint8_t *output;
    decrypt_length = decrypt_ratchet(alice_ratchet, ad, message, &output);

    bool result;
    assert(result = is_equal(plaintext, output, plaintext_length));
    if (result) {
      print_result("Decryption success!!!", true);
    } else {
      print_result("Decryption failed!!!", false);
    }

    skissm__e2ee_msg_payload__free_unpacked(message, NULL);
    free_mem((void **)&output, decrypt_length);
    skissm__e2ee_ratchet__free_unpacked(alice_ratchet, NULL);
    skissm__e2ee_ratchet__free_unpacked(bob_ratchet, NULL);
}

static void test_out_of_order(
  Skissm__KeyPair alice_ratchet_key,
  Skissm__KeyPair bob_spk,
  ProtobufCBinaryData session_id,
  ProtobufCBinaryData ad, uint8_t *shared_secret
) {
    Skissm__E2eeRatchet *alice_ratchet = NULL, *bob_ratchet = NULL;
    initialise_ratchet(&alice_ratchet);
    initialise_ratchet(&bob_ratchet);

    initialise_as_alice(alice_ratchet, shared_secret,
                        strlen((const char *)shared_secret), &alice_ratchet_key,
                        &(bob_spk.public_key));
    initialise_as_bob(bob_ratchet, shared_secret, strlen((const char *)shared_secret),
                      &bob_spk);

    uint8_t plaintext_1[] = "First Message";
    size_t plaintext_1_length = sizeof(plaintext_1) - 1;

    uint8_t plaintext_2[] = "Second Messsage. A bit longer than the first.";
    size_t plaintext_2_length = sizeof(plaintext_2) - 1;

    size_t message_1_length, message_2_length;
    size_t output_1_length, output_2_length;

    Skissm__E2eeMsgPayload *message_1;
    encrypt_ratchet(alice_ratchet, ad, plaintext_1, plaintext_1_length, &message_1);

    Skissm__E2eeMsgPayload *message_2;
    encrypt_ratchet(alice_ratchet, ad, plaintext_2, plaintext_2_length, &message_2);

    uint8_t *output_1;
    output_1_length = decrypt_ratchet(bob_ratchet, ad, message_2, &output_1);

    bool result;
    assert(result = is_equal(plaintext_2, output_1, plaintext_2_length));
    if (result) {
      print_result("The first decryption success!!!", true);
    } else {
      print_result("The first decryption failed!!!", false);
    }

    uint8_t *output_2;
    output_2_length = decrypt_ratchet(bob_ratchet, ad, message_1, &output_2);
    assert(result = is_equal(plaintext_1, output_2, plaintext_1_length));
    if (result) {
      print_result("The second decryption success!!!", true);
    } else {
      print_result("The second decryption failed!!!!", false);
    }

    skissm__e2ee_msg_payload__free_unpacked(message_1, NULL);
    skissm__e2ee_msg_payload__free_unpacked(message_2, NULL);
    free_mem((void **)&output_1, output_1_length);
    free_mem((void **)&output_2, output_2_length);
    skissm__e2ee_ratchet__free_unpacked(alice_ratchet, NULL);
    skissm__e2ee_ratchet__free_unpacked(bob_ratchet, NULL);
}

static void test_interaction(
  Skissm__KeyPair alice_ratchet_key,
  Skissm__KeyPair bob_spk,
  ProtobufCBinaryData session_id,
  ProtobufCBinaryData ad, uint8_t *shared_secret
) {
    Skissm__E2eeRatchet *alice_ratchet = NULL, *bob_ratchet = NULL;
    initialise_ratchet(&alice_ratchet);
    initialise_ratchet(&bob_ratchet);

    initialise_as_alice(alice_ratchet, shared_secret,
                        strlen((const char *)shared_secret), &alice_ratchet_key,
                        &(bob_spk.public_key));
    initialise_as_bob(bob_ratchet, shared_secret, strlen((const char *)shared_secret),
                      &bob_spk);

    uint8_t plaintext_alice[] = "This is a message from Alice.";
    size_t plaintext_length_alice = sizeof(plaintext_alice) - 1;

    size_t message_length_alice;
    size_t decrypt_length_alice;

    /* Alice sends Bob a message */
    Skissm__E2eeMsgPayload *message_alice;
    encrypt_ratchet(alice_ratchet, ad, plaintext_alice, plaintext_length_alice, &message_alice);

    /* Bob received the message from Alice */
    uint8_t *output_alice;
    decrypt_length_alice = decrypt_ratchet(bob_ratchet, ad, message_alice, &output_alice);

    bool result;
    assert(result = is_equal(plaintext_alice, output_alice, plaintext_length_alice));

    assert(bob_ratchet->sender_chain == NULL);

    /* Bob prepares to reply to Alice */
    uint8_t plaintext_bob[] = "This is a message from Bob.";
    size_t plaintext_length_bob = sizeof(plaintext_bob) - 1;

    size_t message_length_bob;
    size_t decrypt_length_bob;

    /* Bob sends Alice a message */
    Skissm__E2eeMsgPayload *message_bob;
    encrypt_ratchet(bob_ratchet, ad, plaintext_bob, plaintext_length_bob, &message_bob);

    int key_len = CIPHER.suite1->get_crypto_param().asym_key_len;
    assert(memcmp(bob_ratchet->sender_chain->ratchet_key_pair->public_key.data,
                  bob_spk.public_key.data, key_len) != 0);

    /* Alice decrypts the message from Bob */
    uint8_t *output_bob;
    decrypt_length_bob = decrypt_ratchet(alice_ratchet, ad, message_bob, &output_bob);

    assert(result = is_equal(plaintext_bob, output_bob, plaintext_length_bob));

    skissm__e2ee_msg_payload__free_unpacked(message_alice, NULL);
    skissm__e2ee_msg_payload__free_unpacked(message_bob, NULL);
    free_mem((void **)&output_alice, decrypt_length_alice);
    free_mem((void **)&output_bob, decrypt_length_bob);
    skissm__e2ee_ratchet__free_unpacked(alice_ratchet, NULL);
    skissm__e2ee_ratchet__free_unpacked(bob_ratchet, NULL);
}

static void test_two_ratchets(
  Skissm__KeyPair alice_ratchet_key,
  Skissm__KeyPair bob_ratchet_key,
  Skissm__KeyPair bob_spk,
  Skissm__KeyPair alice_spk,
  ProtobufCBinaryData session_id,
  ProtobufCBinaryData ad, uint8_t *shared_secret
) {
    /* This ratchet is used only for Alice to Bob. */
    Skissm__E2eeRatchet *alice_ratchet = NULL, *bob_ratchet = NULL;
    initialise_ratchet(&alice_ratchet);
    initialise_ratchet(&bob_ratchet);

    initialise_as_alice(alice_ratchet, shared_secret,
                        strlen((const char *)shared_secret), &alice_ratchet_key,
                        &(bob_spk.public_key));
    initialise_as_bob(bob_ratchet, shared_secret, strlen((const char *)shared_secret),
                      &bob_spk);

    /* This ratchet is used only for Bob to Alice. */
    Skissm__E2eeRatchet *alice_ratchet_2 = NULL, *bob_ratchet_2 = NULL;
    initialise_ratchet(&alice_ratchet_2);
    initialise_ratchet(&bob_ratchet_2);

    initialise_as_alice(bob_ratchet_2, shared_secret,
                        strlen((const char *)shared_secret), &bob_ratchet_key,
                        &(alice_spk.public_key));
    initialise_as_bob(alice_ratchet_2, shared_secret, strlen((const char *)shared_secret),
                      &alice_spk);

    /* Alice prepares a message */
    uint8_t plaintext_alice[] = "Hello, Bob!";
    size_t plaintext_length_alice = sizeof(plaintext_alice) - 1;

    size_t message_length_alice;
    size_t decrypt_length_alice;

    /* Alice sends Bob a message */
    Skissm__E2eeMsgPayload *message_alice;
    encrypt_ratchet(alice_ratchet, ad, plaintext_alice, plaintext_length_alice, &message_alice);

    /* Bob received the message from Alice */
    uint8_t *output_alice;
    decrypt_length_alice = decrypt_ratchet(bob_ratchet, ad, message_alice, &output_alice);

    bool result;
    assert(result = is_equal(plaintext_alice, output_alice, plaintext_length_alice));

    assert(bob_ratchet->sender_chain == NULL);

    /* Bob prepares to reply to Alice */
    uint8_t plaintext_bob[] = "Hey, Alice!";
    size_t plaintext_length_bob = sizeof(plaintext_bob) - 1;

    size_t message_length_bob;
    size_t decrypt_length_bob;

    /* Bob sends Alice a message */
    Skissm__E2eeMsgPayload *message_bob;
    encrypt_ratchet(bob_ratchet_2, ad, plaintext_bob, plaintext_length_bob, &message_bob);

    /* Alice decrypts the message from Bob */
    uint8_t *output_bob;
    decrypt_length_bob = decrypt_ratchet(alice_ratchet_2, ad, message_bob, &output_bob);

    assert(result = is_equal(plaintext_bob, output_bob, plaintext_length_bob));

    assert(alice_ratchet_2->sender_chain == NULL);

    skissm__e2ee_msg_payload__free_unpacked(message_alice, NULL);
    skissm__e2ee_msg_payload__free_unpacked(message_bob, NULL);
    free_mem((void **)&output_alice, decrypt_length_alice);
    free_mem((void **)&output_bob, decrypt_length_bob);
    skissm__e2ee_ratchet__free_unpacked(alice_ratchet, NULL);
    skissm__e2ee_ratchet__free_unpacked(bob_ratchet, NULL);
    skissm__e2ee_ratchet__free_unpacked(alice_ratchet_2, NULL);
    skissm__e2ee_ratchet__free_unpacked(bob_ratchet_2, NULL);
}

int main() {
    // test start
    setup();

    Skissm__KeyPair alice_ratchet_key, bob_ratchet_key;
    CIPHER.suite1->asym_key_gen(&(alice_ratchet_key.public_key), &(alice_ratchet_key.private_key));
    CIPHER.suite1->asym_key_gen(&(bob_ratchet_key.public_key), &(bob_ratchet_key.private_key));

    Skissm__KeyPair bob_spk, alice_spk;
    CIPHER.suite1->asym_key_gen(&(bob_spk.public_key), &(bob_spk.private_key));
    CIPHER.suite1->asym_key_gen(&(alice_spk.public_key), &(alice_spk.private_key));

    int ad_len = 64;
    uint8_t associated_data[ad_len];
    memset(associated_data, 0, ad_len);
    ProtobufCBinaryData ad;
    ad.len = ad_len;
    ad.data = (uint8_t *) malloc(ad_len * sizeof(uint8_t));
    int i;
    for (i = 0; i < 64; i++) {
      ad.data[i] = associated_data[i];
    }

    ProtobufCBinaryData session_id;
    random_id(&session_id, CIPHER.suite1->get_crypto_param().hash_len);

    uint8_t shared_secret[] = "shared_secret:nwjeldUbnjwcwkdt5q";

    // test_alice_to_bob(alice_ratchet_key, bob_spk, session_id, ad, shared_secret);

    // test_bob_to_alice(alice_ratchet_key, bob_spk, session_id, ad, shared_secret);

    // test_out_of_order(alice_ratchet_key, bob_spk, session_id, ad, shared_secret);

    // test_interaction(alice_ratchet_key, bob_spk, session_id, ad, shared_secret);

    test_two_ratchets(alice_ratchet_key, bob_ratchet_key, bob_spk, alice_spk, session_id, ad, shared_secret);

    // test stop.
    tear_down();
    return 0;
}
