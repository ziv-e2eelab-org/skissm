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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "skissm/account.h"
#include "skissm/mem_util.h"
#include "skissm/skissm.h"

#include "test_db.h"
#include "test_env.h"
#include "test_util.h"

void test_load_old_signed_pre_key(){
    setup();

    Skissm__E2eeAccount *account = create_account(1);
    /* Generate a random address */
    account->address = (Skissm__E2eeAddress *) malloc(sizeof(Skissm__E2eeAddress));
    skissm__e2ee_address__init(account->address);
    account->address->domain = create_domain_str();
    account->address->user_id = generate_uuid_str();
    account->address->device_id = generate_uuid_str();

    /* Save to db */
    account->saved = true;
    get_ssm_plugin()->store_account(account);

    Skissm__SignedPreKey *old_spk = (Skissm__SignedPreKey *) malloc(sizeof(Skissm__SignedPreKey));
    skissm__signed_pre_key__init(old_spk);
    old_spk->spk_id = account->signed_pre_key->spk_id;
    old_spk->key_pair = (Skissm__KeyPair *) malloc(sizeof(Skissm__KeyPair));
    skissm__key_pair__init(old_spk->key_pair);
    copy_protobuf_from_protobuf(&(old_spk->key_pair->private_key), &(account->signed_pre_key->key_pair->private_key));
    copy_protobuf_from_protobuf(&(old_spk->key_pair->public_key), &(account->signed_pre_key->key_pair->public_key));
    copy_protobuf_from_protobuf(&(old_spk->signature), &(account->signed_pre_key->signature));
    old_spk->ttl = account->signed_pre_key->ttl;

    /* Generate a new signed pre-key pair */
    generate_signed_pre_key(account);
    get_ssm_plugin()->update_signed_pre_key(account->account_id, account->signed_pre_key);

    /* Load the old signed pre-key */
    Skissm__SignedPreKey *old_spk_copy = NULL;
    load_signed_pre_key(account->account_id, old_spk->spk_id, &old_spk_copy);

    // assert old_spk equals to old_spk_copy
    print_result("test_load_old_signed_pre_key", is_equal_spk(old_spk, old_spk_copy));

    // free
    skissm__e2ee_account__free_unpacked(account, NULL);
    skissm__signed_pre_key__free_unpacked(old_spk, NULL);
    skissm__signed_pre_key__free_unpacked(old_spk_copy, NULL);

    tear_down();
}

void test_remove_expired_signed_pre_key(){
    setup();

    Skissm__E2eeAccount *account = create_account(1);
    /* Generate a random address */
    account->address = (Skissm__E2eeAddress *) malloc(sizeof(Skissm__E2eeAddress));
    skissm__e2ee_address__init(account->address);
    account->address->domain = create_domain_str();
    account->address->user_id = generate_uuid_str();
    account->address->device_id = generate_uuid_str();

    /* Save to db */
    account->saved = true;
    get_ssm_plugin()->store_account(account);

    uint32_t old_spk_id = account->signed_pre_key->spk_id;

    /* Generate a new signed pre-key pair */
    generate_signed_pre_key(account);
    get_ssm_plugin()->update_signed_pre_key(account->account_id, account->signed_pre_key);
    generate_signed_pre_key(account);
    get_ssm_plugin()->update_signed_pre_key(account->account_id, account->signed_pre_key);

    /* Remove expired signed pre-keys */
    remove_expired_signed_pre_key(account->account_id);

    /* Load the old signed pre-key */
    Skissm__SignedPreKey *old_spk_copy = NULL;
    load_signed_pre_key(account->account_id, old_spk_id, &old_spk_copy);

    /* assert old_spk_copy is NULL */
    print_result("test_remove_expired_signed_pre_key", (old_spk_copy == NULL));

    // free
    skissm__e2ee_account__free_unpacked(account, NULL);

    tear_down();
}

int main(){
    test_load_old_signed_pre_key();
    test_remove_expired_signed_pre_key();
    return 0;
}
