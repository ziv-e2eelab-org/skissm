/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: e2ee_message.proto */

#ifndef PROTOBUF_C_e2ee_5fmessage_2eproto__INCLUDED
#define PROTOBUF_C_e2ee_5fmessage_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "e2ee_address.pb-c.h"

typedef struct Org__E2eelab__Lib__Protobuf__E2eeMsgPayload Org__E2eelab__Lib__Protobuf__E2eeMsgPayload;
typedef struct Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload;
typedef struct Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload;
typedef struct Org__E2eelab__Lib__Protobuf__E2eeMessage Org__E2eelab__Lib__Protobuf__E2eeMessage;
typedef struct Org__E2eelab__Lib__Protobuf__E2eePlaintext Org__E2eelab__Lib__Protobuf__E2eePlaintext;
typedef struct Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload;


/* --- enums --- */

typedef enum _Org__E2eelab__Lib__Protobuf__E2eeMessageType {
  ORG__E2EELAB__LIB__PROTOBUF__E2EE_MESSAGE_TYPE__PRE_KEY = 0,
  ORG__E2EELAB__LIB__PROTOBUF__E2EE_MESSAGE_TYPE__MESSAGE = 1,
  ORG__E2EELAB__LIB__PROTOBUF__E2EE_MESSAGE_TYPE__GROUP_MESSAGE = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(ORG__E2EELAB__LIB__PROTOBUF__E2EE_MESSAGE_TYPE)
} Org__E2eelab__Lib__Protobuf__E2eeMessageType;
typedef enum _Org__E2eelab__Lib__Protobuf__E2eePlaintextType {
  ORG__E2EELAB__LIB__PROTOBUF__E2EE_PLAINTEXT_TYPE__COMMON_MSG = 0,
  ORG__E2EELAB__LIB__PROTOBUF__E2EE_PLAINTEXT_TYPE__GROUP_PRE_KEY = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(ORG__E2EELAB__LIB__PROTOBUF__E2EE_PLAINTEXT_TYPE)
} Org__E2eelab__Lib__Protobuf__E2eePlaintextType;

/* --- messages --- */

struct  Org__E2eelab__Lib__Protobuf__E2eeMsgPayload
{
  ProtobufCMessage base;
  uint32_t sequence;
  ProtobufCBinaryData ciphertext;
  ProtobufCBinaryData ratchet_key;
};
#define ORG__E2EELAB__LIB__PROTOBUF__E2EE_MSG_PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__lib__protobuf__e2ee_msg_payload__descriptor) \
    , 0, {0,NULL}, {0,NULL} }


struct  Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload
{
  ProtobufCMessage base;
  uint32_t sequence;
  ProtobufCBinaryData ciphertext;
  ProtobufCBinaryData signature;
};
#define ORG__E2EELAB__LIB__PROTOBUF__E2EE_GROUP_MSG_PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__lib__protobuf__e2ee_group_msg_payload__descriptor) \
    , 0, {0,NULL}, {0,NULL} }


struct  Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload
{
  ProtobufCMessage base;
  ProtobufCBinaryData alice_identity_key;
  ProtobufCBinaryData alice_ephemeral_key;
  ProtobufCBinaryData bob_signed_pre_key;
  ProtobufCBinaryData bob_one_time_pre_key;
  Org__E2eelab__Lib__Protobuf__E2eeMsgPayload *msg_payload;
};
#define ORG__E2EELAB__LIB__PROTOBUF__E2EE_PRE_KEY_PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__lib__protobuf__e2ee_pre_key_payload__descriptor) \
    , {0,NULL}, {0,NULL}, {0,NULL}, {0,NULL}, NULL }


struct  Org__E2eelab__Lib__Protobuf__E2eeMessage
{
  ProtobufCMessage base;
  uint32_t version;
  Org__E2eelab__Lib__Protobuf__E2eeAddress *from;
  Org__E2eelab__Lib__Protobuf__E2eeAddress *to;
  ProtobufCBinaryData session_id;
  Org__E2eelab__Lib__Protobuf__E2eeMessageType msg_type;
  ProtobufCBinaryData payload;
};
#define ORG__E2EELAB__LIB__PROTOBUF__E2EE_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__lib__protobuf__e2ee_message__descriptor) \
    , 0, NULL, NULL, {0,NULL}, ORG__E2EELAB__LIB__PROTOBUF__E2EE_MESSAGE_TYPE__PRE_KEY, {0,NULL} }


