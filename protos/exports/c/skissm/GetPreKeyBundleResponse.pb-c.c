/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: GetPreKeyBundleResponse.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "GetPreKeyBundleResponse.pb-c.h"
void   skissm__get_pre_key_bundle_response__init
                     (Skissm__GetPreKeyBundleResponse         *message)
{
  static const Skissm__GetPreKeyBundleResponse init_value = SKISSM__GET_PRE_KEY_BUNDLE_RESPONSE__INIT;
  *message = init_value;
}
size_t skissm__get_pre_key_bundle_response__get_packed_size
                     (const Skissm__GetPreKeyBundleResponse *message)
{
  assert(message->base.descriptor == &skissm__get_pre_key_bundle_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t skissm__get_pre_key_bundle_response__pack
                     (const Skissm__GetPreKeyBundleResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &skissm__get_pre_key_bundle_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t skissm__get_pre_key_bundle_response__pack_to_buffer
                     (const Skissm__GetPreKeyBundleResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &skissm__get_pre_key_bundle_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Skissm__GetPreKeyBundleResponse *
       skissm__get_pre_key_bundle_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Skissm__GetPreKeyBundleResponse *)
     protobuf_c_message_unpack (&skissm__get_pre_key_bundle_response__descriptor,
                                allocator, len, data);
}
void   skissm__get_pre_key_bundle_response__free_unpacked
                     (Skissm__GetPreKeyBundleResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &skissm__get_pre_key_bundle_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor skissm__get_pre_key_bundle_response__field_descriptors[4] =
{
  {
    "code",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Skissm__GetPreKeyBundleResponse, code),
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
    offsetof(Skissm__GetPreKeyBundleResponse, msg),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "user_id",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Skissm__GetPreKeyBundleResponse, user_id),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pre_key_bundles",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Skissm__GetPreKeyBundleResponse, n_pre_key_bundles),
    offsetof(Skissm__GetPreKeyBundleResponse, pre_key_bundles),
    &skissm__pre_key_bundle__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned skissm__get_pre_key_bundle_response__field_indices_by_name[] = {
  0,   /* field[0] = code */
  1,   /* field[1] = msg */
  3,   /* field[3] = pre_key_bundles */
  2,   /* field[2] = user_id */
};
static const ProtobufCIntRange skissm__get_pre_key_bundle_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor skissm__get_pre_key_bundle_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "skissm.GetPreKeyBundleResponse",
  "GetPreKeyBundleResponse",
  "Skissm__GetPreKeyBundleResponse",
  "skissm",
  sizeof(Skissm__GetPreKeyBundleResponse),
  4,
  skissm__get_pre_key_bundle_response__field_descriptors,
  skissm__get_pre_key_bundle_response__field_indices_by_name,
  1,  skissm__get_pre_key_bundle_response__number_ranges,
  (ProtobufCMessageInit) skissm__get_pre_key_bundle_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
