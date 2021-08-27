/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: e2ee_session.proto */

#ifndef PROTOBUF_C_e2ee_5fsession_2eproto__INCLUDED
#define PROTOBUF_C_e2ee_5fsession_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "e2ee_address.pb-c.h"
#include "e2ee_ratchet.pb-c.h"

typedef struct _Org__E2eelab__Skissm__Proto__E2eeSession Org__E2eelab__Skissm__Proto__E2eeSession;


/* --- enums --- */


/* --- messages --- */

struct  _Org__E2eelab__Skissm__Proto__E2eeSession
{
  ProtobufCMessage base;
  uint32_t version;
  ProtobufCBinaryData session_id;
  Org__E2eelab__Skissm__Proto__E2eeAddress *session_owner;
  Org__E2eelab__Skissm__Proto__E2eeAddress *from;
  Org__E2eelab__Skissm__Proto__E2eeAddress *to;
  Org__E2eelab__Skissm__Proto__E2eeRatchet *ratchet;
  ProtobufCBinaryData alice_identity_key;
  ProtobufCBinaryData alice_ephemeral_key;
  ProtobufCBinaryData bob_signed_pre_key;
  ProtobufCBinaryData bob_one_time_pre_key;
  protobuf_c_boolean responded;
  ProtobufCBinaryData associated_data;
};
#define ORG__E2EELAB__SKISSM__PROTO__E2EE_SESSION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__skissm__proto__e2ee_session__descriptor) \
    , 0, {0,NULL}, NULL, NULL, NULL, NULL, {0,NULL}, {0,NULL}, {0,NULL}, {0,NULL}, 0, {0,NULL} }


/* Org__E2eelab__Skissm__Proto__E2eeSession methods */
void   org__e2eelab__skissm__proto__e2ee_session__init
                     (Org__E2eelab__Skissm__Proto__E2eeSession         *message);
size_t org__e2eelab__skissm__proto__e2ee_session__get_packed_size
                     (const Org__E2eelab__Skissm__Proto__E2eeSession   *message);
size_t org__e2eelab__skissm__proto__e2ee_session__pack
                     (const Org__E2eelab__Skissm__Proto__E2eeSession   *message,
                      uint8_t             *out);
size_t org__e2eelab__skissm__proto__e2ee_session__pack_to_buffer
                     (const Org__E2eelab__Skissm__Proto__E2eeSession   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Skissm__Proto__E2eeSession *
       org__e2eelab__skissm__proto__e2ee_session__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__skissm__proto__e2ee_session__free_unpacked
                     (Org__E2eelab__Skissm__Proto__E2eeSession *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Org__E2eelab__Skissm__Proto__E2eeSession_Closure)
                 (const Org__E2eelab__Skissm__Proto__E2eeSession *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor org__e2eelab__skissm__proto__e2ee_session__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_e2ee_5fsession_2eproto__INCLUDED */
