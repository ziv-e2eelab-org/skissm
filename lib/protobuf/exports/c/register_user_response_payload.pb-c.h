/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: register_user_response_payload.proto */

#ifndef PROTOBUF_C_register_5fuser_5fresponse_5fpayload_2eproto__INCLUDED
#define PROTOBUF_C_register_5fuser_5fresponse_5fpayload_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "e2ee_address.pb-c.h"

typedef struct Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload;


/* --- enums --- */


/* --- messages --- */

struct  Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload
{
  ProtobufCMessage base;
  uint32_t code;
  char *msg;
  Org__E2eelab__Skissm__Proto__E2eeAddress *address;
};
#define ORG__E2EELAB__SKISSM__PROTO__REGISTER_USER_RESPONSE_PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__skissm__proto__register_user_response_payload__descriptor) \
    , 0, (char *)protobuf_c_empty_string, NULL }


/* Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload methods */
void   org__e2eelab__skissm__proto__register_user_response_payload__init
                     (Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload         *message);
size_t org__e2eelab__skissm__proto__register_user_response_payload__get_packed_size
                     (const Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload   *message);
size_t org__e2eelab__skissm__proto__register_user_response_payload__pack
                     (const Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload   *message,
                      uint8_t             *out);
size_t org__e2eelab__skissm__proto__register_user_response_payload__pack_to_buffer
                     (const Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload *
       org__e2eelab__skissm__proto__register_user_response_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__skissm__proto__register_user_response_payload__free_unpacked
                     (Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload_Closure)
                 (const Org__E2eelab__Skissm__Proto__RegisterUserResponsePayload *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor org__e2eelab__skissm__proto__register_user_response_payload__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_register_5fuser_5fresponse_5fpayload_2eproto__INCLUDED */
