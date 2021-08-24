/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: register_user_request_payload.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "register_user_request_payload.pb-c.h"
void   org__e2eelab__skissm__proto__register_user_request_payload__init
                     (Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload         *message)
{
  static const Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload init_value = ORG__E2EELAB__SKISSM__PROTO__REGISTER_USER_REQUEST_PAYLOAD__INIT;
  *message = init_value;
}
size_t org__e2eelab__skissm__proto__register_user_request_payload__get_packed_size
                     (const Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload *message)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__register_user_request_payload__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t org__e2eelab__skissm__proto__register_user_request_payload__pack
                     (const Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__register_user_request_payload__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t org__e2eelab__skissm__proto__register_user_request_payload__pack_to_buffer
                     (const Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__register_user_request_payload__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload *
       org__e2eelab__skissm__proto__register_user_request_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload *)
     protobuf_c_message_unpack (&org__e2eelab__skissm__proto__register_user_request_payload__descriptor,
                                allocator, len, data);
}
void   org__e2eelab__skissm__proto__register_user_request_payload__free_unpacked
                     (Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &org__e2eelab__skissm__proto__register_user_request_payload__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor org__e2eelab__skissm__proto__register_user_request_payload__field_descriptors[4] =
{
  {
    "user_name",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload, user_name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "identity_key_public",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload, identity_key_public),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "signed_pre_key_public",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload, signed_pre_key_public),
    &org__e2eelab__skissm__proto__signed_pre_key_public__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "one_time_pre_keys",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload, n_one_time_pre_keys),
    offsetof(Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload, one_time_pre_keys),
    &org__e2eelab__skissm__proto__one_time_pre_key_public__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned org__e2eelab__skissm__proto__register_user_request_payload__field_indices_by_name[] = {
  1,   /* field[1] = identity_key_public */
  3,   /* field[3] = one_time_pre_keys */
  2,   /* field[2] = signed_pre_key_public */
  0,   /* field[0] = user_name */
};
static const ProtobufCIntRange org__e2eelab__skissm__proto__register_user_request_payload__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor org__e2eelab__skissm__proto__register_user_request_payload__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "org.e2eelab.skissm.proto.register_user_request_payload",
  "RegisterUserRequestPayload",
  "Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload",
  "org.e2eelab.skissm.proto",
  sizeof(Org__E2eelab__Skissm__Proto__RegisterUserRequestPayload),
  4,
  org__e2eelab__skissm__proto__register_user_request_payload__field_descriptors,
  org__e2eelab__skissm__proto__register_user_request_payload__field_indices_by_name,
  1,  org__e2eelab__skissm__proto__register_user_request_payload__number_ranges,
  (ProtobufCMessageInit) org__e2eelab__skissm__proto__register_user_request_payload__init,
  NULL,NULL,NULL    /* reserved[123] */
};
