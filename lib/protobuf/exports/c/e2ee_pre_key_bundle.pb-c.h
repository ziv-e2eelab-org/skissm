/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: e2ee_pre_key_bundle.proto */

#ifndef PROTOBUF_C_e2ee_5fpre_5fkey_5fbundle_2eproto__INCLUDED
#define PROTOBUF_C_e2ee_5fpre_5fkey_5fbundle_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "e2ee_address.pb-c.h"
#include "signed_pre_key_public.pb-c.h"
#include "one_time_pre_key_public.pb-c.h"

typedef struct Org__E2eelab__Skissm__Proto__E2eePreKeyBundle Org__E2eelab__Skissm__Proto__E2eePreKeyBundle;


/* --- enums --- */


/* --- messages --- */

struct  Org__E2eelab__Skissm__Proto__E2eePreKeyBundle
{
  ProtobufCMessage base;
  Org__E2eelab__Skissm__Proto__E2eeAddress *peer_address;
  ProtobufCBinaryData identity_key_public;
  Org__E2eelab__Skissm__Proto__SignedPreKeyPublic *signed_pre_key_public;
  Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic *one_time_pre_key_public;
};
#define ORG__E2EELAB__SKISSM__PROTO__E2EE_PRE_KEY_BUNDLE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__skissm__proto__e2ee_pre_key_bundle__descriptor) \
    , NULL, {0,NULL}, NULL, NULL }


/* Org__E2eelab__Skissm__Proto__E2eePreKeyBundle methods */
void   org__e2eelab__skissm__proto__e2ee_pre_key_bundle__init
                     (Org__E2eelab__Skissm__Proto__E2eePreKeyBundle         *message);
size_t org__e2eelab__skissm__proto__e2ee_pre_key_bundle__get_packed_size
                     (const Org__E2eelab__Skissm__Proto__E2eePreKeyBundle   *message);
size_t org__e2eelab__skissm__proto__e2ee_pre_key_bundle__pack
                     (const Org__E2eelab__Skissm__Proto__E2eePreKeyBundle   *message,
                      uint8_t             *out);
size_t org__e2eelab__skissm__proto__e2ee_pre_key_bundle__pack_to_buffer
                     (const Org__E2eelab__Skissm__Proto__E2eePreKeyBundle   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Skissm__Proto__E2eePreKeyBundle *
       org__e2eelab__skissm__proto__e2ee_pre_key_bundle__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__skissm__proto__e2ee_pre_key_bundle__free_unpacked
                     (Org__E2eelab__Skissm__Proto__E2eePreKeyBundle *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Org__E2eelab__Skissm__Proto__E2eePreKeyBundle_Closure)
                 (const Org__E2eelab__Skissm__Proto__E2eePreKeyBundle *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor org__e2eelab__skissm__proto__e2ee_pre_key_bundle__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_e2ee_5fpre_5fkey_5fbundle_2eproto__INCLUDED */
