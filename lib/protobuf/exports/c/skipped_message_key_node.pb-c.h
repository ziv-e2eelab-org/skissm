/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: skipped_message_key_node.proto */

#ifndef PROTOBUF_C_skipped_5fmessage_5fkey_5fnode_2eproto__INCLUDED
#define PROTOBUF_C_skipped_5fmessage_5fkey_5fnode_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "message_key.pb-c.h"

typedef struct _Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode;


/* --- enums --- */


/* --- messages --- */

struct  _Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode
{
  ProtobufCMessage base;
  ProtobufCBinaryData ratchet_key_public;
  Org__E2eelab__Skissm__Proto__MessageKey *message_key;
};
#define ORG__E2EELAB__SKISSM__PROTO__SKIPPED_MESSAGE_KEY_NODE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__skissm__proto__skipped_message_key_node__descriptor) \
    , {0,NULL}, NULL }


/* Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode methods */
void   org__e2eelab__skissm__proto__skipped_message_key_node__init
                     (Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode         *message);
size_t org__e2eelab__skissm__proto__skipped_message_key_node__get_packed_size
                     (const Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode   *message);
size_t org__e2eelab__skissm__proto__skipped_message_key_node__pack
                     (const Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode   *message,
                      uint8_t             *out);
size_t org__e2eelab__skissm__proto__skipped_message_key_node__pack_to_buffer
                     (const Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode *
       org__e2eelab__skissm__proto__skipped_message_key_node__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__skissm__proto__skipped_message_key_node__free_unpacked
                     (Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode_Closure)
                 (const Org__E2eelab__Skissm__Proto__SkippedMessageKeyNode *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor org__e2eelab__skissm__proto__skipped_message_key_node__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_skipped_5fmessage_5fkey_5fnode_2eproto__INCLUDED */
