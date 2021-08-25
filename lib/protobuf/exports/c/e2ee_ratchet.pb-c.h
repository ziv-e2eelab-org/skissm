/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: e2ee_ratchet.proto */

#ifndef PROTOBUF_C_e2ee_5fratchet_2eproto__INCLUDED
#define PROTOBUF_C_e2ee_5fratchet_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "sender_chain_node.pb-c.h"
#include "receiver_chain_node.pb-c.h"
#include "skipped_message_key_node.pb-c.h"

typedef struct Org__E2eelab__Skissm__Proto__E2eeRatchet Org__E2eelab__Skissm__Proto__E2eeRatchet;


/* --- enums --- */


/* --- messages --- */

struct  Org__E2eelab__Skissm__Proto__E2eeRatchet
{
  ProtobufCMessage base;
  ProtobufCBinaryData root_key;
  Org__E2eelab__Skissm__Proto__SenderChainNode *sender_chain;
  size_t n_receiver_chains;
  Org__E2eelab__Skissm__Proto__ReceiverChainNode **receiver_chains;
  size_t n_skipped_message_keys;
  Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode **skipped_message_keys;
};
#define ORG__E2EELAB__SKISSM__PROTO__E2EE_RATCHET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__skissm__proto__e2ee_ratchet__descriptor) \
    , {0,NULL}, NULL, 0,NULL, 0,NULL }


/* Org__E2eelab__Skissm__Proto__E2eeRatchet methods */
void   org__e2eelab__skissm__proto__e2ee_ratchet__init
                     (Org__E2eelab__Skissm__Proto__E2eeRatchet         *message);
size_t org__e2eelab__skissm__proto__e2ee_ratchet__get_packed_size
                     (const Org__E2eelab__Skissm__Proto__E2eeRatchet   *message);
size_t org__e2eelab__skissm__proto__e2ee_ratchet__pack
                     (const Org__E2eelab__Skissm__Proto__E2eeRatchet   *message,
                      uint8_t             *out);
size_t org__e2eelab__skissm__proto__e2ee_ratchet__pack_to_buffer
                     (const Org__E2eelab__Skissm__Proto__E2eeRatchet   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Skissm__Proto__E2eeRatchet *
       org__e2eelab__skissm__proto__e2ee_ratchet__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__skissm__proto__e2ee_ratchet__free_unpacked
                     (Org__E2eelab__Skissm__Proto__E2eeRatchet *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Org__E2eelab__Skissm__Proto__E2eeRatchet_Closure)
                 (const Org__E2eelab__Skissm__Proto__E2eeRatchet *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor org__e2eelab__skissm__proto__e2ee_ratchet__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_e2ee_5fratchet_2eproto__INCLUDED */
