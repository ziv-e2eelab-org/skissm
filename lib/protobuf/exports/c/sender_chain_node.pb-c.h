/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: sender_chain_node.proto */

#ifndef PROTOBUF_C_sender_5fchain_5fnode_2eproto__INCLUDED
#define PROTOBUF_C_sender_5fchain_5fnode_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "key_pair.pb-c.h"
#include "chain_key.pb-c.h"

typedef struct _Org__E2eelab__Skissm__Proto__SenderChainNode Org__E2eelab__Skissm__Proto__SenderChainNode;


/* --- enums --- */


/* --- messages --- */

struct  _Org__E2eelab__Skissm__Proto__SenderChainNode
{
  ProtobufCMessage base;
  Org__E2eelab__Skissm__Proto__KeyPair *ratchet_key_pair;
  Org__E2eelab__Skissm__Proto__ChainKey *chain_key;
};
#define ORG__E2EELAB__SKISSM__PROTO__SENDER_CHAIN_NODE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__skissm__proto__sender_chain_node__descriptor) \
    , NULL, NULL }


/* Org__E2eelab__Skissm__Proto__SenderChainNode methods */
void   org__e2eelab__skissm__proto__sender_chain_node__init
                     (Org__E2eelab__Skissm__Proto__SenderChainNode         *message);
size_t org__e2eelab__skissm__proto__sender_chain_node__get_packed_size
                     (const Org__E2eelab__Skissm__Proto__SenderChainNode   *message);
size_t org__e2eelab__skissm__proto__sender_chain_node__pack
                     (const Org__E2eelab__Skissm__Proto__SenderChainNode   *message,
                      uint8_t             *out);
size_t org__e2eelab__skissm__proto__sender_chain_node__pack_to_buffer
                     (const Org__E2eelab__Skissm__Proto__SenderChainNode   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Skissm__Proto__SenderChainNode *
       org__e2eelab__skissm__proto__sender_chain_node__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__skissm__proto__sender_chain_node__free_unpacked
                     (Org__E2eelab__Skissm__Proto__SenderChainNode *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Org__E2eelab__Skissm__Proto__SenderChainNode_Closure)
                 (const Org__E2eelab__Skissm__Proto__SenderChainNode *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor org__e2eelab__skissm__proto__sender_chain_node__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_sender_5fchain_5fnode_2eproto__INCLUDED */
