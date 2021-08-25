/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: e2ee_message.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "e2ee_message.pb-c.h"
void   org__e2eelab__skissm__proto__e2ee_message__init
                     (Org__E2eelab__Skissm__Proto__E2eeMessage         *message)
{
  static const Org__E2eelab__Skissm__Proto__E2eeMessage init_value = ORG__E2EELAB__SKISSM__PROTO__E2EE_MESSAGE__INIT;
  *message = init_value;
}
size_t org__e2eelab__skissm__proto__e2ee_message__get_packed_size
                     (const Org__E2eelab__Skissm__Proto__E2eeMessage *message)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__e2ee_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t org__e2eelab__skissm__proto__e2ee_message__pack
                     (const Org__E2eelab__Skissm__Proto__E2eeMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__e2ee_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t org__e2eelab__skissm__proto__e2ee_message__pack_to_buffer
                     (const Org__E2eelab__Skissm__Proto__E2eeMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__e2ee_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Org__E2eelab__Skissm__Proto__E2eeMessage *
       org__e2eelab__skissm__proto__e2ee_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Org__E2eelab__Skissm__Proto__E2eeMessage *)
     protobuf_c_message_unpack (&org__e2eelab__skissm__proto__e2ee_message__descriptor,
                                allocator, len, data);
}
void   org__e2eelab__skissm__proto__e2ee_message__free_unpacked
                     (Org__E2eelab__Skissm__Proto__E2eeMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__e2ee_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor org__e2eelab__skissm__proto__e2ee_message__field_descriptors[6] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeMessage, version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "from",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeMessage, from),
    &org__e2eelab__skissm__proto__e2ee_address__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "to",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeMessage, to),
    &org__e2eelab__skissm__proto__e2ee_address__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "session_id",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeMessage, session_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "msg_type",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeMessage, msg_type),
    &org__e2eelab__skissm__proto__e2ee_message_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__E2eeMessage, payload),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned org__e2eelab__skissm__proto__e2ee_message__field_indices_by_name[] = {
  1,   /* field[1] = from */
  4,   /* field[4] = msg_type */
  5,   /* field[5] = payload */
  3,   /* field[3] = session_id */
  2,   /* field[2] = to */
  0,   /* field[0] = version */
};
static const ProtobufCIntRange org__e2eelab__skissm__proto__e2ee_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor org__e2eelab__skissm__proto__e2ee_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "org.e2eelab.skissm.proto.e2ee_message",
  "E2eeMessage",
  "Org__E2eelab__Skissm__Proto__E2eeMessage",
  "org.e2eelab.skissm.proto",
  sizeof(Org__E2eelab__Skissm__Proto__E2eeMessage),
  6,
  org__e2eelab__skissm__proto__e2ee_message__field_descriptors,
  org__e2eelab__skissm__proto__e2ee_message__field_indices_by_name,
  1,  org__e2eelab__skissm__proto__e2ee_message__number_ranges,
  (ProtobufCMessageInit) org__e2eelab__skissm__proto__e2ee_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
