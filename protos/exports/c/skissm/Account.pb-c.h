/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Account.proto */

#ifndef PROTOBUF_C_Account_2eproto__INCLUDED
#define PROTOBUF_C_Account_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "skissm/E2eeAddress.pb-c.h"
#include "skissm/IdentityKey.pb-c.h"
#include "skissm/SignedPreKey.pb-c.h"
#include "skissm/OneTimePreKey.pb-c.h"

typedef struct Skissm__Account Skissm__Account;


/* --- enums --- */


/* --- messages --- */

struct  Skissm__Account
{
  ProtobufCMessage base;
  char *version;
  uint64_t account_id;
  protobuf_c_boolean saved;
  Skissm__E2eeAddress *address;
  char *password;
  char *e2ee_pack_id;
  Skissm__IdentityKey *identity_key;
  Skissm__SignedPreKey *signed_pre_key;
  size_t n_one_time_pre_keys;
  Skissm__OneTimePreKey **one_time_pre_keys;
  uint32_t next_one_time_pre_key_id;
};
#define SKISSM__ACCOUNT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&skissm__account__descriptor) \
    , (char *)protobuf_c_empty_string, 0, 0, NULL, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, NULL, NULL, 0,NULL, 0 }


/* Skissm__Account methods */
void   skissm__account__init
                     (Skissm__Account         *message);
size_t skissm__account__get_packed_size
                     (const Skissm__Account   *message);
size_t skissm__account__pack
                     (const Skissm__Account   *message,
                      uint8_t             *out);
size_t skissm__account__pack_to_buffer
                     (const Skissm__Account   *message,
                      ProtobufCBuffer     *buffer);
Skissm__Account *
       skissm__account__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   skissm__account__free_unpacked
                     (Skissm__Account *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Skissm__Account_Closure)
                 (const Skissm__Account *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor skissm__account__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_Account_2eproto__INCLUDED */
