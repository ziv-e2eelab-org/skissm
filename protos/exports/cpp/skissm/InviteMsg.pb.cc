// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skissm/InviteMsg.proto

#include "skissm/InviteMsg.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace skissm {
constexpr InviteMsg::InviteMsg(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : pre_shared_keys_()
  , version_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , e2ee_pack_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , session_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , alice_identity_key_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , from_(nullptr)
  , to_(nullptr)
  , bob_signed_pre_key_id_(0u)
  , bob_one_time_pre_key_id_(0u){}
struct InviteMsgDefaultTypeInternal {
  constexpr InviteMsgDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~InviteMsgDefaultTypeInternal() {}
  union {
    InviteMsg _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT InviteMsgDefaultTypeInternal _InviteMsg_default_instance_;
}  // namespace skissm
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_skissm_2fInviteMsg_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_skissm_2fInviteMsg_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_skissm_2fInviteMsg_2eproto = nullptr;

const uint32_t TableStruct_skissm_2fInviteMsg_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::skissm::InviteMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::skissm::InviteMsg, version_),
  PROTOBUF_FIELD_OFFSET(::skissm::InviteMsg, e2ee_pack_id_),
  PROTOBUF_FIELD_OFFSET(::skissm::InviteMsg, session_id_),
  PROTOBUF_FIELD_OFFSET(::skissm::InviteMsg, from_),
  PROTOBUF_FIELD_OFFSET(::skissm::InviteMsg, to_),
  PROTOBUF_FIELD_OFFSET(::skissm::InviteMsg, alice_identity_key_),
  PROTOBUF_FIELD_OFFSET(::skissm::InviteMsg, pre_shared_keys_),
  PROTOBUF_FIELD_OFFSET(::skissm::InviteMsg, bob_signed_pre_key_id_),
  PROTOBUF_FIELD_OFFSET(::skissm::InviteMsg, bob_one_time_pre_key_id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::skissm::InviteMsg)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::skissm::_InviteMsg_default_instance_),
};

const char descriptor_table_protodef_skissm_2fInviteMsg_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026skissm/InviteMsg.proto\022\006skissm\032\030skissm"
  "/E2eeAddress.proto\"\377\001\n\tInviteMsg\022\017\n\007vers"
  "ion\030\001 \001(\t\022\024\n\014e2ee_pack_id\030\002 \001(\t\022\022\n\nsessi"
  "on_id\030\003 \001(\t\022!\n\004from\030\004 \001(\0132\023.skissm.E2eeA"
  "ddress\022\037\n\002to\030\005 \001(\0132\023.skissm.E2eeAddress\022"
  "\032\n\022alice_identity_key\030\006 \001(\014\022\027\n\017pre_share"
  "d_keys\030\007 \003(\014\022\035\n\025bob_signed_pre_key_id\030\010 "
  "\001(\r\022\037\n\027bob_one_time_pre_key_id\030\t \001(\rB*\n\030"
  "org.e2eelab.skissm.protoB\016InviteMsgProto"
  "b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_skissm_2fInviteMsg_2eproto_deps[1] = {
  &::descriptor_table_skissm_2fE2eeAddress_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_skissm_2fInviteMsg_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_skissm_2fInviteMsg_2eproto = {
  false, false, 368, descriptor_table_protodef_skissm_2fInviteMsg_2eproto, "skissm/InviteMsg.proto", 
  &descriptor_table_skissm_2fInviteMsg_2eproto_once, descriptor_table_skissm_2fInviteMsg_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_skissm_2fInviteMsg_2eproto::offsets,
  file_level_metadata_skissm_2fInviteMsg_2eproto, file_level_enum_descriptors_skissm_2fInviteMsg_2eproto, file_level_service_descriptors_skissm_2fInviteMsg_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_skissm_2fInviteMsg_2eproto_getter() {
  return &descriptor_table_skissm_2fInviteMsg_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_skissm_2fInviteMsg_2eproto(&descriptor_table_skissm_2fInviteMsg_2eproto);
namespace skissm {

// ===================================================================

class InviteMsg::_Internal {
 public:
  static const ::skissm::E2eeAddress& from(const InviteMsg* msg);
  static const ::skissm::E2eeAddress& to(const InviteMsg* msg);
};

const ::skissm::E2eeAddress&
InviteMsg::_Internal::from(const InviteMsg* msg) {
  return *msg->from_;
}
const ::skissm::E2eeAddress&
InviteMsg::_Internal::to(const InviteMsg* msg) {
  return *msg->to_;
}
void InviteMsg::clear_from() {
  if (GetArenaForAllocation() == nullptr && from_ != nullptr) {
    delete from_;
  }
  from_ = nullptr;
}
void InviteMsg::clear_to() {
  if (GetArenaForAllocation() == nullptr && to_ != nullptr) {
    delete to_;
  }
  to_ = nullptr;
}
InviteMsg::InviteMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  pre_shared_keys_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:skissm.InviteMsg)
}
InviteMsg::InviteMsg(const InviteMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      pre_shared_keys_(from.pre_shared_keys_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    version_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_version().empty()) {
    version_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_version(), 
      GetArenaForAllocation());
  }
  e2ee_pack_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    e2ee_pack_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_e2ee_pack_id().empty()) {
    e2ee_pack_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_e2ee_pack_id(), 
      GetArenaForAllocation());
  }
  session_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    session_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_session_id().empty()) {
    session_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_session_id(), 
      GetArenaForAllocation());
  }
  alice_identity_key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    alice_identity_key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_alice_identity_key().empty()) {
    alice_identity_key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_alice_identity_key(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_from()) {
    from_ = new ::skissm::E2eeAddress(*from.from_);
  } else {
    from_ = nullptr;
  }
  if (from._internal_has_to()) {
    to_ = new ::skissm::E2eeAddress(*from.to_);
  } else {
    to_ = nullptr;
  }
  ::memcpy(&bob_signed_pre_key_id_, &from.bob_signed_pre_key_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&bob_one_time_pre_key_id_) -
    reinterpret_cast<char*>(&bob_signed_pre_key_id_)) + sizeof(bob_one_time_pre_key_id_));
  // @@protoc_insertion_point(copy_constructor:skissm.InviteMsg)
}

