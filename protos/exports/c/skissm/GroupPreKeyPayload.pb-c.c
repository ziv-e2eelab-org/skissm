/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: GroupPreKeyPayload.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "GroupPreKeyPayload.pb-c.h"
void   skissm__group_pre_key_payload__init
                     (Skissm__GroupPreKeyPayload         *message)
{
  static const Skissm__GroupPreKeyPayload init_value = SKISSM__GROUP_PRE_KEY_PAYLOAD__INIT;
  *message = init_value;
}
size_t skissm__group_pre_key_payload__get_packed_size
                     (const Skissm__GroupPreKeyPayload *message)
{
  assert(message->base.descriptor == &skissm__group_pre_key_payload__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t skissm__group_pre_key_payload__pack
                     (const Skissm__GroupPreKeyPayload *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &skissm__group_pre_key_payload__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t skissm__group_pre_key_payload__pack_to_buffer
                     (const Skissm__GroupPreKeyPayload *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &skissm__group_pre_key_payload__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Skissm__GroupPreKeyPayload *
       skissm__group_pre_key_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Skissm__GroupPreKeyPayload *)
     protobuf_c_message_unpack (&skissm__group_pre_key_payload__descriptor,
                                allocator, len, data);
}
void   skissm__group_pre_key_payload__free_unpacked
                     (Skissm__GroupPreKeyPayload *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &skissm__group_pre_key_payload__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor skissm__group_pre_key_payload__field_descriptors[8] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Skissm__GroupPreKeyPayload, version),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "session_id",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Skissm__GroupPreKeyPayload, session_id),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "old_session_id",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Skissm__GroupPreKeyPayload, old_session_id),
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
    offsetof(Skissm__GroupPreKeyPayload, group_address),
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
    offsetof(Skissm__GroupPreKeyPayload, n_group_members),
    offsetof(Skissm__GroupPreKeyPayload, group_members),
    &skissm__group_member__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sequence",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Skissm__GroupPreKeyPayload, sequence),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "chain_key",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Skissm__GroupPreKeyPayload, chain_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "signature_public_key",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Skissm__GroupPreKeyPayload, signature_public_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned skissm__group_pre_key_payload__field_indices_by_name[] = {
  6,   /* field[6] = chain_key */
  3,   /* field[3] = group_address */
  4,   /* field[4] = group_members */
  2,   /* field[2] = old_session_id */
  5,   /* field[5] = sequence */
  1,   /* field[1] = session_id */
  7,   /* field[7] = signature_public_key */
  0,   /* field[0] = version */
};
static const ProtobufCIntRange skissm__group_pre_key_payload__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor skissm__group_pre_key_payload__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "skissm.GroupPreKeyPayload",
  "GroupPreKeyPayload",
  "Skissm__GroupPreKeyPayload",
  "skissm",
  sizeof(Skissm__GroupPreKeyPayload),
  8,
  skissm__group_pre_key_payload__field_descriptors,
  skissm__group_pre_key_payload__field_indices_by_name,
  1,  skissm__group_pre_key_payload__number_ranges,
  (ProtobufCMessageInit) skissm__group_pre_key_payload__init,
  NULL,NULL,NULL    /* reserved[123] */
};
