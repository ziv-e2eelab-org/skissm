/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: SignedPreKey.proto */

#ifndef PROTOBUF_C_SignedPreKey_2eproto__INCLUDED
#define PROTOBUF_C_SignedPreKey_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "skissm/KeyPair.pb-c.h"

typedef struct Skissm__SignedPreKey Skissm__SignedPreKey;


/* --- enums --- */


/* --- messages --- */

struct  Skissm__SignedPreKey
{
  ProtobufCMessage base;
  uint32_t spk_id;
  Skissm__KeyPair *key_pair;
  ProtobufCBinaryData signature;
  int64_t ttl;
};
#define SKISSM__SIGNED_PRE_KEY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&skissm__signed_pre_key__descriptor) \
    , 0, NULL, {0,NULL}, 0 }


/* Skissm__SignedPreKey methods */
void   skissm__signed_pre_key__init
                     (Skissm__SignedPreKey         *message);
size_t skissm__signed_pre_key__get_packed_size
                     (const Skissm__SignedPreKey   *message);
size_t skissm__signed_pre_key__pack
                     (const Skissm__SignedPreKey   *message,
                      uint8_t             *out);
size_t skissm__signed_pre_key__pack_to_buffer
                     (const Skissm__SignedPreKey   *message,
                      ProtobufCBuffer     *buffer);
Skissm__SignedPreKey *
       skissm__signed_pre_key__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   skissm__signed_pre_key__free_unpacked
                     (Skissm__SignedPreKey *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Skissm__SignedPreKey_Closure)
                 (const Skissm__SignedPreKey *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor skissm__signed_pre_key__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_SignedPreKey_2eproto__INCLUDED */