inline void InviteMsg::SharedCtor() {
version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  version_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
e2ee_pack_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  e2ee_pack_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
session_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  session_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
alice_identity_key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  alice_identity_key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&from_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&bob_one_time_pre_key_id_) -
    reinterpret_cast<char*>(&from_)) + sizeof(bob_one_time_pre_key_id_));
}

InviteMsg::~InviteMsg() {
  // @@protoc_insertion_point(destructor:skissm.InviteMsg)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void InviteMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  version_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  e2ee_pack_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  session_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  alice_identity_key_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete from_;
  if (this != internal_default_instance()) delete to_;
}

void InviteMsg::ArenaDtor(void* object) {
  InviteMsg* _this = reinterpret_cast< InviteMsg* >(object);
  (void)_this;
}
void InviteMsg::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void InviteMsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void InviteMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:skissm.InviteMsg)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  pre_shared_keys_.Clear();
  version_.ClearToEmpty();
  e2ee_pack_id_.ClearToEmpty();
  session_id_.ClearToEmpty();
  alice_identity_key_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && from_ != nullptr) {
    delete from_;
  }
  from_ = nullptr;
  if (GetArenaForAllocation() == nullptr && to_ != nullptr) {
    delete to_;
  }
  to_ = nullptr;
  ::memset(&bob_signed_pre_key_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&bob_one_time_pre_key_id_) -
      reinterpret_cast<char*>(&bob_signed_pre_key_id_)) + sizeof(bob_one_time_pre_key_id_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InviteMsg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_version();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "skissm.InviteMsg.version"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string e2ee_pack_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_e2ee_pack_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "skissm.InviteMsg.e2ee_pack_id"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string session_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_session_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "skissm.InviteMsg.session_id"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .skissm.E2eeAddress from = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_from(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .skissm.E2eeAddress to = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_to(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes alice_identity_key = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_alice_identity_key();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated bytes pre_shared_keys = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_pre_shared_keys();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<58>(ptr));
        } else
          goto handle_unusual;
        continue;
      // uint32 bob_signed_pre_key_id = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          bob_signed_pre_key_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 bob_one_time_pre_key_id = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          bob_one_time_pre_key_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* InviteMsg::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:skissm.InviteMsg)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string version = 1;
  if (!this->_internal_version().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_version().data(), static_cast<int>(this->_internal_version().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "skissm.InviteMsg.version");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_version(), target);
  }

  // string e2ee_pack_id = 2;
  if (!this->_internal_e2ee_pack_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_e2ee_pack_id().data(), static_cast<int>(this->_internal_e2ee_pack_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "skissm.InviteMsg.e2ee_pack_id");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_e2ee_pack_id(), target);
  }

  // string session_id = 3;
  if (!this->_internal_session_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_session_id().data(), static_cast<int>(this->_internal_session_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "skissm.InviteMsg.session_id");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_session_id(), target);
  }

  // .skissm.E2eeAddress from = 4;
  if (this->_internal_has_from()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::from(this), target, stream);
  }

  // .skissm.E2eeAddress to = 5;
  if (this->_internal_has_to()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::to(this), target, stream);
  }

  // bytes alice_identity_key = 6;
  if (!this->_internal_alice_identity_key().empty()) {
    target = stream->WriteBytesMaybeAliased(
        6, this->_internal_alice_identity_key(), target);
  }

  // repeated bytes pre_shared_keys = 7;
  for (int i = 0, n = this->_internal_pre_shared_keys_size(); i < n; i++) {
    const auto& s = this->_internal_pre_shared_keys(i);
    target = stream->WriteBytes(7, s, target);
  }

  // uint32 bob_signed_pre_key_id = 8;
  if (this->_internal_bob_signed_pre_key_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(8, this->_internal_bob_signed_pre_key_id(), target);
  }

  // uint32 bob_one_time_pre_key_id = 9;
  if (this->_internal_bob_one_time_pre_key_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(9, this->_internal_bob_one_time_pre_key_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:skissm.InviteMsg)
  return target;
}

