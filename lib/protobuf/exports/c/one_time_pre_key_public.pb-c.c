/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: one_time_pre_key_public.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "one_time_pre_key_public.pb-c.h"
void   org__e2eelab__skissm__proto__one_time_pre_key_public__init
                     (Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic         *message)
{
  static const Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic init_value = ORG__E2EELAB__SKISSM__PROTO__ONE_TIME_PRE_KEY_PUBLIC__INIT;
  *message = init_value;
}
size_t org__e2eelab__skissm__proto__one_time_pre_key_public__get_packed_size
                     (const Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic *message)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__one_time_pre_key_public__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t org__e2eelab__skissm__proto__one_time_pre_key_public__pack
                     (const Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__one_time_pre_key_public__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t org__e2eelab__skissm__proto__one_time_pre_key_public__pack_to_buffer
                     (const Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__one_time_pre_key_public__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic *
       org__e2eelab__skissm__proto__one_time_pre_key_public__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic *)
     protobuf_c_message_unpack (&org__e2eelab__skissm__proto__one_time_pre_key_public__descriptor,
                                allocator, len, data);
}
void   org__e2eelab__skissm__proto__one_time_pre_key_public__free_unpacked
                     (Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__one_time_pre_key_public__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor org__e2eelab__skissm__proto__one_time_pre_key_public__field_descriptors[2] =
{
  {
    "opk_id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic, opk_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "public_key",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic, public_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned org__e2eelab__skissm__proto__one_time_pre_key_public__field_indices_by_name[] = {
  0,   /* field[0] = opk_id */
  1,   /* field[1] = public_key */
};
static const ProtobufCIntRange org__e2eelab__skissm__proto__one_time_pre_key_public__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor org__e2eelab__skissm__proto__one_time_pre_key_public__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "org.e2eelab.skissm.proto.one_time_pre_key_public",
  "OneTimePreKeyPublic",
  "Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic",
  "org.e2eelab.skissm.proto",
  sizeof(Org__E2eelab__Skissm__Proto__OneTimePreKeyPublic),
  2,
  org__e2eelab__skissm__proto__one_time_pre_key_public__field_descriptors,
  org__e2eelab__skissm__proto__one_time_pre_key_public__field_indices_by_name,
  1,  org__e2eelab__skissm__proto__one_time_pre_key_public__number_ranges,
  (ProtobufCMessageInit) org__e2eelab__skissm__proto__one_time_pre_key_public__init,
  NULL,NULL,NULL    /* reserved[123] */
};
