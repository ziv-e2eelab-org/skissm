/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: SupplyOpksResponse.proto */

#ifndef PROTOBUF_C_SupplyOpksResponse_2eproto__INCLUDED
#define PROTOBUF_C_SupplyOpksResponse_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Skissm__SupplyOpksResponse Skissm__SupplyOpksResponse;


/* --- enums --- */


/* --- messages --- */

struct  Skissm__SupplyOpksResponse
{
  ProtobufCMessage base;
  uint32_t code;
  char *msg;
};
#define SKISSM__SUPPLY_OPKS_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&skissm__supply_opks_response__descriptor) \
    , 0, (char *)protobuf_c_empty_string }


/* Skissm__SupplyOpksResponse methods */
void   skissm__supply_opks_response__init
                     (Skissm__SupplyOpksResponse         *message);
size_t skissm__supply_opks_response__get_packed_size
                     (const Skissm__SupplyOpksResponse   *message);
size_t skissm__supply_opks_response__pack
                     (const Skissm__SupplyOpksResponse   *message,
                      uint8_t             *out);
size_t skissm__supply_opks_response__pack_to_buffer
                     (const Skissm__SupplyOpksResponse   *message,
                      ProtobufCBuffer     *buffer);
Skissm__SupplyOpksResponse *
       skissm__supply_opks_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   skissm__supply_opks_response__free_unpacked
                     (Skissm__SupplyOpksResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Skissm__SupplyOpksResponse_Closure)
                 (const Skissm__SupplyOpksResponse *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor skissm__supply_opks_response__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_SupplyOpksResponse_2eproto__INCLUDED */
