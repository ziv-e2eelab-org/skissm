// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skissm/AddGroupMembersMsg.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_skissm_2fAddGroupMembersMsg_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_skissm_2fAddGroupMembersMsg_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "skissm/E2eeAddress.pb.h"
#include "skissm/GroupMember.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_skissm_2fAddGroupMembersMsg_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_skissm_2fAddGroupMembersMsg_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_skissm_2fAddGroupMembersMsg_2eproto;
namespace skissm {
class AddGroupMembersMsg;
struct AddGroupMembersMsgDefaultTypeInternal;
extern AddGroupMembersMsgDefaultTypeInternal _AddGroupMembersMsg_default_instance_;
}  // namespace skissm
PROTOBUF_NAMESPACE_OPEN
template<> ::skissm::AddGroupMembersMsg* Arena::CreateMaybeMessage<::skissm::AddGroupMembersMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace skissm {

// ===================================================================

class AddGroupMembersMsg final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:skissm.AddGroupMembersMsg) */ {
 public:
  inline AddGroupMembersMsg() : AddGroupMembersMsg(nullptr) {}
  ~AddGroupMembersMsg() override;
  explicit constexpr AddGroupMembersMsg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AddGroupMembersMsg(const AddGroupMembersMsg& from);
  AddGroupMembersMsg(AddGroupMembersMsg&& from) noexcept
    : AddGroupMembersMsg() {
    *this = ::std::move(from);
  }