size_t InviteMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:skissm.InviteMsg)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes pre_shared_keys = 7;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(pre_shared_keys_.size());
  for (int i = 0, n = pre_shared_keys_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      pre_shared_keys_.Get(i));
  }

  // string version = 1;
  if (!this->_internal_version().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_version());
  }

  // string e2ee_pack_id = 2;
  if (!this->_internal_e2ee_pack_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_e2ee_pack_id());
  }

  // string session_id = 3;
  if (!this->_internal_session_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_session_id());
  }

  // bytes alice_identity_key = 6;
  if (!this->_internal_alice_identity_key().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_alice_identity_key());
  }

  // .skissm.E2eeAddress from = 4;
  if (this->_internal_has_from()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *from_);
  }

  // .skissm.E2eeAddress to = 5;
  if (this->_internal_has_to()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *to_);
  }

  // uint32 bob_signed_pre_key_id = 8;
  if (this->_internal_bob_signed_pre_key_id() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_bob_signed_pre_key_id());
  }

  // uint32 bob_one_time_pre_key_id = 9;
  if (this->_internal_bob_one_time_pre_key_id() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_bob_one_time_pre_key_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData InviteMsg::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    InviteMsg::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*InviteMsg::GetClassData() const { return &_class_data_; }

void InviteMsg::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<InviteMsg *>(to)->MergeFrom(
      static_cast<const InviteMsg &>(from));
}


void InviteMsg::MergeFrom(const InviteMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:skissm.InviteMsg)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  pre_shared_keys_.MergeFrom(from.pre_shared_keys_);
  if (!from._internal_version().empty()) {
    _internal_set_version(from._internal_version());
  }
  if (!from._internal_e2ee_pack_id().empty()) {
    _internal_set_e2ee_pack_id(from._internal_e2ee_pack_id());
  }
  if (!from._internal_session_id().empty()) {
    _internal_set_session_id(from._internal_session_id());
  }
  if (!from._internal_alice_identity_key().empty()) {
    _internal_set_alice_identity_key(from._internal_alice_identity_key());
  }
  if (from._internal_has_from()) {
    _internal_mutable_from()->::skissm::E2eeAddress::MergeFrom(from._internal_from());
  }
  if (from._internal_has_to()) {
    _internal_mutable_to()->::skissm::E2eeAddress::MergeFrom(from._internal_to());
  }
  if (from._internal_bob_signed_pre_key_id() != 0) {
    _internal_set_bob_signed_pre_key_id(from._internal_bob_signed_pre_key_id());
  }
  if (from._internal_bob_one_time_pre_key_id() != 0) {
    _internal_set_bob_one_time_pre_key_id(from._internal_bob_one_time_pre_key_id());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void InviteMsg::CopyFrom(const InviteMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:skissm.InviteMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InviteMsg::IsInitialized() const {
  return true;
}

void InviteMsg::InternalSwap(InviteMsg* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  pre_shared_keys_.InternalSwap(&other->pre_shared_keys_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &version_, lhs_arena,
      &other->version_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &e2ee_pack_id_, lhs_arena,
      &other->e2ee_pack_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &session_id_, lhs_arena,
      &other->session_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &alice_identity_key_, lhs_arena,
      &other->alice_identity_key_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(InviteMsg, bob_one_time_pre_key_id_)
      + sizeof(InviteMsg::bob_one_time_pre_key_id_)
      - PROTOBUF_FIELD_OFFSET(InviteMsg, from_)>(
          reinterpret_cast<char*>(&from_),
          reinterpret_cast<char*>(&other->from_));
}

::PROTOBUF_NAMESPACE_ID::Metadata InviteMsg::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_skissm_2fInviteMsg_2eproto_getter, &descriptor_table_skissm_2fInviteMsg_2eproto_once,
      file_level_metadata_skissm_2fInviteMsg_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace skissm
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::skissm::InviteMsg* Arena::CreateMaybeMessage< ::skissm::InviteMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::skissm::InviteMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
