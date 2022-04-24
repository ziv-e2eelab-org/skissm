/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: CreateGroupMsg.proto */

#ifndef PROTOBUF_C_CreateGroupMsg_2eproto__INCLUDED
#define PROTOBUF_C_CreateGroupMsg_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "skissm/E2eeAddress.pb-c.h"
#include "skissm/GroupMember.pb-c.h"

typedef struct Skissm__CreateGroupMsg Skissm__CreateGroupMsg;


/* --- enums --- */


/* --- messages --- */

struct  Skissm__CreateGroupMsg
{
  ProtobufCMessage base;
  char *e2ee_pack_id;
  Skissm__E2eeAddress *sender_address;
  size_t n_group_members;
  Skissm__GroupMember **group_members;
  char *group_name;
  Skissm__E2eeAddress *group_address;
};
#define SKISSM__CREATE_GROUP_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&skissm__create_group_msg__descriptor) \
    , (char *)protobuf_c_empty_string, NULL, 0,NULL, (char *)protobuf_c_empty_string, NULL }


/* Skissm__CreateGroupMsg methods */
void   skissm__create_group_msg__init
                     (Skissm__CreateGroupMsg         *message);
size_t skissm__create_group_msg__get_packed_size
                     (const Skissm__CreateGroupMsg   *message);
size_t skissm__create_group_msg__pack
                     (const Skissm__CreateGroupMsg   *message,
                      uint8_t             *out);
size_t skissm__create_group_msg__pack_to_buffer
                     (const Skissm__CreateGroupMsg   *message,
                      ProtobufCBuffer     *buffer);
Skissm__CreateGroupMsg *
       skissm__create_group_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   skissm__create_group_msg__free_unpacked
                     (Skissm__CreateGroupMsg *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Skissm__CreateGroupMsg_Closure)
                 (const Skissm__CreateGroupMsg *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor skissm__create_group_msg__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_CreateGroupMsg_2eproto__INCLUDED */