struct  Org__E2eelab__Lib__Protobuf__E2eePlaintext
{
  ProtobufCMessage base;
  uint32_t version;
  Org__E2eelab__Lib__Protobuf__E2eePlaintextType plaintext_type;
  ProtobufCBinaryData payload;
};
#define ORG__E2EELAB__LIB__PROTOBUF__E2EE_PLAINTEXT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__lib__protobuf__e2ee_plaintext__descriptor) \
    , 0, ORG__E2EELAB__LIB__PROTOBUF__E2EE_PLAINTEXT_TYPE__COMMON_MSG, {0,NULL} }


struct  Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload
{
  ProtobufCMessage base;
  ProtobufCBinaryData session_id;
  Org__E2eelab__Lib__Protobuf__E2eeAddress *group_address;
  size_t n_member_addresses;
  Org__E2eelab__Lib__Protobuf__E2eeAddress **member_addresses;
  uint32_t sequence;
  ProtobufCBinaryData chain_key;
  ProtobufCBinaryData signature_public_key;
};
#define ORG__E2EELAB__LIB__PROTOBUF__E2EE_GROUP_PRE_KEY_PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&org__e2eelab__lib__protobuf__e2ee_group_pre_key_payload__descriptor) \
    , {0,NULL}, NULL, 0,NULL, 0, {0,NULL}, {0,NULL} }


/* Org__E2eelab__Lib__Protobuf__E2eeMsgPayload methods */
void   org__e2eelab__lib__protobuf__e2ee_msg_payload__init
                     (Org__E2eelab__Lib__Protobuf__E2eeMsgPayload         *message);
size_t org__e2eelab__lib__protobuf__e2ee_msg_payload__get_packed_size
                     (const Org__E2eelab__Lib__Protobuf__E2eeMsgPayload   *message);
size_t org__e2eelab__lib__protobuf__e2ee_msg_payload__pack
                     (const Org__E2eelab__Lib__Protobuf__E2eeMsgPayload   *message,
                      uint8_t             *out);