  inline AddGroupMembersMsg& operator=(const AddGroupMembersMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline AddGroupMembersMsg& operator=(AddGroupMembersMsg&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AddGroupMembersMsg& default_instance() {
    return *internal_default_instance();
  }
  static inline const AddGroupMembersMsg* internal_default_instance() {
    return reinterpret_cast<const AddGroupMembersMsg*>(
               &_AddGroupMembersMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AddGroupMembersMsg& a, AddGroupMembersMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(AddGroupMembersMsg* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AddGroupMembersMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AddGroupMembersMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AddGroupMembersMsg>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AddGroupMembersMsg& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const AddGroupMembersMsg& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AddGroupMembersMsg* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "skissm.AddGroupMembersMsg";
  }
  protected:
  explicit AddGroupMembersMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAddingMembersFieldNumber = 4,
    kAllMembersFieldNumber = 5,
    kE2EePackIdFieldNumber = 1,
    kSenderAddressFieldNumber = 2,
    kGroupAddressFieldNumber = 3,
  };
  // repeated .skissm.GroupMember adding_members = 4;
  int adding_members_size() const;
  private:
  int _internal_adding_members_size() const;
  public:
  void clear_adding_members();
  ::skissm::GroupMember* mutable_adding_members(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::skissm::GroupMember >*
      mutable_adding_members();
  private:
  const ::skissm::GroupMember& _internal_adding_members(int index) const;
  ::skissm::GroupMember* _internal_add_adding_members();
  public:
  const ::skissm::GroupMember& adding_members(int index) const;
  ::skissm::GroupMember* add_adding_members();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::skissm::GroupMember >&
      adding_members() const;

  // repeated .skissm.GroupMember all_members = 5;
  int all_members_size() const;
  private:
  int _internal_all_members_size() const;
  public:
  void clear_all_members();
  ::skissm::GroupMember* mutable_all_members(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::skissm::GroupMember >*
      mutable_all_members();
  private:
  const ::skissm::GroupMember& _internal_all_members(int index) const;
  ::skissm::GroupMember* _internal_add_all_members();
  public:
  const ::skissm::GroupMember& all_members(int index) const;
  ::skissm::GroupMember* add_all_members();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::skissm::GroupMember >&
      all_members() const;

  // string e2ee_pack_id = 1;
  void clear_e2ee_pack_id();
  const std::string& e2ee_pack_id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_e2ee_pack_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_e2ee_pack_id();
  PROTOBUF_NODISCARD std::string* release_e2ee_pack_id();
  void set_allocated_e2ee_pack_id(std::string* e2ee_pack_id);
  private:
  const std::string& _internal_e2ee_pack_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_e2ee_pack_id(const std::string& value);
  std::string* _internal_mutable_e2ee_pack_id();
  public:

  // .skissm.E2eeAddress sender_address = 2;
  bool has_sender_address() const;
  private:
  bool _internal_has_sender_address() const;
  public:
  void clear_sender_address();
  const ::skissm::E2eeAddress& sender_address() const;
  PROTOBUF_NODISCARD ::skissm::E2eeAddress* release_sender_address();
  ::skissm::E2eeAddress* mutable_sender_address();
  void set_allocated_sender_address(::skissm::E2eeAddress* sender_address);
  private:
  const ::skissm::E2eeAddress& _internal_sender_address() const;
  ::skissm::E2eeAddress* _internal_mutable_sender_address();
  public:
  void unsafe_arena_set_allocated_sender_address(
      ::skissm::E2eeAddress* sender_address);
  ::skissm::E2eeAddress* unsafe_arena_release_sender_address();

  // .skissm.E2eeAddress group_address = 3;
  bool has_group_address() const;
  private:
  bool _internal_has_group_address() const;
  public:
  void clear_group_address();
  const ::skissm::E2eeAddress& group_address() const;
  PROTOBUF_NODISCARD ::skissm::E2eeAddress* release_group_address();
  ::skissm::E2eeAddress* mutable_group_address();
  void set_allocated_group_address(::skissm::E2eeAddress* group_address);
  private:
  const ::skissm::E2eeAddress& _internal_group_address() const;
  ::skissm::E2eeAddress* _internal_mutable_group_address();
  public:
  void unsafe_arena_set_allocated_group_address(
      ::skissm::E2eeAddress* group_address);
  ::skissm::E2eeAddress* unsafe_arena_release_group_address();

  // @@protoc_insertion_point(class_scope:skissm.AddGroupMembersMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::skissm::GroupMember > adding_members_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::skissm::GroupMember > all_members_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr e2ee_pack_id_;
  ::skissm::E2eeAddress* sender_address_;
  ::skissm::E2eeAddress* group_address_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_skissm_2fAddGroupMembersMsg_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AddGroupMembersMsg

// string e2ee_pack_id = 1;
inline void AddGroupMembersMsg::clear_e2ee_pack_id() {
  e2ee_pack_id_.ClearToEmpty();
}
inline const std::string& AddGroupMembersMsg::e2ee_pack_id() const {
  // @@protoc_insertion_point(field_get:skissm.AddGroupMembersMsg.e2ee_pack_id)
  return _internal_e2ee_pack_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AddGroupMembersMsg::set_e2ee_pack_id(ArgT0&& arg0, ArgT... args) {
 
 e2ee_pack_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:skissm.AddGroupMembersMsg.e2ee_pack_id)
}
inline std::string* AddGroupMembersMsg::mutable_e2ee_pack_id() {
  std::string* _s = _internal_mutable_e2ee_pack_id();
  // @@protoc_insertion_point(field_mutable:skissm.AddGroupMembersMsg.e2ee_pack_id)
  return _s;
}
inline const std::string& AddGroupMembersMsg::_internal_e2ee_pack_id() const {
  return e2ee_pack_id_.Get();
}
inline void AddGroupMembersMsg::_internal_set_e2ee_pack_id(const std::string& value) {
  
  e2ee_pack_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* AddGroupMembersMsg::_internal_mutable_e2ee_pack_id() {
  
  return e2ee_pack_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* AddGroupMembersMsg::release_e2ee_pack_id() {
  // @@protoc_insertion_point(field_release:skissm.AddGroupMembersMsg.e2ee_pack_id)
  return e2ee_pack_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void AddGroupMembersMsg::set_allocated_e2ee_pack_id(std::string* e2ee_pack_id) {
  if (e2ee_pack_id != nullptr) {
    
  } else {
    
  }
  e2ee_pack_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), e2ee_pack_id,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (e2ee_pack_id_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    e2ee_pack_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:skissm.AddGroupMembersMsg.e2ee_pack_id)
}

// .skissm.E2eeAddress sender_address = 2;
inline bool AddGroupMembersMsg::_internal_has_sender_address() const {
  return this != internal_default_instance() && sender_address_ != nullptr;
}
inline bool AddGroupMembersMsg::has_sender_address() const {
  return _internal_has_sender_address();
}
inline const ::skissm::E2eeAddress& AddGroupMembersMsg::_internal_sender_address() const {
  const ::skissm::E2eeAddress* p = sender_address_;
  return p != nullptr ? *p : reinterpret_cast<const ::skissm::E2eeAddress&>(
      ::skissm::_E2eeAddress_default_instance_);
}
inline const ::skissm::E2eeAddress& AddGroupMembersMsg::sender_address() const {
  // @@protoc_insertion_point(field_get:skissm.AddGroupMembersMsg.sender_address)
  return _internal_sender_address();
}
inline void AddGroupMembersMsg::unsafe_arena_set_allocated_sender_address(
    ::skissm::E2eeAddress* sender_address) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(sender_address_);
  }
  sender_address_ = sender_address;
  if (sender_address) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:skissm.AddGroupMembersMsg.sender_address)
}
inline ::skissm::E2eeAddress* AddGroupMembersMsg::release_sender_address() {
  
  ::skissm::E2eeAddress* temp = sender_address_;
  sender_address_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::skissm::E2eeAddress* AddGroupMembersMsg::unsafe_arena_release_sender_address() {
  // @@protoc_insertion_point(field_release:skissm.AddGroupMembersMsg.sender_address)
  
  ::skissm::E2eeAddress* temp = sender_address_;
  sender_address_ = nullptr;
  return temp;
}
inline ::skissm::E2eeAddress* AddGroupMembersMsg::_internal_mutable_sender_address() {
  
  if (sender_address_ == nullptr) {
    auto* p = CreateMaybeMessage<::skissm::E2eeAddress>(GetArenaForAllocation());
    sender_address_ = p;
  }
  return sender_address_;
}
inline ::skissm::E2eeAddress* AddGroupMembersMsg::mutable_sender_address() {
  ::skissm::E2eeAddress* _msg = _internal_mutable_sender_address();
  // @@protoc_insertion_point(field_mutable:skissm.AddGroupMembersMsg.sender_address)
  return _msg;
}
inline void AddGroupMembersMsg::set_allocated_sender_address(::skissm::E2eeAddress* sender_address) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(sender_address_);
  }
  if (sender_address) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(sender_address));
    if (message_arena != submessage_arena) {
      sender_address = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, sender_address, submessage_arena);
    }
    
  } else {
    
  }
  sender_address_ = sender_address;
  // @@protoc_insertion_point(field_set_allocated:skissm.AddGroupMembersMsg.sender_address)
}

// .skissm.E2eeAddress group_address = 3;
inline bool AddGroupMembersMsg::_internal_has_group_address() const {
  return this != internal_default_instance() && group_address_ != nullptr;
}
inline bool AddGroupMembersMsg::has_group_address() const {
  return _internal_has_group_address();
}
inline const ::skissm::E2eeAddress& AddGroupMembersMsg::_internal_group_address() const {
  const ::skissm::E2eeAddress* p = group_address_;
  return p != nullptr ? *p : reinterpret_cast<const ::skissm::E2eeAddress&>(
      ::skissm::_E2eeAddress_default_instance_);
}
inline const ::skissm::E2eeAddress& AddGroupMembersMsg::group_address() const {
  // @@protoc_insertion_point(field_get:skissm.AddGroupMembersMsg.group_address)
  return _internal_group_address();
}
inline void AddGroupMembersMsg::unsafe_arena_set_allocated_group_address(
    ::skissm::E2eeAddress* group_address) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(group_address_);
  }
  group_address_ = group_address;
  if (group_address) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:skissm.AddGroupMembersMsg.group_address)
}
inline ::skissm::E2eeAddress* AddGroupMembersMsg::release_group_address() {
  
  ::skissm::E2eeAddress* temp = group_address_;
  group_address_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::skissm::E2eeAddress* AddGroupMembersMsg::unsafe_arena_release_group_address() {
  // @@protoc_insertion_point(field_release:skissm.AddGroupMembersMsg.group_address)
  
  ::skissm::E2eeAddress* temp = group_address_;
  group_address_ = nullptr;
  return temp;
}
inline ::skissm::E2eeAddress* AddGroupMembersMsg::_internal_mutable_group_address() {
  
  if (group_address_ == nullptr) {
    auto* p = CreateMaybeMessage<::skissm::E2eeAddress>(GetArenaForAllocation());
    group_address_ = p;
  }
  return group_address_;
}
inline ::skissm::E2eeAddress* AddGroupMembersMsg::mutable_group_address() {
  ::skissm::E2eeAddress* _msg = _internal_mutable_group_address();
  // @@protoc_insertion_point(field_mutable:skissm.AddGroupMembersMsg.group_address)
  return _msg;
}
inline void AddGroupMembersMsg::set_allocated_group_address(::skissm::E2eeAddress* group_address) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(group_address_);
  }
  if (group_address) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(group_address));
    if (message_arena != submessage_arena) {
      group_address = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, group_address, submessage_arena);
    }
    
  } else {
    
  }
  group_address_ = group_address;
  // @@protoc_insertion_point(field_set_allocated:skissm.AddGroupMembersMsg.group_address)
}

