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
#include "skissm/cipher.h"

#include <stdbool.h>
#include <string.h>

#include "skissm/crypto.h"

const struct cipher CIPHER = CIPHER_INIT;

static inline size_t aes256_gcm_ciphertext_len(size_t plaintext_length) {
  return plaintext_length + AES256_GCM_TAG_LENGTH;
}

static inline size_t aes256_gcm_plaintext_len(size_t ciphertext_len) {
  return ciphertext_len - AES256_GCM_TAG_LENGTH;
}

static size_t aes256_gcm_encrypt(const uint8_t *ad, const uint8_t *aes_key,
                                 const uint8_t *plaintext, size_t plaintext_len,
                                 uint8_t **ciphertext) {
  uint8_t *iv = (uint8_t *)aes_key + AES256_KEY_LENGTH;
  size_t ciphertext_len = aes256_gcm_ciphertext_len(plaintext_len);
  *ciphertext = (uint8_t *)malloc(ciphertext_len);
  crypto_aes_encrypt_gcm(plaintext, plaintext_len, aes_key, iv, ad, AD_LENGTH,
                         *ciphertext);
  return ciphertext_len;
}

static size_t aes256_gcm_decrypt(const uint8_t *ad, const uint8_t *aes_key,
                                 const uint8_t *ciphertext,
                                 size_t ciphertext_len, uint8_t **plaintext) {
  uint8_t *iv = (uint8_t *)aes_key + AES256_KEY_LENGTH;
  size_t plaintext_len = aes256_gcm_plaintext_len(ciphertext_len);
  *plaintext = (uint8_t *)malloc(plaintext_len);
  return crypto_aes_decrypt_gcm(ciphertext, ciphertext_len, aes_key, iv, ad,
                                AD_LENGTH, *plaintext);
}

const struct cipher_suite E2EE_ECDH_X25519_AES256_GCM_SHA256 = {
    get_ecdh_x25519_aes256_gcm_sha256_param,
    crypto_curve25519_generate_private_key,
    crypto_curve25519_generate_public_key,
    crypto_curve25519_generate_key_pair,
    crypto_curve25519_generate_key_pair,
    crypto_curve25519_generate_key_pair,
    crypto_curve25519_dh,
    aes256_gcm_encrypt,
    aes256_gcm_decrypt,
    crypto_curve25519_sign,
    crypto_curve25519_verify,
    crypto_hkdf_sha256,
    crypto_hmac_sha256,
    crypto_sha256
};
