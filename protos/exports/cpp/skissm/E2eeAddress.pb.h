// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skissm/E2eeAddress.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_skissm_2fE2eeAddress_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_skissm_2fE2eeAddress_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_skissm_2fE2eeAddress_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_skissm_2fE2eeAddress_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_skissm_2fE2eeAddress_2eproto;
namespace skissm {
class E2eeAddress;
struct E2eeAddressDefaultTypeInternal;
extern E2eeAddressDefaultTypeInternal _E2eeAddress_default_instance_;
class PeerGroup;
struct PeerGroupDefaultTypeInternal;
extern PeerGroupDefaultTypeInternal _PeerGroup_default_instance_;
class PeerUser;
struct PeerUserDefaultTypeInternal;
extern PeerUserDefaultTypeInternal _PeerUser_default_instance_;
}  // namespace skissm
PROTOBUF_NAMESPACE_OPEN
template<> ::skissm::E2eeAddress* Arena::CreateMaybeMessage<::skissm::E2eeAddress>(Arena*);
template<> ::skissm::PeerGroup* Arena::CreateMaybeMessage<::skissm::PeerGroup>(Arena*);
template<> ::skissm::PeerUser* Arena::CreateMaybeMessage<::skissm::PeerUser>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace skissm {

// ===================================================================

class PeerUser final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:skissm.PeerUser) */ {
 public:
  inline PeerUser() : PeerUser(nullptr) {}
  ~PeerUser() override;
  explicit constexpr PeerUser(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PeerUser(const PeerUser& from);
  PeerUser(PeerUser&& from) noexcept
    : PeerUser() {
    *this = ::std::move(from);
  }

  inline PeerUser& operator=(const PeerUser& from) {
    CopyFrom(from);
    return *this;
  }
  inline PeerUser& operator=(PeerUser&& from) noexcept {
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
  static const PeerUser& default_instance() {
    return *internal_default_instance();
  }
  static inline const PeerUser* internal_default_instance() {
    return reinterpret_cast<const PeerUser*>(
               &_PeerUser_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PeerUser& a, PeerUser& b) {
    a.Swap(&b);
  }
  inline void Swap(PeerUser* other) {
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
  void UnsafeArenaSwap(PeerUser* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PeerUser* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PeerUser>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PeerUser& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const PeerUser& from);
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
  void InternalSwap(PeerUser* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "skissm.PeerUser";
  }
  protected:
  explicit PeerUser(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kUserIdFieldNumber = 2,
    kDeviceIdFieldNumber = 3,
  };
  // string user_id = 2;
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

  // string device_id = 3;
  void clear_device_id();
  const std::string& device_id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_device_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_device_id();
  PROTOBUF_NODISCARD std::string* release_device_id();
  void set_allocated_device_id(std::string* device_id);
  private:
  const std::string& _internal_device_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_device_id(const std::string& value);
  std::string* _internal_mutable_device_id();
  public:

  // @@protoc_insertion_point(class_scope:skissm.PeerUser)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr device_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_skissm_2fE2eeAddress_2eproto;
};
// -------------------------------------------------------------------

class PeerGroup final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:skissm.PeerGroup) */ {
 public:
  inline PeerGroup() : PeerGroup(nullptr) {}
  ~PeerGroup() override;
  explicit constexpr PeerGroup(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PeerGroup(const PeerGroup& from);
  PeerGroup(PeerGroup&& from) noexcept
    : PeerGroup() {
    *this = ::std::move(from);
  }

  inline PeerGroup& operator=(const PeerGroup& from) {
    CopyFrom(from);
    return *this;
  }
  inline PeerGroup& operator=(PeerGroup&& from) noexcept {
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
  static const PeerGroup& default_instance() {
    return *internal_default_instance();
  }
  static inline const PeerGroup* internal_default_instance() {
    return reinterpret_cast<const PeerGroup*>(
               &_PeerGroup_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PeerGroup& a, PeerGroup& b) {
    a.Swap(&b);
  }
  inline void Swap(PeerGroup* other) {
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
  void UnsafeArenaSwap(PeerGroup* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PeerGroup* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PeerGroup>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PeerGroup& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const PeerGroup& from);
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
  void InternalSwap(PeerGroup* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "skissm.PeerGroup";
  }
  protected:
  explicit PeerGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kGroupIdFieldNumber = 1,
  };
  // string group_id = 1;
  void clear_group_id();
  const std::string& group_id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_group_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_group_id();
  PROTOBUF_NODISCARD std::string* release_group_id();
  void set_allocated_group_id(std::string* group_id);
  private:
  const std::string& _internal_group_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_group_id(const std::string& value);
  std::string* _internal_mutable_group_id();
  public:

  // @@protoc_insertion_point(class_scope:skissm.PeerGroup)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr group_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_skissm_2fE2eeAddress_2eproto;
};
// -------------------------------------------------------------------

class E2eeAddress final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:skissm.E2eeAddress) */ {
 public:
  inline E2eeAddress() : E2eeAddress(nullptr) {}
  ~E2eeAddress() override;
  explicit constexpr E2eeAddress(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  E2eeAddress(const E2eeAddress& from);
  E2eeAddress(E2eeAddress&& from) noexcept
    : E2eeAddress() {
    *this = ::std::move(from);
  }

  inline E2eeAddress& operator=(const E2eeAddress& from) {
    CopyFrom(from);
    return *this;
  }
  inline E2eeAddress& operator=(E2eeAddress&& from) noexcept {
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
  static const E2eeAddress& default_instance() {
    return *internal_default_instance();
  }
  enum PeerCase {
    kUser = 2,
    kGroup = 3,
    PEER_NOT_SET = 0,
  };

  static inline const E2eeAddress* internal_default_instance() {
    return reinterpret_cast<const E2eeAddress*>(
               &_E2eeAddress_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(E2eeAddress& a, E2eeAddress& b) {
    a.Swap(&b);
  }
  inline void Swap(E2eeAddress* other) {
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
  void UnsafeArenaSwap(E2eeAddress* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  E2eeAddress* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<E2eeAddress>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const E2eeAddress& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const E2eeAddress& from);
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
  void InternalSwap(E2eeAddress* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "skissm.E2eeAddress";
  }
  protected:
  explicit E2eeAddress(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kDomainFieldNumber = 1,
    kUserFieldNumber = 2,
    kGroupFieldNumber = 3,
  };
  // string domain = 1;
  void clear_domain();
  const std::string& domain() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_domain(ArgT0&& arg0, ArgT... args);
  std::string* mutable_domain();
  PROTOBUF_NODISCARD std::string* release_domain();
  void set_allocated_domain(std::string* domain);
  private:
  const std::string& _internal_domain() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_domain(const std::string& value);
  std::string* _internal_mutable_domain();
  public:

  // .skissm.PeerUser user = 2;
  bool has_user() const;
  private:
  bool _internal_has_user() const;
  public:
  void clear_user();
  const ::skissm::PeerUser& user() const;
  PROTOBUF_NODISCARD ::skissm::PeerUser* release_user();
  ::skissm::PeerUser* mutable_user();
  void set_allocated_user(::skissm::PeerUser* user);
  private:
  const ::skissm::PeerUser& _internal_user() const;
  ::skissm::PeerUser* _internal_mutable_user();
  public:
  void unsafe_arena_set_allocated_user(
      ::skissm::PeerUser* user);
  ::skissm::PeerUser* unsafe_arena_release_user();

  // .skissm.PeerGroup group = 3;
  bool has_group() const;
  private:
  bool _internal_has_group() const;
  public:
  void clear_group();
  const ::skissm::PeerGroup& group() const;
  PROTOBUF_NODISCARD ::skissm::PeerGroup* release_group();
  ::skissm::PeerGroup* mutable_group();
  void set_allocated_group(::skissm::PeerGroup* group);
  private:
  const ::skissm::PeerGroup& _internal_group() const;
  ::skissm::PeerGroup* _internal_mutable_group();
  public:
  void unsafe_arena_set_allocated_group(
      ::skissm::PeerGroup* group);
  ::skissm::PeerGroup* unsafe_arena_release_group();

  void clear_peer();
  PeerCase peer_case() const;
  // @@protoc_insertion_point(class_scope:skissm.E2eeAddress)
 private:
  class _Internal;
  void set_has_user();
  void set_has_group();

  inline bool has_peer() const;
  inline void clear_has_peer();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr domain_;
  union PeerUnion {
    constexpr PeerUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::skissm::PeerUser* user_;
    ::skissm::PeerGroup* group_;
  } peer_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t _oneof_case_[1];

  friend struct ::TableStruct_skissm_2fE2eeAddress_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PeerUser

// string user_id = 2;
inline void PeerUser::clear_user_id() {
  user_id_.ClearToEmpty();
}
inline const std::string& PeerUser::user_id() const {
  // @@protoc_insertion_point(field_get:skissm.PeerUser.user_id)
  return _internal_user_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PeerUser::set_user_id(ArgT0&& arg0, ArgT... args) {
 
 user_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:skissm.PeerUser.user_id)
}
inline std::string* PeerUser::mutable_user_id() {
  std::string* _s = _internal_mutable_user_id();
  // @@protoc_insertion_point(field_mutable:skissm.PeerUser.user_id)
  return _s;
}
inline const std::string& PeerUser::_internal_user_id() const {
  return user_id_.Get();
}
inline void PeerUser::_internal_set_user_id(const std::string& value) {
  
  user_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PeerUser::_internal_mutable_user_id() {
  
  return user_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PeerUser::release_user_id() {
  // @@protoc_insertion_point(field_release:skissm.PeerUser.user_id)
  return user_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PeerUser::set_allocated_user_id(std::string* user_id) {
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
  // @@protoc_insertion_point(field_set_allocated:skissm.PeerUser.user_id)
}

// string device_id = 3;
inline void PeerUser::clear_device_id() {
  device_id_.ClearToEmpty();
}
inline const std::string& PeerUser::device_id() const {
  // @@protoc_insertion_point(field_get:skissm.PeerUser.device_id)
  return _internal_device_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PeerUser::set_device_id(ArgT0&& arg0, ArgT... args) {
 
 device_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:skissm.PeerUser.device_id)
}
inline std::string* PeerUser::mutable_device_id() {
  std::string* _s = _internal_mutable_device_id();
  // @@protoc_insertion_point(field_mutable:skissm.PeerUser.device_id)
  return _s;
}
inline const std::string& PeerUser::_internal_device_id() const {
  return device_id_.Get();
}
inline void PeerUser::_internal_set_device_id(const std::string& value) {
  
  device_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PeerUser::_internal_mutable_device_id() {
  
  return device_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PeerUser::release_device_id() {
  // @@protoc_insertion_point(field_release:skissm.PeerUser.device_id)
  return device_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PeerUser::set_allocated_device_id(std::string* device_id) {
  if (device_id != nullptr) {
    
  } else {
    
  }
  device_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), device_id,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (device_id_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    device_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:skissm.PeerUser.device_id)
}

// -------------------------------------------------------------------

// PeerGroup

// string group_id = 1;
inline void PeerGroup::clear_group_id() {
  group_id_.ClearToEmpty();
}
inline const std::string& PeerGroup::group_id() const {
  // @@protoc_insertion_point(field_get:skissm.PeerGroup.group_id)
  return _internal_group_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PeerGroup::set_group_id(ArgT0&& arg0, ArgT... args) {
 
 group_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:skissm.PeerGroup.group_id)
}
inline std::string* PeerGroup::mutable_group_id() {
  std::string* _s = _internal_mutable_group_id();
  // @@protoc_insertion_point(field_mutable:skissm.PeerGroup.group_id)
  return _s;
}
inline const std::string& PeerGroup::_internal_group_id() const {
  return group_id_.Get();
}
inline void PeerGroup::_internal_set_group_id(const std::string& value) {
  
  group_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PeerGroup::_internal_mutable_group_id() {
  
  return group_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PeerGroup::release_group_id() {
  // @@protoc_insertion_point(field_release:skissm.PeerGroup.group_id)
  return group_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PeerGroup::set_allocated_group_id(std::string* group_id) {
  if (group_id != nullptr) {
    
  } else {
    
  }
  group_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), group_id,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (group_id_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    group_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:skissm.PeerGroup.group_id)
}

// -------------------------------------------------------------------

// E2eeAddress

// string domain = 1;
inline void E2eeAddress::clear_domain() {
  domain_.ClearToEmpty();
}
inline const std::string& E2eeAddress::domain() const {
  // @@protoc_insertion_point(field_get:skissm.E2eeAddress.domain)
  return _internal_domain();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void E2eeAddress::set_domain(ArgT0&& arg0, ArgT... args) {
 
 domain_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:skissm.E2eeAddress.domain)
}
inline std::string* E2eeAddress::mutable_domain() {
  std::string* _s = _internal_mutable_domain();
  // @@protoc_insertion_point(field_mutable:skissm.E2eeAddress.domain)
  return _s;
}
inline const std::string& E2eeAddress::_internal_domain() const {
  return domain_.Get();
}
inline void E2eeAddress::_internal_set_domain(const std::string& value) {
  
  domain_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* E2eeAddress::_internal_mutable_domain() {
  
  return domain_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* E2eeAddress::release_domain() {
  // @@protoc_insertion_point(field_release:skissm.E2eeAddress.domain)
  return domain_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void E2eeAddress::set_allocated_domain(std::string* domain) {
  if (domain != nullptr) {
    
  } else {
    
  }
  domain_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), domain,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (domain_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    domain_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:skissm.E2eeAddress.domain)
}

// .skissm.PeerUser user = 2;
inline bool E2eeAddress::_internal_has_user() const {
  return peer_case() == kUser;
}
inline bool E2eeAddress::has_user() const {
  return _internal_has_user();
}
inline void E2eeAddress::set_has_user() {
  _oneof_case_[0] = kUser;
}
inline void E2eeAddress::clear_user() {
  if (_internal_has_user()) {
    if (GetArenaForAllocation() == nullptr) {
      delete peer_.user_;
    }
    clear_has_peer();
  }
}
inline ::skissm::PeerUser* E2eeAddress::release_user() {
  // @@protoc_insertion_point(field_release:skissm.E2eeAddress.user)
  if (_internal_has_user()) {
    clear_has_peer();
      ::skissm::PeerUser* temp = peer_.user_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    peer_.user_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::skissm::PeerUser& E2eeAddress::_internal_user() const {
  return _internal_has_user()
      ? *peer_.user_
      : reinterpret_cast< ::skissm::PeerUser&>(::skissm::_PeerUser_default_instance_);
}
inline const ::skissm::PeerUser& E2eeAddress::user() const {
  // @@protoc_insertion_point(field_get:skissm.E2eeAddress.user)
  return _internal_user();
}
inline ::skissm::PeerUser* E2eeAddress::unsafe_arena_release_user() {
  // @@protoc_insertion_point(field_unsafe_arena_release:skissm.E2eeAddress.user)
  if (_internal_has_user()) {
    clear_has_peer();
    ::skissm::PeerUser* temp = peer_.user_;
    peer_.user_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void E2eeAddress::unsafe_arena_set_allocated_user(::skissm::PeerUser* user) {
  clear_peer();
  if (user) {
    set_has_user();
    peer_.user_ = user;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:skissm.E2eeAddress.user)
}
inline ::skissm::PeerUser* E2eeAddress::_internal_mutable_user() {
  if (!_internal_has_user()) {
    clear_peer();
    set_has_user();
    peer_.user_ = CreateMaybeMessage< ::skissm::PeerUser >(GetArenaForAllocation());
  }
  return peer_.user_;
}
inline ::skissm::PeerUser* E2eeAddress::mutable_user() {
  ::skissm::PeerUser* _msg = _internal_mutable_user();
  // @@protoc_insertion_point(field_mutable:skissm.E2eeAddress.user)
  return _msg;
}

// .skissm.PeerGroup group = 3;
inline bool E2eeAddress::_internal_has_group() const {
  return peer_case() == kGroup;
}
inline bool E2eeAddress::has_group() const {
  return _internal_has_group();
}
inline void E2eeAddress::set_has_group() {
  _oneof_case_[0] = kGroup;
}
inline void E2eeAddress::clear_group() {
  if (_internal_has_group()) {
    if (GetArenaForAllocation() == nullptr) {
      delete peer_.group_;
    }
    clear_has_peer();
  }
}
inline ::skissm::PeerGroup* E2eeAddress::release_group() {
  // @@protoc_insertion_point(field_release:skissm.E2eeAddress.group)
  if (_internal_has_group()) {
    clear_has_peer();
      ::skissm::PeerGroup* temp = peer_.group_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    peer_.group_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::skissm::PeerGroup& E2eeAddress::_internal_group() const {
  return _internal_has_group()
      ? *peer_.group_
      : reinterpret_cast< ::skissm::PeerGroup&>(::skissm::_PeerGroup_default_instance_);
}
inline const ::skissm::PeerGroup& E2eeAddress::group() const {
  // @@protoc_insertion_point(field_get:skissm.E2eeAddress.group)
  return _internal_group();
}
inline ::skissm::PeerGroup* E2eeAddress::unsafe_arena_release_group() {
  // @@protoc_insertion_point(field_unsafe_arena_release:skissm.E2eeAddress.group)
  if (_internal_has_group()) {
    clear_has_peer();
    ::skissm::PeerGroup* temp = peer_.group_;
    peer_.group_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void E2eeAddress::unsafe_arena_set_allocated_group(::skissm::PeerGroup* group) {
  clear_peer();
  if (group) {
    set_has_group();
    peer_.group_ = group;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:skissm.E2eeAddress.group)
}
inline ::skissm::PeerGroup* E2eeAddress::_internal_mutable_group() {
  if (!_internal_has_group()) {
    clear_peer();
    set_has_group();
    peer_.group_ = CreateMaybeMessage< ::skissm::PeerGroup >(GetArenaForAllocation());
  }
  return peer_.group_;
}
inline ::skissm::PeerGroup* E2eeAddress::mutable_group() {
  ::skissm::PeerGroup* _msg = _internal_mutable_group();
  // @@protoc_insertion_point(field_mutable:skissm.E2eeAddress.group)
  return _msg;
}

inline bool E2eeAddress::has_peer() const {
  return peer_case() != PEER_NOT_SET;
}
inline void E2eeAddress::clear_has_peer() {
  _oneof_case_[0] = PEER_NOT_SET;
}
inline E2eeAddress::PeerCase E2eeAddress::peer_case() const {
  return E2eeAddress::PeerCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace skissm

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_skissm_2fE2eeAddress_2eproto
