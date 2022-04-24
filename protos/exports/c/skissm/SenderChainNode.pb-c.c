/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: SenderChainNode.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "SenderChainNode.pb-c.h"
void   skissm__sender_chain_node__init
                     (Skissm__SenderChainNode         *message)
{
  static const Skissm__SenderChainNode init_value = SKISSM__SENDER_CHAIN_NODE__INIT;
  *message = init_value;
}
size_t skissm__sender_chain_node__get_packed_size
                     (const Skissm__SenderChainNode *message)
{
  assert(message->base.descriptor == &skissm__sender_chain_node__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t skissm__sender_chain_node__pack
                     (const Skissm__SenderChainNode *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &skissm__sender_chain_node__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t skissm__sender_chain_node__pack_to_buffer
                     (const Skissm__SenderChainNode *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &skissm__sender_chain_node__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Skissm__SenderChainNode *
       skissm__sender_chain_node__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Skissm__SenderChainNode *)
     protobuf_c_message_unpack (&skissm__sender_chain_node__descriptor,
                                allocator, len, data);
}
void   skissm__sender_chain_node__free_unpacked
                     (Skissm__SenderChainNode *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &skissm__sender_chain_node__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor skissm__sender_chain_node__field_descriptors[2] =
{
  {
    "ratchet_key",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Skissm__SenderChainNode, ratchet_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "chain_key",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Skissm__SenderChainNode, chain_key),
    &skissm__chain_key__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned skissm__sender_chain_node__field_indices_by_name[] = {
  1,   /* field[1] = chain_key */
  0,   /* field[0] = ratchet_key */
};
static const ProtobufCIntRange skissm__sender_chain_node__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor skissm__sender_chain_node__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "skissm.SenderChainNode",
  "SenderChainNode",
  "Skissm__SenderChainNode",
  "skissm",
  sizeof(Skissm__SenderChainNode),
  2,
  skissm__sender_chain_node__field_descriptors,
  skissm__sender_chain_node__field_indices_by_name,
  1,  skissm__sender_chain_node__number_ranges,
  (ProtobufCMessageInit) skissm__sender_chain_node__init,
  NULL,NULL,NULL    /* reserved[123] */
};
