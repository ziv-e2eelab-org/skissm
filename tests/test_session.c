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

#include "account.h"
#include "account_manager.h"
#include "e2ee_protocol.h"
#include "ratchet.h"
#include "session.h"
#include "skissm.h"
#include "mem_util.h"

#include "test_env.h"
#include "test_util.h"

extern register_user_response_handler register_user_response_handler_store;

#define account_data_max 2

static Org__E2eelab__Skissm__Proto__E2eeAccount *account_data[account_data_max];

static uint8_t account_data_insert_pos;

typedef struct store_plaintext {
  uint8_t *plaintext;
  size_t plaintext_len;
} store_plaintext;

store_plaintext plaintext_store = {NULL, 0};

static void test_begin(){
    account_data[0] = NULL;
    account_data[1] = NULL;
    account_data_insert_pos = 0;
}

static void test_end(){
    org__e2eelab__skissm__proto__e2ee_account__free_unpacked(account_data[0], NULL);
    account_data[0] = NULL;
    org__e2eelab__skissm__proto__e2ee_account__free_unpacked(account_data[1], NULL);
    account_data[1] = NULL;
    account_data_insert_pos = 0;
}

static void on_error(ErrorCode error_code, char *error_msg) {
    print_error(error_msg, error_code);
}

static void on_user_registered(Org__E2eelab__Skissm__Proto__E2eeAccount *account){
    copy_account_from_account(&(account_data[account_data_insert_pos]), account);
    account_data_insert_pos++;
}

static void on_one2one_msg_received(
    Org__E2eelab__Skissm__Proto__E2eeAddress *from_address,
    Org__E2eelab__Skissm__Proto__E2eeAddress *to_address,
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

static skissm_event_handler test_event_handler = {
    on_error,
    on_user_registered,
    on_one2one_msg_received,
    NULL,
    NULL,
    NULL,
    NULL
};

static void test_encryption(
    Org__E2eelab__Skissm__Proto__E2eeAddress *from_address,
    Org__E2eelab__Skissm__Proto__E2eeAddress *to_address,
    uint8_t *plaintext, size_t plaintext_len
) {
    uint8_t *context = NULL;
    size_t context_len;
    pack_e2ee_plaintext(
        plaintext, plaintext_len,
        ORG__E2EELAB__SKISSM__PROTO__E2EE_PLAINTEXT_TYPE__COMMON_MSG,
        &context, &context_len
    );
    encrypt_session(from_address, to_address, context, context_len);
    assert(plaintext_len == plaintext_store.plaintext_len);
    assert(memcmp(plaintext, plaintext_store.plaintext, plaintext_len) == 0);
}

static void test_basic_session(){
    // test start
    setup();
    test_begin();

    set_skissm_event_handler(&test_event_handler);

    register_account();
    register_account();

    // Alice sends an encrypted message to Bob, and Bob decrypts the message
    uint8_t plaintext[] = "Hello, World";
    size_t plaintext_len = sizeof(plaintext) - 1;
    test_encryption(account_data[0]->address, account_data[1]->address, plaintext, plaintext_len);

    // test stop
    test_end();
    tear_down();
}

static void test_interaction(){
    // test start
    setup();
    test_begin();

    set_skissm_event_handler(&test_event_handler);

    register_account();
    register_account();

    // Alice sends an encrypted message to Bob, and Bob decrypts the message
    uint8_t plaintext[] = "Hi! Bob! This is Alice.";
    size_t plaintext_len = sizeof(plaintext) - 1;
    test_encryption(account_data[0]->address, account_data[1]->address, plaintext, plaintext_len);

    // Bob sends an encrypted message to Alice, and Alice decrypts the message
    uint8_t plaintext_2[] = "Hello! This is Bob.";
    size_t plaintext_len_2 = sizeof(plaintext_2) - 1;
    test_encryption(account_data[1]->address, account_data[0]->address, plaintext_2, plaintext_len_2);

    // test stop
    test_end();
    tear_down();
}

static void test_continual_messages(){
    // test start
    setup();
    test_begin();

    set_skissm_event_handler(&test_event_handler);

    register_account();
    register_account();

    // Alice sends an encrypted message to Bob, and Bob decrypts the message
    uint8_t plaintext[] = "This message will be sent a lot of times.";
    size_t plaintext_len = sizeof(plaintext) - 1;
    int i;
    for (i = 0; i < 1000; i++){
        test_encryption(account_data[0]->address, account_data[1]->address, plaintext, plaintext_len);
    }

    // test stop
    test_end();
    tear_down();
}

int main() {
    test_basic_session();
    test_interaction();
    test_continual_messages();

    return 0;
}
