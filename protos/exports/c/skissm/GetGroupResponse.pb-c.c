/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: GetGroupResponse.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "GetGroupResponse.pb-c.h"
void   skissm__get_group_response__init
                     (Skissm__GetGroupResponse         *message)
{
  static const Skissm__GetGroupResponse init_value = SKISSM__GET_GROUP_RESPONSE__INIT;
  *message = init_value;
}
size_t skissm__get_group_response__get_packed_size
                     (const Skissm__GetGroupResponse *message)
{
  assert(message->base.descriptor == &skissm__get_group_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t skissm__get_group_response__pack
                     (const Skissm__GetGroupResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &skissm__get_group_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t skissm__get_group_response__pack_to_buffer
                     (const Skissm__GetGroupResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &skissm__get_group_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Skissm__GetGroupResponse *
       skissm__get_group_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Skissm__GetGroupResponse *)
     protobuf_c_message_unpack (&skissm__get_group_response__descriptor,
                                allocator, len, data);
}
void   skissm__get_group_response__free_unpacked
                     (Skissm__GetGroupResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &skissm__get_group_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor skissm__get_group_response__field_descriptors[5] =
{
  {
    "code",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Skissm__GetGroupResponse, code),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "msg",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Skissm__GetGroupResponse, msg),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "group_name",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Skissm__GetGroupResponse, group_name),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "group_address",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Skissm__GetGroupResponse, group_address),
    &skissm__e2ee_address__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "group_members",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Skissm__GetGroupResponse, n_group_members),
    offsetof(Skissm__GetGroupResponse, group_members),
    &skissm__group_member__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned skissm__get_group_response__field_indices_by_name[] = {
  0,   /* field[0] = code */
  3,   /* field[3] = group_address */
  4,   /* field[4] = group_members */
  2,   /* field[2] = group_name */
  1,   /* field[1] = msg */
};
static const ProtobufCIntRange skissm__get_group_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor skissm__get_group_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "skissm.GetGroupResponse",
  "GetGroupResponse",
  "Skissm__GetGroupResponse",
  "skissm",
  sizeof(Skissm__GetGroupResponse),
  5,
  skissm__get_group_response__field_descriptors,
  skissm__get_group_response__field_indices_by_name,
  1,  skissm__get_group_response__number_ranges,
  (ProtobufCMessageInit) skissm__get_group_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
