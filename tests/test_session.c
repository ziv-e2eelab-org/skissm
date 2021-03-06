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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "skissm/account.h"
#include "skissm/account_manager.h"
#include "skissm/e2ee_client.h"
#include "skissm/mem_util.h"
#include "skissm/ratchet.h"
#include "skissm/session.h"
#include "skissm/session_manager.h"
#include "skissm/skissm.h"

#include "test_plugin.h"
#include "test_util.h"

#define account_data_max 10

static const cipher_suite_t *test_cipher_suite;

static Skissm__Account *account_data[account_data_max];

static uint8_t account_data_insert_pos;

typedef struct store_plaintext {
    uint8_t *plaintext;
    size_t plaintext_len;
} store_plaintext;

store_plaintext plaintext_store = {NULL, 0};

static uint8_t *f2f_password = NULL;
static size_t f2f_password_len = 0;

static void on_error(ErrorCode error_code, const char *error_msg) {
    print_error((char *)error_msg, error_code);
}

static void on_user_registered(Skissm__Account *account){
    copy_account_from_account(&(account_data[account_data_insert_pos]), account);
    account_data_insert_pos++;
}

static void on_inbound_session_invited(Skissm__E2eeAddress *from) {
    printf("on_inbound_session_invited\n");
}

static void on_inbound_session_ready(Skissm__Session *inbound_session){
    printf("on_inbound_session_ready\n");
}

static void on_outbound_session_ready(Skissm__Session *outbound_session){
    printf("on_outbound_session_ready\n");
}

static void on_f2f_password_created(uint8_t *password, size_t password_len) {
    f2f_password_len = password_len;
    f2f_password = (uint8_t *)malloc(sizeof(uint8_t) * f2f_password_len);
    memcpy(f2f_password, password, password_len);
}

static void get_f2f_password(uint8_t **password, size_t *password_len) {
    *password_len = f2f_password_len;
    *password = (uint8_t *)malloc(sizeof(uint8_t) * f2f_password_len);
    memcpy(*password, f2f_password, f2f_password_len);
}

static void on_one2one_msg_received(
    Skissm__E2eeAddress *from_address,
    Skissm__E2eeAddress *to_address,
    uint8_t *plaintext, size_t plaintext_len
) {
    print_msg("on_one2one_msg_received: plaintext", plaintext, plaintext_len);
    if (plaintext_store.plaintext != NULL){
        free_mem((void **)&(plaintext_store.plaintext), plaintext_store.plaintext_len);
    }
    plaintext_store.plaintext = (uint8_t *) malloc(sizeof(uint8_t) * plaintext_len);
    memcpy(plaintext_store.plaintext, plaintext, plaintext_len);
    plaintext_store.plaintext_len = plaintext_len;
}

static skissm_event_handler_t test_event_handler = {
    on_error,
    on_user_registered,
    on_inbound_session_invited,
    on_inbound_session_ready,
    on_outbound_session_ready,
    on_f2f_password_created,
    get_f2f_password,
    on_one2one_msg_received,
    NULL,
    NULL,
    NULL,
    NULL
};

static void test_begin(){
    account_data[0] = NULL;
    account_data[1] = NULL;
    account_data_insert_pos = 0;

    f2f_password = NULL;
    f2f_password_len = 0;

    get_skissm_plugin()->event_handler = test_event_handler;
}

static void test_end(){
    skissm__account__free_unpacked(account_data[0], NULL);
    account_data[0] = NULL;
    skissm__account__free_unpacked(account_data[1], NULL);
    account_data[1] = NULL;
    account_data_insert_pos = 0;

    if (f2f_password != NULL)
        free(f2f_password);
    f2f_password_len = 0;
}

static void mock_alice_account(uint64_t account_id, const char *user_name) {
    const char *e2ee_pack_id = TEST_E2EE_PACK_ID;
    const char *device_id = generate_uuid_str();
    const char *authenticator = "alice@domain.com.tw";
    const char *auth_code = "123456";
    Skissm__RegisterUserResponse *response =
        register_user(account_id,
            e2ee_pack_id,
            user_name,
            device_id,
            authenticator,
            auth_code);
    assert(safe_strcmp(device_id, response->address->user->device_id));
    printf("Test user registered: \"%s@%s\"\n", response->address->user->user_id, response->address->domain);
}

static void mock_bob_account(uint64_t account_id, const char *user_name) {
    const char *e2ee_pack_id = TEST_E2EE_PACK_ID;
    const char *device_id = generate_uuid_str();
    const char *authenticator = "bob@domain.com.tw";
    const char *auth_code = "654321";
    Skissm__RegisterUserResponse *response =
        register_user(account_id,
            e2ee_pack_id,
            user_name,
            device_id,
            authenticator,
            auth_code);
    assert(safe_strcmp(device_id, response->address->user->device_id));
    printf("Test user registered: \"%s@%s\"\n", response->address->user->user_id, response->address->domain);
}

