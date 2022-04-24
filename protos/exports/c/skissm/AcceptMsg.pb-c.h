/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: AcceptMsg.proto */

#ifndef PROTOBUF_C_AcceptMsg_2eproto__INCLUDED
#define PROTOBUF_C_AcceptMsg_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "skissm/E2eeAddress.pb-c.h"

typedef struct Skissm__AcceptMsg Skissm__AcceptMsg;


/* --- enums --- */


/* --- messages --- */

struct  Skissm__AcceptMsg
{
  ProtobufCMessage base;
  Skissm__E2eeAddress *from;
  Skissm__E2eeAddress *to;
  char *e2ee_pack_id;
  size_t n_pre_shared_keys;
  ProtobufCBinaryData *pre_shared_keys;
};
#define SKISSM__ACCEPT_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&skissm__accept_msg__descriptor) \
    , NULL, NULL, (char *)protobuf_c_empty_string, 0,NULL }


/* Skissm__AcceptMsg methods */
void   skissm__accept_msg__init
                     (Skissm__AcceptMsg         *message);
size_t skissm__accept_msg__get_packed_size
                     (const Skissm__AcceptMsg   *message);
size_t skissm__accept_msg__pack
                     (const Skissm__AcceptMsg   *message,
                      uint8_t             *out);
size_t skissm__accept_msg__pack_to_buffer
                     (const Skissm__AcceptMsg   *message,
                      ProtobufCBuffer     *buffer);
Skissm__AcceptMsg *
       skissm__accept_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   skissm__accept_msg__free_unpacked
                     (Skissm__AcceptMsg *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Skissm__AcceptMsg_Closure)
                 (const Skissm__AcceptMsg *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor skissm__accept_msg__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_AcceptMsg_2eproto__INCLUDED */