// repeated .skissm.GroupMember adding_members = 4;
inline int AddGroupMembersMsg::_internal_adding_members_size() const {
  return adding_members_.size();
}
inline int AddGroupMembersMsg::adding_members_size() const {
  return _internal_adding_members_size();
}
inline ::skissm::GroupMember* AddGroupMembersMsg::mutable_adding_members(int index) {
  // @@protoc_insertion_point(field_mutable:skissm.AddGroupMembersMsg.adding_members)
  return adding_members_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::skissm::GroupMember >*
AddGroupMembersMsg::mutable_adding_members() {
  // @@protoc_insertion_point(field_mutable_list:skissm.AddGroupMembersMsg.adding_members)
  return &adding_members_;
}
inline const ::skissm::GroupMember& AddGroupMembersMsg::_internal_adding_members(int index) const {
  return adding_members_.Get(index);
}
inline const ::skissm::GroupMember& AddGroupMembersMsg::adding_members(int index) const {
  // @@protoc_insertion_point(field_get:skissm.AddGroupMembersMsg.adding_members)
  return _internal_adding_members(index);
}
inline ::skissm::GroupMember* AddGroupMembersMsg::_internal_add_adding_members() {
  return adding_members_.Add();
}
inline ::skissm::GroupMember* AddGroupMembersMsg::add_adding_members() {
  ::skissm::GroupMember* _add = _internal_add_adding_members();
  // @@protoc_insertion_point(field_add:skissm.AddGroupMembersMsg.adding_members)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::skissm::GroupMember >&
AddGroupMembersMsg::adding_members() const {
  // @@protoc_insertion_point(field_list:skissm.AddGroupMembersMsg.adding_members)
  return adding_members_;
}

// repeated .skissm.GroupMember all_members = 5;
inline int AddGroupMembersMsg::_internal_all_members_size() const {
  return all_members_.size();
}
inline int AddGroupMembersMsg::all_members_size() const {
  return _internal_all_members_size();
}
inline ::skissm::GroupMember* AddGroupMembersMsg::mutable_all_members(int index) {
  // @@protoc_insertion_point(field_mutable:skissm.AddGroupMembersMsg.all_members)
  return all_members_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::skissm::GroupMember >*
AddGroupMembersMsg::mutable_all_members() {
  // @@protoc_insertion_point(field_mutable_list:skissm.AddGroupMembersMsg.all_members)
  return &all_members_;
}
inline const ::skissm::GroupMember& AddGroupMembersMsg::_internal_all_members(int index) const {
  return all_members_.Get(index);
}
inline const ::skissm::GroupMember& AddGroupMembersMsg::all_members(int index) const {
  // @@protoc_insertion_point(field_get:skissm.AddGroupMembersMsg.all_members)
  return _internal_all_members(index);
}
inline ::skissm::GroupMember* AddGroupMembersMsg::_internal_add_all_members() {
  return all_members_.Add();
}
inline ::skissm::GroupMember* AddGroupMembersMsg::add_all_members() {
  ::skissm::GroupMember* _add = _internal_add_all_members();
  // @@protoc_insertion_point(field_add:skissm.AddGroupMembersMsg.all_members)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::skissm::GroupMember >&
AddGroupMembersMsg::all_members() const {
  // @@protoc_insertion_point(field_list:skissm.AddGroupMembersMsg.all_members)
  return all_members_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace skissm

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_skissm_2fAddGroupMembersMsg_2eproto
