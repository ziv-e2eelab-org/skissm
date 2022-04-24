/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: RegisterUserRequest.proto */

#ifndef PROTOBUF_C_RegisterUserRequest_2eproto__INCLUDED
#define PROTOBUF_C_RegisterUserRequest_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "skissm/IdentityKeyPublic.pb-c.h"
#include "skissm/SignedPreKeyPublic.pb-c.h"
#include "skissm/OneTimePreKeyPublic.pb-c.h"

typedef struct Skissm__RegisterUserRequest Skissm__RegisterUserRequest;


/* --- enums --- */


/* --- messages --- */

struct  Skissm__RegisterUserRequest
{
  ProtobufCMessage base;
  char *user_name;
  char *device_id;
  char *authenticator;
  char *auth_code;
  char *e2ee_pack_id;
  Skissm__IdentityKeyPublic *identity_key_public;
  Skissm__SignedPreKeyPublic *signed_pre_key_public;
  size_t n_one_time_pre_keys;
  Skissm__OneTimePreKeyPublic **one_time_pre_keys;
};
#define SKISSM__REGISTER_USER_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&skissm__register_user_request__descriptor) \
    , (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, NULL, NULL, 0,NULL }


/* Skissm__RegisterUserRequest methods */
void   skissm__register_user_request__init
                     (Skissm__RegisterUserRequest         *message);
size_t skissm__register_user_request__get_packed_size
                     (const Skissm__RegisterUserRequest   *message);
size_t skissm__register_user_request__pack
                     (const Skissm__RegisterUserRequest   *message,
                      uint8_t             *out);
size_t skissm__register_user_request__pack_to_buffer
                     (const Skissm__RegisterUserRequest   *message,
                      ProtobufCBuffer     *buffer);
Skissm__RegisterUserRequest *
       skissm__register_user_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   skissm__register_user_request__free_unpacked
                     (Skissm__RegisterUserRequest *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Skissm__RegisterUserRequest_Closure)
                 (const Skissm__RegisterUserRequest *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor skissm__register_user_request__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_RegisterUserRequest_2eproto__INCLUDED */
