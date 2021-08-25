/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: e2ee_account.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "e2ee_account.pb-c.h"
void   org__e2eelab__skissm__proto__e2ee_account__init
                     (Org__E2eelab__Skissm__Proto__E2eeAccount         *message)
{
  static const Org__E2eelab__Skissm__Proto__E2eeAccount init_value = ORG__E2EELAB__SKISSM__PROTO__E2EE_ACCOUNT__INIT;
  *message = init_value;
}
size_t org__e2eelab__skissm__proto__e2ee_account__get_packed_size
                     (const Org__E2eelab__Skissm__Proto__E2eeAccount *message)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__e2ee_account__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t org__e2eelab__skissm__proto__e2ee_account__pack
                     (const Org__E2eelab__Skissm__Proto__E2eeAccount *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__e2ee_account__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t org__e2eelab__skissm__proto__e2ee_account__pack_to_buffer
                     (const Org__E2eelab__Skissm__Proto__E2eeAccount *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__e2ee_account__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Org__E2eelab__Skissm__Proto__E2eeAccount *
       org__e2eelab__skissm__proto__e2ee_account__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Org__E2eelab__Skissm__Proto__E2eeAccount *)
     protobuf_c_message_unpack (&org__e2eelab__skissm__proto__e2ee_account__descriptor,
                                allocator, len, data);
}
void   org__e2eelab__skissm__proto__e2ee_account__free_unpacked
                     (Org__E2eelab__Skissm__Proto__E2eeAccount *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__e2ee_account__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor org__e2eelab__skissm__proto__e2ee_account__field_descriptors[9] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeAccount, version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "account_id",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeAccount, account_id),
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
    offsetof(Org__E2eelab__Skissm__Proto__E2eeAccount, saved),
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
    offsetof(Org__E2eelab__Skissm__Proto__E2eeAccount, address),
    &org__e2eelab__skissm__proto__e2ee_address__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "identity_key_pair",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeAccount, identity_key_pair),
    &org__e2eelab__skissm__proto__key_pair__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "signed_pre_key_pair",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeAccount, signed_pre_key_pair),
    &org__e2eelab__skissm__proto__signed_pre_key_pair__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "one_time_pre_keys",
    7,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Org__E2eelab__Skissm__Proto__E2eeAccount, n_one_time_pre_keys),
    offsetof(Org__E2eelab__Skissm__Proto__E2eeAccount, one_time_pre_keys),
    &org__e2eelab__skissm__proto__one_time_pre_key_pair__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "next_signed_pre_key_id",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeAccount, next_signed_pre_key_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "next_one_time_pre_key_id",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeAccount, next_one_time_pre_key_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned org__e2eelab__skissm__proto__e2ee_account__field_indices_by_name[] = {
  1,   /* field[1] = account_id */
  3,   /* field[3] = address */
  4,   /* field[4] = identity_key_pair */
  8,   /* field[8] = next_one_time_pre_key_id */
  7,   /* field[7] = next_signed_pre_key_id */
  6,   /* field[6] = one_time_pre_keys */
  2,   /* field[2] = saved */
  5,   /* field[5] = signed_pre_key_pair */
  0,   /* field[0] = version */
};
static const ProtobufCIntRange org__e2eelab__skissm__proto__e2ee_account__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 9 }
};
const ProtobufCMessageDescriptor org__e2eelab__skissm__proto__e2ee_account__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "org.e2eelab.skissm.proto.e2ee_account",
  "E2eeAccount",
  "Org__E2eelab__Skissm__Proto__E2eeAccount",
  "org.e2eelab.skissm.proto",
  sizeof(Org__E2eelab__Skissm__Proto__E2eeAccount),
  9,
  org__e2eelab__skissm__proto__e2ee_account__field_descriptors,
  org__e2eelab__skissm__proto__e2ee_account__field_indices_by_name,
  1,  org__e2eelab__skissm__proto__e2ee_account__number_ranges,
  (ProtobufCMessageInit) org__e2eelab__skissm__proto__e2ee_account__init,
  NULL,NULL,NULL    /* reserved[123] */
};