static void test_encryption(
    Skissm__E2eeAddress *from_address, const char *to_user_id, const char *to_domain,
    uint8_t *plaintext, size_t plaintext_len
) {
    if (plaintext_store.plaintext != NULL){
        free_mem((void **)&(plaintext_store.plaintext), plaintext_store.plaintext_len);
    }

    // send encrypted msg
    send_one2one_msg(from_address, to_user_id, to_domain, plaintext, plaintext_len);
    if (plaintext_store.plaintext == NULL){
        printf("Test failed!!!\n");
        assert(false);
        return;
    }
    assert(plaintext_len == plaintext_store.plaintext_len);
    assert(memcmp(plaintext, plaintext_store.plaintext, plaintext_len) == 0);
}

static void test_basic_session(){
    // test start
    tear_up();
    test_begin();

    mock_alice_account(1, "alice");
    mock_bob_account(2, "bob");

    Skissm__E2eeAddress *alice_address = account_data[0]->address;
    Skissm__E2eeAddress *bob_address = account_data[1]->address;
    char *bob_user_id = bob_address->user->user_id;
    char *bob_domain = bob_address->domain;

    // Alice invites Bob to create a session
    Skissm__InviteResponse *response = invite(alice_address, bob_user_id, bob_domain);
    assert(response != NULL && response->code == SKISSM__RESPONSE_CODE__RESPONSE_CODE_OK); // waiting Accept

    // load the outbound session
    Skissm__Session *outbound_session = NULL;
    get_skissm_plugin()->db_handler.load_outbound_session(alice_address, bob_address, &outbound_session);
    assert(outbound_session != NULL);
    assert(outbound_session->responded == true);

    // load the inbound session
    Skissm__Session *inbound_session = NULL;
    get_skissm_plugin()->db_handler.load_inbound_session(outbound_session->session_id, outbound_session->to, &inbound_session);
    assert(compare_protobuf(&(outbound_session->ratchet->receiver_chains[0]->chain_key->shared_key), &(inbound_session->ratchet->sender_chain->chain_key->shared_key)));

    // Alice sends an encrypted message to Bob, and Bob decrypts the message
    uint8_t plaintext[] = "Hello, World";
    size_t plaintext_len = sizeof(plaintext) - 1;
    test_encryption(alice_address, bob_user_id, bob_domain, plaintext, plaintext_len);

    // test stop
    skissm__session__free_unpacked(outbound_session, NULL);
    test_end();
    tear_down();
}

static void test_interaction(){
    // test start
    tear_up();
    test_begin();

    mock_alice_account(1, "alice");
    mock_bob_account(2, "bob");

    Skissm__E2eeAddress *alice_address = account_data[0]->address;
    Skissm__E2eeAddress *bob_address = account_data[1]->address;
    char *alice_user_id = alice_address->user->user_id;
    char *alice_domain = alice_address->domain;
    char *bob_user_id = bob_address->user->user_id;
    char *bob_domain = bob_address->domain;

    Skissm__Session *outbound_session_a, *outbound_session_b;

    // Alice invites Bob to create a session
    Skissm__InviteResponse *response = invite(alice_address, bob_user_id, bob_domain);
    assert(response != NULL && response->code == SKISSM__RESPONSE_CODE__RESPONSE_CODE_OK); // waiting Accept

    // Alice loads the outbound session
    get_skissm_plugin()->db_handler.load_outbound_session(alice_address, bob_address, &outbound_session_a);
    assert(outbound_session_a != NULL);
    assert(outbound_session_a->responded == true);

    // Alice sends an encrypted message to Bob, and Bob decrypts the message
    uint8_t plaintext[] = "Hi! Bob! This is Alice.";
    size_t plaintext_len = sizeof(plaintext) - 1;
    test_encryption(alice_address, bob_user_id, bob_domain, plaintext, plaintext_len);

    // Bob invites Alice to create a session
    Skissm__InviteResponse *response1 = invite(bob_address, alice_user_id, alice_domain);
    assert(response1 != NULL && response1->code == SKISSM__RESPONSE_CODE__RESPONSE_CODE_OK); // waiting Accept

    // Bob loads the outbound session
    get_skissm_plugin()->db_handler.load_outbound_session(bob_address, alice_address, &outbound_session_b);
    assert(outbound_session_b != NULL);
    assert(outbound_session_b->responded == true);

    // Bob sends an encrypted message to Alice, and Alice decrypts the message
    uint8_t plaintext_2[] = "Hello! This is Bob.";
    size_t plaintext_len_2 = sizeof(plaintext_2) - 1;
    test_encryption(bob_address, alice_user_id, alice_domain, plaintext_2, plaintext_len_2);

    // test stop
    skissm__session__free_unpacked(outbound_session_a, NULL);
    skissm__session__free_unpacked(outbound_session_b, NULL);
    test_end();
    tear_down();
}

