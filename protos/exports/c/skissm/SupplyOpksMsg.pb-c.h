/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: SupplyOpksMsg.proto */

#ifndef PROTOBUF_C_SupplyOpksMsg_2eproto__INCLUDED
#define PROTOBUF_C_SupplyOpksMsg_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "skissm/E2eeAddress.pb-c.h"

typedef struct Skissm__SupplyOpksMsg Skissm__SupplyOpksMsg;


/* --- enums --- */


/* --- messages --- */

struct  Skissm__SupplyOpksMsg
{
  ProtobufCMessage base;
  int64_t server_t;
  uint32_t opks_num;
  Skissm__E2eeAddress *user_address;
};
#define SKISSM__SUPPLY_OPKS_MSG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&skissm__supply_opks_msg__descriptor) \
    , 0, 0, NULL }


/* Skissm__SupplyOpksMsg methods */
void   skissm__supply_opks_msg__init
                     (Skissm__SupplyOpksMsg         *message);
size_t skissm__supply_opks_msg__get_packed_size
                     (const Skissm__SupplyOpksMsg   *message);
size_t skissm__supply_opks_msg__pack
                     (const Skissm__SupplyOpksMsg   *message,
                      uint8_t             *out);
size_t skissm__supply_opks_msg__pack_to_buffer
                     (const Skissm__SupplyOpksMsg   *message,
                      ProtobufCBuffer     *buffer);
Skissm__SupplyOpksMsg *
       skissm__supply_opks_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   skissm__supply_opks_msg__free_unpacked
                     (Skissm__SupplyOpksMsg *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Skissm__SupplyOpksMsg_Closure)
                 (const Skissm__SupplyOpksMsg *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor skissm__supply_opks_msg__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_SupplyOpksMsg_2eproto__INCLUDED */
