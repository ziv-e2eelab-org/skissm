/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: SendGroupMsgResponse.proto */

#ifndef PROTOBUF_C_SendGroupMsgResponse_2eproto__INCLUDED
#define PROTOBUF_C_SendGroupMsgResponse_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Skissm__SendGroupMsgResponse Skissm__SendGroupMsgResponse;


/* --- enums --- */


/* --- messages --- */

struct  Skissm__SendGroupMsgResponse
{
  ProtobufCMessage base;
  uint32_t code;
  char *msg;
};
#define SKISSM__SEND_GROUP_MSG_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&skissm__send_group_msg_response__descriptor) \
    , 0, (char *)protobuf_c_empty_string }


/* Skissm__SendGroupMsgResponse methods */
void   skissm__send_group_msg_response__init
                     (Skissm__SendGroupMsgResponse         *message);
size_t skissm__send_group_msg_response__get_packed_size
                     (const Skissm__SendGroupMsgResponse   *message);
size_t skissm__send_group_msg_response__pack
                     (const Skissm__SendGroupMsgResponse   *message,
                      uint8_t             *out);
size_t skissm__send_group_msg_response__pack_to_buffer
                     (const Skissm__SendGroupMsgResponse   *message,
                      ProtobufCBuffer     *buffer);
Skissm__SendGroupMsgResponse *
       skissm__send_group_msg_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   skissm__send_group_msg_response__free_unpacked
                     (Skissm__SendGroupMsgResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Skissm__SendGroupMsgResponse_Closure)
                 (const Skissm__SendGroupMsgResponse *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor skissm__send_group_msg_response__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_SendGroupMsgResponse_2eproto__INCLUDED */