static void test_continual_messages(){
    // test start
    tear_up();
    test_begin();

    mock_alice_account(1, "alice");
    mock_bob_account(2, "bob");

    Skissm__E2eeAddress *alice_address = account_data[0]->address;
    Skissm__E2eeAddress *bob_address = account_data[1]->address;
    char *bob_user_id = bob_address->user->user_id;
    char *bob_domain = bob_address->domain;

    Skissm__Session *outbound_session = NULL;

    // Alice invites Bob to create a session
    Skissm__InviteResponse *response = invite(alice_address, bob_user_id, bob_domain);
    assert(response != NULL && response->code == SKISSM__RESPONSE_CODE__RESPONSE_CODE_OK); // waiting Accept

    // Alice sends an encrypted message to Bob, and Bob decrypts the message
    int i;
    for (i = 0; i < 1000; i++){
        uint8_t plaintext[64];
        size_t plaintext_len = snprintf((char *)plaintext, 64, "[%4d]This message will be sent a lot of times.", i);
        test_encryption(alice_address, bob_user_id, bob_domain, plaintext, plaintext_len);
    }

    // test stop
    skissm__session__free_unpacked(outbound_session, NULL);
    test_end();
    tear_down();
}

static void test_multiple_devices(){
    // test start
    tear_up();
    test_begin();

    mock_alice_account(1, "Alice");
    mock_bob_account(2, "Bob");
    mock_bob_account(3, "Bob");
    mock_bob_account(4, "Bob");

    // Bob's user_id should be the same
    assert(strcmp(account_data[1]->address->user->user_id, account_data[2]->address->user->user_id) == 0);
    assert(strcmp(account_data[1]->address->user->user_id, account_data[3]->address->user->user_id) == 0);

    Skissm__E2eeAddress *alice_address = account_data[0]->address;
    char *bob_user_id = account_data[1]->address->user->user_id;
    char *bob_domain = account_data[1]->address->domain;

    // Alice invites Bob to create a session
    Skissm__InviteResponse *response = invite(alice_address, bob_user_id, bob_domain);
    assert(response != NULL && response->code == SKISSM__RESPONSE_CODE__RESPONSE_CODE_OK); // waiting Accept

    // load the outbound sessions
    Skissm__Session **outbound_sessions = NULL;
    size_t outbound_sessions_num = get_skissm_plugin()->db_handler.load_outbound_sessions(alice_address, bob_user_id, &outbound_sessions);
    assert(outbound_sessions_num == 3);

    // load the inbound sessions
    Skissm__Session **inbound_sessions = (Skissm__Session **)malloc(sizeof(Skissm__Session *) * 3);
    get_skissm_plugin()->db_handler.load_inbound_session(outbound_sessions[0]->session_id, outbound_sessions[0]->to, &(inbound_sessions[0]));
    get_skissm_plugin()->db_handler.load_inbound_session(outbound_sessions[1]->session_id, outbound_sessions[1]->to, &(inbound_sessions[1]));
    get_skissm_plugin()->db_handler.load_inbound_session(outbound_sessions[2]->session_id, outbound_sessions[2]->to, &(inbound_sessions[2]));

    // check if the outbound sessions and inbound sessions match
    Skissm__Session *outbound_session, *inbound_session;
    outbound_session = outbound_sessions[0];
    inbound_session = inbound_sessions[0];
    assert(compare_protobuf(&(outbound_session->ratchet->receiver_chains[0]->chain_key->shared_key), &(inbound_session->ratchet->sender_chain->chain_key->shared_key)));
    outbound_session = outbound_sessions[1];
    inbound_session = inbound_sessions[1];
    assert(compare_protobuf(&(outbound_session->ratchet->receiver_chains[0]->chain_key->shared_key), &(inbound_session->ratchet->sender_chain->chain_key->shared_key)));
    outbound_session = outbound_sessions[2];
    inbound_session = inbound_sessions[2];
    assert(compare_protobuf(&(outbound_session->ratchet->receiver_chains[0]->chain_key->shared_key), &(inbound_session->ratchet->sender_chain->chain_key->shared_key)));

    // Alice sends an encrypted message to Bob, and Bob decrypts the message
    uint8_t plaintext[] = "This message will be sent to Bob's three devices.";
    size_t plaintext_len = sizeof(plaintext) - 1;
    test_encryption(alice_address, bob_user_id, bob_domain, plaintext, plaintext_len);

    // test stop
    size_t i;
    for (i = 0; i < outbound_sessions_num; i++) {
        skissm__session__free_unpacked(outbound_sessions[i], NULL);
        outbound_sessions[i] = NULL;
        skissm__session__free_unpacked(inbound_sessions[i], NULL);
        inbound_sessions[i] = NULL;
    }
    free(outbound_sessions);
    free(inbound_sessions);
    test_end();
    tear_down();
}

int main() {
    test_cipher_suite = get_e2ee_pack(TEST_E2EE_PACK_ID)->cipher_suite;

    test_basic_session();
    test_interaction();
    test_continual_messages();
    test_multiple_devices();

    return 0;
}
