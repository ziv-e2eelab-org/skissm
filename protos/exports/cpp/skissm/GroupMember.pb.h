// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skissm/GroupMember.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_skissm_2fGroupMember_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_skissm_2fGroupMember_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_skissm_2fGroupMember_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_skissm_2fGroupMember_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_skissm_2fGroupMember_2eproto;
namespace skissm {
class GroupMember;
struct GroupMemberDefaultTypeInternal;
extern GroupMemberDefaultTypeInternal _GroupMember_default_instance_;
}  // namespace skissm
PROTOBUF_NAMESPACE_OPEN
template<> ::skissm::GroupMember* Arena::CreateMaybeMessage<::skissm::GroupMember>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace skissm {

enum GroupRole : int {
  MEMBER = 0,
  MANAGER = 1,
  GroupRole_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  GroupRole_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool GroupRole_IsValid(int value);
constexpr GroupRole GroupRole_MIN = MEMBER;
constexpr GroupRole GroupRole_MAX = MANAGER;
constexpr int GroupRole_ARRAYSIZE = GroupRole_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GroupRole_descriptor();
template<typename T>
inline const std::string& GroupRole_Name(T enum_t_value) {
  static_assert(::std::is_same<T, GroupRole>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function GroupRole_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    GroupRole_descriptor(), enum_t_value);
}
inline bool GroupRole_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, GroupRole* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<GroupRole>(
    GroupRole_descriptor(), name, value);
}
// ===================================================================

class GroupMember final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:skissm.GroupMember) */ {
 public:
  inline GroupMember() : GroupMember(nullptr) {}
  ~GroupMember() override;
  explicit constexpr GroupMember(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupMember(const GroupMember& from);
  GroupMember(GroupMember&& from) noexcept
    : GroupMember() {
    *this = ::std::move(from);
  }

  inline GroupMember& operator=(const GroupMember& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupMember& operator=(GroupMember&& from) noexcept {
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
  static const GroupMember& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupMember* internal_default_instance() {
    return reinterpret_cast<const GroupMember*>(
               &_GroupMember_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupMember& a, GroupMember& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupMember* other) {
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
  void UnsafeArenaSwap(GroupMember* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupMember* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupMember>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupMember& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const GroupMember& from);
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
  void InternalSwap(GroupMember* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "skissm.GroupMember";
  }
  protected:
  explicit GroupMember(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kUserIdFieldNumber = 1,
    kRoleFieldNumber = 2,
  };
  // string user_id = 1;
  void clear_user_id();
  const std::string& user_id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_user_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_user_id();
  PROTOBUF_NODISCARD std::string* release_user_id();
  void set_allocated_user_id(std::string* user_id);
  private:
  const std::string& _internal_user_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_user_id(const std::string& value);
  std::string* _internal_mutable_user_id();
  public:

  // .skissm.GroupRole role = 2;
  void clear_role();
  ::skissm::GroupRole role() const;
  void set_role(::skissm::GroupRole value);
  private:
  ::skissm::GroupRole _internal_role() const;
  void _internal_set_role(::skissm::GroupRole value);
  public:

  // @@protoc_insertion_point(class_scope:skissm.GroupMember)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_id_;
  int role_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_skissm_2fGroupMember_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupMember

// string user_id = 1;
inline void GroupMember::clear_user_id() {
  user_id_.ClearToEmpty();
}
inline const std::string& GroupMember::user_id() const {
  // @@protoc_insertion_point(field_get:skissm.GroupMember.user_id)
  return _internal_user_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupMember::set_user_id(ArgT0&& arg0, ArgT... args) {
 
 user_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:skissm.GroupMember.user_id)
}
inline std::string* GroupMember::mutable_user_id() {
  std::string* _s = _internal_mutable_user_id();
  // @@protoc_insertion_point(field_mutable:skissm.GroupMember.user_id)
  return _s;
}
inline const std::string& GroupMember::_internal_user_id() const {
  return user_id_.Get();
}
inline void GroupMember::_internal_set_user_id(const std::string& value) {
  
  user_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* GroupMember::_internal_mutable_user_id() {
  
  return user_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* GroupMember::release_user_id() {
  // @@protoc_insertion_point(field_release:skissm.GroupMember.user_id)
  return user_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void GroupMember::set_allocated_user_id(std::string* user_id) {
  if (user_id != nullptr) {
    
  } else {
    
  }
  user_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), user_id,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (user_id_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:skissm.GroupMember.user_id)
}

// .skissm.GroupRole role = 2;
inline void GroupMember::clear_role() {
  role_ = 0;
}
inline ::skissm::GroupRole GroupMember::_internal_role() const {
  return static_cast< ::skissm::GroupRole >(role_);
}
inline ::skissm::GroupRole GroupMember::role() const {
  // @@protoc_insertion_point(field_get:skissm.GroupMember.role)
  return _internal_role();
}
inline void GroupMember::_internal_set_role(::skissm::GroupRole value) {
  
  role_ = value;
}
inline void GroupMember::set_role(::skissm::GroupRole value) {
  _internal_set_role(value);
  // @@protoc_insertion_point(field_set:skissm.GroupMember.role)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace skissm

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::skissm::GroupRole> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::skissm::GroupRole>() {
  return ::skissm::GroupRole_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_skissm_2fGroupMember_2eproto