size_t org__e2eelab__lib__protobuf__e2ee_msg_payload__pack_to_buffer
                     (const Org__E2eelab__Lib__Protobuf__E2eeMsgPayload   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Lib__Protobuf__E2eeMsgPayload *
       org__e2eelab__lib__protobuf__e2ee_msg_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__lib__protobuf__e2ee_msg_payload__free_unpacked
                     (Org__E2eelab__Lib__Protobuf__E2eeMsgPayload *message,
                      ProtobufCAllocator *allocator);
/* Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload methods */
void   org__e2eelab__lib__protobuf__e2ee_group_msg_payload__init
                     (Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload         *message);
size_t org__e2eelab__lib__protobuf__e2ee_group_msg_payload__get_packed_size
                     (const Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload   *message);
size_t org__e2eelab__lib__protobuf__e2ee_group_msg_payload__pack
                     (const Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload   *message,
                      uint8_t             *out);
size_t org__e2eelab__lib__protobuf__e2ee_group_msg_payload__pack_to_buffer
                     (const Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload *
       org__e2eelab__lib__protobuf__e2ee_group_msg_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__lib__protobuf__e2ee_group_msg_payload__free_unpacked
                     (Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload *message,
                      ProtobufCAllocator *allocator);
/* Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload methods */
void   org__e2eelab__lib__protobuf__e2ee_pre_key_payload__init
                     (Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload         *message);
size_t org__e2eelab__lib__protobuf__e2ee_pre_key_payload__get_packed_size
                     (const Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload   *message);
size_t org__e2eelab__lib__protobuf__e2ee_pre_key_payload__pack
                     (const Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload   *message,
                      uint8_t             *out);
size_t org__e2eelab__lib__protobuf__e2ee_pre_key_payload__pack_to_buffer
                     (const Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload *
       org__e2eelab__lib__protobuf__e2ee_pre_key_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__lib__protobuf__e2ee_pre_key_payload__free_unpacked
                     (Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload *message,
                      ProtobufCAllocator *allocator);
/* Org__E2eelab__Lib__Protobuf__E2eeMessage methods */
void   org__e2eelab__lib__protobuf__e2ee_message__init
                     (Org__E2eelab__Lib__Protobuf__E2eeMessage         *message);
size_t org__e2eelab__lib__protobuf__e2ee_message__get_packed_size
                     (const Org__E2eelab__Lib__Protobuf__E2eeMessage   *message);
size_t org__e2eelab__lib__protobuf__e2ee_message__pack
                     (const Org__E2eelab__Lib__Protobuf__E2eeMessage   *message,
                      uint8_t             *out);
size_t org__e2eelab__lib__protobuf__e2ee_message__pack_to_buffer
                     (const Org__E2eelab__Lib__Protobuf__E2eeMessage   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Lib__Protobuf__E2eeMessage *
       org__e2eelab__lib__protobuf__e2ee_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__lib__protobuf__e2ee_message__free_unpacked
                     (Org__E2eelab__Lib__Protobuf__E2eeMessage *message,
                      ProtobufCAllocator *allocator);
/* Org__E2eelab__Lib__Protobuf__E2eePlaintext methods */
void   org__e2eelab__lib__protobuf__e2ee_plaintext__init
                     (Org__E2eelab__Lib__Protobuf__E2eePlaintext         *message);
size_t org__e2eelab__lib__protobuf__e2ee_plaintext__get_packed_size
                     (const Org__E2eelab__Lib__Protobuf__E2eePlaintext   *message);
size_t org__e2eelab__lib__protobuf__e2ee_plaintext__pack
                     (const Org__E2eelab__Lib__Protobuf__E2eePlaintext   *message,
                      uint8_t             *out);
size_t org__e2eelab__lib__protobuf__e2ee_plaintext__pack_to_buffer
                     (const Org__E2eelab__Lib__Protobuf__E2eePlaintext   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Lib__Protobuf__E2eePlaintext *
       org__e2eelab__lib__protobuf__e2ee_plaintext__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__lib__protobuf__e2ee_plaintext__free_unpacked
                     (Org__E2eelab__Lib__Protobuf__E2eePlaintext *message,
                      ProtobufCAllocator *allocator);
/* Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload methods */
void   org__e2eelab__lib__protobuf__e2ee_group_pre_key_payload__init
                     (Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload         *message);
size_t org__e2eelab__lib__protobuf__e2ee_group_pre_key_payload__get_packed_size
                     (const Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload   *message);
size_t org__e2eelab__lib__protobuf__e2ee_group_pre_key_payload__pack
                     (const Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload   *message,
                      uint8_t             *out);
size_t org__e2eelab__lib__protobuf__e2ee_group_pre_key_payload__pack_to_buffer
                     (const Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload   *message,
                      ProtobufCBuffer     *buffer);
Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload *
       org__e2eelab__lib__protobuf__e2ee_group_pre_key_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   org__e2eelab__lib__protobuf__e2ee_group_pre_key_payload__free_unpacked
                     (Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Org__E2eelab__Lib__Protobuf__E2eeMsgPayload_Closure)
                 (const Org__E2eelab__Lib__Protobuf__E2eeMsgPayload *message,
                  void *closure_data);
typedef void (*Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload_Closure)
                 (const Org__E2eelab__Lib__Protobuf__E2eeGroupMsgPayload *message,
                  void *closure_data);
typedef void (*Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload_Closure)
                 (const Org__E2eelab__Lib__Protobuf__E2eePreKeyPayload *message,
                  void *closure_data);
typedef void (*Org__E2eelab__Lib__Protobuf__E2eeMessage_Closure)
                 (const Org__E2eelab__Lib__Protobuf__E2eeMessage *message,
                  void *closure_data);
typedef void (*Org__E2eelab__Lib__Protobuf__E2eePlaintext_Closure)
                 (const Org__E2eelab__Lib__Protobuf__E2eePlaintext *message,
                  void *closure_data);
typedef void (*Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload_Closure)
                 (const Org__E2eelab__Lib__Protobuf__E2eeGroupPreKeyPayload *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    org__e2eelab__lib__protobuf__e2ee_message_type__descriptor;
extern const ProtobufCEnumDescriptor    org__e2eelab__lib__protobuf__e2ee_plaintext_type__descriptor;
extern const ProtobufCMessageDescriptor org__e2eelab__lib__protobuf__e2ee_msg_payload__descriptor;
extern const ProtobufCMessageDescriptor org__e2eelab__lib__protobuf__e2ee_group_msg_payload__descriptor;
extern const ProtobufCMessageDescriptor org__e2eelab__lib__protobuf__e2ee_pre_key_payload__descriptor;
extern const ProtobufCMessageDescriptor org__e2eelab__lib__protobuf__e2ee_message__descriptor;
extern const ProtobufCMessageDescriptor org__e2eelab__lib__protobuf__e2ee_plaintext__descriptor;
extern const ProtobufCMessageDescriptor org__e2eelab__lib__protobuf__e2ee_group_pre_key_payload__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_e2ee_5fmessage_2eproto__INCLUDED */
