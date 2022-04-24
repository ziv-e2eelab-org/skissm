/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Account.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "Account.pb-c.h"
void   skissm__account__init
                     (Skissm__Account         *message)
{
  static const Skissm__Account init_value = SKISSM__ACCOUNT__INIT;
  *message = init_value;
}
size_t skissm__account__get_packed_size
                     (const Skissm__Account *message)
{
  assert(message->base.descriptor == &skissm__account__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t skissm__account__pack
                     (const Skissm__Account *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &skissm__account__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t skissm__account__pack_to_buffer
                     (const Skissm__Account *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &skissm__account__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Skissm__Account *
       skissm__account__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Skissm__Account *)
     protobuf_c_message_unpack (&skissm__account__descriptor,
                                allocator, len, data);
}
void   skissm__account__free_unpacked
                     (Skissm__Account *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &skissm__account__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor skissm__account__field_descriptors[10] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Skissm__Account, version),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "account_id",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(Skissm__Account, account_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "saved",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Skissm__Account, saved),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "address",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Skissm__Account, address),
    &skissm__e2ee_address__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "password",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Skissm__Account, password),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "e2ee_pack_id",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Skissm__Account, e2ee_pack_id),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "identity_key",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Skissm__Account, identity_key),
    &skissm__identity_key__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "signed_pre_key",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Skissm__Account, signed_pre_key),
    &skissm__signed_pre_key__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "one_time_pre_keys",
    9,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Skissm__Account, n_one_time_pre_keys),
    offsetof(Skissm__Account, one_time_pre_keys),
    &skissm__one_time_pre_key__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "next_one_time_pre_key_id",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Skissm__Account, next_one_time_pre_key_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned skissm__account__field_indices_by_name[] = {
  1,   /* field[1] = account_id */
  3,   /* field[3] = address */
  5,   /* field[5] = e2ee_pack_id */
  6,   /* field[6] = identity_key */
  9,   /* field[9] = next_one_time_pre_key_id */
  8,   /* field[8] = one_time_pre_keys */
  4,   /* field[4] = password */
  2,   /* field[2] = saved */
  7,   /* field[7] = signed_pre_key */
  0,   /* field[0] = version */
};
static const ProtobufCIntRange skissm__account__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 10 }
};
const ProtobufCMessageDescriptor skissm__account__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "skissm.Account",
  "Account",
  "Skissm__Account",
  "skissm",
  sizeof(Skissm__Account),
  10,
  skissm__account__field_descriptors,
  skissm__account__field_indices_by_name,
  1,  skissm__account__number_ranges,
  (ProtobufCMessageInit) skissm__account__init,
  NULL,NULL,NULL    /* reserved[123] */
};
