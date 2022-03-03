// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skissm/e2ee_address.proto

package org.e2eelab.skissm.proto;

public final class E2eeAddress {
  private E2eeAddress() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface e2ee_addressOrBuilder extends
      // @@protoc_insertion_point(interface_extends:skissm.e2ee_address)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string domain = 1;</code>
     * @return The domain.
     */
    java.lang.String getDomain();
    /**
     * <code>string domain = 1;</code>
     * @return The bytes for domain.
     */
    com.google.protobuf.ByteString
        getDomainBytes();

    /**
     * <code>string user_id = 2;</code>
     * @return The userId.
     */
    java.lang.String getUserId();
    /**
     * <code>string user_id = 2;</code>
     * @return The bytes for userId.
     */
    com.google.protobuf.ByteString
        getUserIdBytes();

    /**
     * <code>string device_id = 3;</code>
     * @return The deviceId.
     */
    java.lang.String getDeviceId();
    /**
     * <code>string device_id = 3;</code>
     * @return The bytes for deviceId.
     */
    com.google.protobuf.ByteString
        getDeviceIdBytes();

    /**
     * <code>string group_id = 4;</code>
     * @return The groupId.
     */
    java.lang.String getGroupId();
    /**
     * <code>string group_id = 4;</code>
     * @return The bytes for groupId.
     */
    com.google.protobuf.ByteString
        getGroupIdBytes();
  }
  /**
   * Protobuf type {@code skissm.e2ee_address}
   */
  public static final class e2ee_address extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:skissm.e2ee_address)
      e2ee_addressOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use e2ee_address.newBuilder() to construct.
    private e2ee_address(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private e2ee_address() {
      domain_ = "";
      userId_ = "";
      deviceId_ = "";
      groupId_ = "";
    }

    @java.lang.Override
    @SuppressWarnings({"unused"})
    protected java.lang.Object newInstance(
        UnusedPrivateParameter unused) {
      return new e2ee_address();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private e2ee_address(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              domain_ = s;
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              userId_ = s;
              break;
            }
            case 26: {
              java.lang.String s = input.readStringRequireUtf8();

              deviceId_ = s;
              break;
            }
            case 34: {
              java.lang.String s = input.readStringRequireUtf8();

              groupId_ = s;
              break;
            }
            default: {
              if (!parseUnknownField(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return org.e2eelab.skissm.proto.E2eeAddress.internal_static_skissm_e2ee_address_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.e2eelab.skissm.proto.E2eeAddress.internal_static_skissm_e2ee_address_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.class, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder.class);
    }

    public static final int DOMAIN_FIELD_NUMBER = 1;
    private volatile java.lang.Object domain_;
    /**
     * <code>string domain = 1;</code>
     * @return The domain.
     */
    @java.lang.Override
    public java.lang.String getDomain() {
      java.lang.Object ref = domain_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        domain_ = s;
        return s;
      }
    }
    /**
     * <code>string domain = 1;</code>
     * @return The bytes for domain.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getDomainBytes() {
      java.lang.Object ref = domain_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        domain_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int USER_ID_FIELD_NUMBER = 2;
    private volatile java.lang.Object userId_;
    /**
     * <code>string user_id = 2;</code>
     * @return The userId.
     */
    @java.lang.Override
    public java.lang.String getUserId() {
      java.lang.Object ref = userId_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        userId_ = s;
        return s;
      }
    }
    /**
     * <code>string user_id = 2;</code>
     * @return The bytes for userId.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getUserIdBytes() {
      java.lang.Object ref = userId_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        userId_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int DEVICE_ID_FIELD_NUMBER = 3;
    private volatile java.lang.Object deviceId_;
    /**
     * <code>string device_id = 3;</code>
     * @return The deviceId.
     */
    @java.lang.Override
    public java.lang.String getDeviceId() {
      java.lang.Object ref = deviceId_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        deviceId_ = s;
        return s;
      }
    }
    /**
     * <code>string device_id = 3;</code>
     * @return The bytes for deviceId.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getDeviceIdBytes() {
      java.lang.Object ref = deviceId_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        deviceId_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int GROUP_ID_FIELD_NUMBER = 4;
    private volatile java.lang.Object groupId_;
    /**
     * <code>string group_id = 4;</code>
     * @return The groupId.
     */
    @java.lang.Override
    public java.lang.String getGroupId() {
      java.lang.Object ref = groupId_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        groupId_ = s;
        return s;
      }
    }
    /**
     * <code>string group_id = 4;</code>
     * @return The bytes for groupId.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getGroupIdBytes() {
      java.lang.Object ref = groupId_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        groupId_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    private byte memoizedIsInitialized = -1;
    @java.lang.Override
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    @java.lang.Override
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(domain_)) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, domain_);
      }
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(userId_)) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, userId_);
      }
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(deviceId_)) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 3, deviceId_);
      }
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(groupId_)) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 4, groupId_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(domain_)) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, domain_);
      }
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(userId_)) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, userId_);
      }
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(deviceId_)) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(3, deviceId_);
      }
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(groupId_)) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(4, groupId_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof org.e2eelab.skissm.proto.E2eeAddress.e2ee_address)) {
        return super.equals(obj);
      }
      org.e2eelab.skissm.proto.E2eeAddress.e2ee_address other = (org.e2eelab.skissm.proto.E2eeAddress.e2ee_address) obj;

      if (!getDomain()
          .equals(other.getDomain())) return false;
      if (!getUserId()
          .equals(other.getUserId())) return false;
      if (!getDeviceId()
          .equals(other.getDeviceId())) return false;
      if (!getGroupId()
          .equals(other.getGroupId())) return false;
      if (!unknownFields.equals(other.unknownFields)) return false;
      return true;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + DOMAIN_FIELD_NUMBER;
      hash = (53 * hash) + getDomain().hashCode();
      hash = (37 * hash) + USER_ID_FIELD_NUMBER;
      hash = (53 * hash) + getUserId().hashCode();
      hash = (37 * hash) + DEVICE_ID_FIELD_NUMBER;
      hash = (53 * hash) + getDeviceId().hashCode();
      hash = (37 * hash) + GROUP_ID_FIELD_NUMBER;
      hash = (53 * hash) + getGroupId().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    @java.lang.Override
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(org.e2eelab.skissm.proto.E2eeAddress.e2ee_address prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    @java.lang.Override
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code skissm.e2ee_address}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:skissm.e2ee_address)
        org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return org.e2eelab.skissm.proto.E2eeAddress.internal_static_skissm_e2ee_address_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return org.e2eelab.skissm.proto.E2eeAddress.internal_static_skissm_e2ee_address_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.class, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder.class);
      }

      // Construct using org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      @java.lang.Override
      public Builder clear() {
        super.clear();
        domain_ = "";

        userId_ = "";

        deviceId_ = "";

        groupId_ = "";

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return org.e2eelab.skissm.proto.E2eeAddress.internal_static_skissm_e2ee_address_descriptor;
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getDefaultInstanceForType() {
        return org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.getDefaultInstance();
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address build() {
        org.e2eelab.skissm.proto.E2eeAddress.e2ee_address result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address buildPartial() {
        org.e2eelab.skissm.proto.E2eeAddress.e2ee_address result = new org.e2eelab.skissm.proto.E2eeAddress.e2ee_address(this);
        result.domain_ = domain_;
        result.userId_ = userId_;
        result.deviceId_ = deviceId_;
        result.groupId_ = groupId_;
        onBuilt();
        return result;
      }

      @java.lang.Override
      public Builder clone() {
        return super.clone();
      }
      @java.lang.Override
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return super.setField(field, value);
      }
      @java.lang.Override
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return super.clearField(field);
      }
      @java.lang.Override
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return super.clearOneof(oneof);
      }
      @java.lang.Override
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return super.setRepeatedField(field, index, value);
      }
      @java.lang.Override
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return super.addRepeatedField(field, value);
      }
      @java.lang.Override
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof org.e2eelab.skissm.proto.E2eeAddress.e2ee_address) {
          return mergeFrom((org.e2eelab.skissm.proto.E2eeAddress.e2ee_address)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(org.e2eelab.skissm.proto.E2eeAddress.e2ee_address other) {
        if (other == org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.getDefaultInstance()) return this;
        if (!other.getDomain().isEmpty()) {
          domain_ = other.domain_;
          onChanged();
        }
        if (!other.getUserId().isEmpty()) {
          userId_ = other.userId_;
          onChanged();
        }
        if (!other.getDeviceId().isEmpty()) {
          deviceId_ = other.deviceId_;
          onChanged();
        }
        if (!other.getGroupId().isEmpty()) {
          groupId_ = other.groupId_;
          onChanged();
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      @java.lang.Override
      public final boolean isInitialized() {
        return true;
      }

      @java.lang.Override
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        org.e2eelab.skissm.proto.E2eeAddress.e2ee_address parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (org.e2eelab.skissm.proto.E2eeAddress.e2ee_address) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object domain_ = "";
      /**
       * <code>string domain = 1;</code>
       * @return The domain.
       */
      public java.lang.String getDomain() {
        java.lang.Object ref = domain_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          domain_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string domain = 1;</code>
       * @return The bytes for domain.
       */
      public com.google.protobuf.ByteString
          getDomainBytes() {
        java.lang.Object ref = domain_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          domain_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string domain = 1;</code>
       * @param value The domain to set.
       * @return This builder for chaining.
       */
      public Builder setDomain(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        domain_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string domain = 1;</code>
       * @return This builder for chaining.
       */
      public Builder clearDomain() {
        
        domain_ = getDefaultInstance().getDomain();
        onChanged();
        return this;
      }
      /**
       * <code>string domain = 1;</code>
       * @param value The bytes for domain to set.
       * @return This builder for chaining.
       */
      public Builder setDomainBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        domain_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object userId_ = "";
      /**
       * <code>string user_id = 2;</code>
       * @return The userId.
       */
      public java.lang.String getUserId() {
        java.lang.Object ref = userId_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          userId_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string user_id = 2;</code>
       * @return The bytes for userId.
       */
      public com.google.protobuf.ByteString
          getUserIdBytes() {
        java.lang.Object ref = userId_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          userId_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string user_id = 2;</code>
       * @param value The userId to set.
       * @return This builder for chaining.
       */
      public Builder setUserId(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        userId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string user_id = 2;</code>
       * @return This builder for chaining.
       */
      public Builder clearUserId() {
        
        userId_ = getDefaultInstance().getUserId();
        onChanged();
        return this;
      }
      /**
       * <code>string user_id = 2;</code>
       * @param value The bytes for userId to set.
       * @return This builder for chaining.
       */
      public Builder setUserIdBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        userId_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object deviceId_ = "";
      /**
       * <code>string device_id = 3;</code>
       * @return The deviceId.
       */
      public java.lang.String getDeviceId() {
        java.lang.Object ref = deviceId_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          deviceId_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string device_id = 3;</code>
       * @return The bytes for deviceId.
       */
      public com.google.protobuf.ByteString
          getDeviceIdBytes() {
        java.lang.Object ref = deviceId_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          deviceId_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string device_id = 3;</code>
       * @param value The deviceId to set.
       * @return This builder for chaining.
       */
      public Builder setDeviceId(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        deviceId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string device_id = 3;</code>
       * @return This builder for chaining.
       */
      public Builder clearDeviceId() {
        
        deviceId_ = getDefaultInstance().getDeviceId();
        onChanged();
        return this;
      }
      /**
       * <code>string device_id = 3;</code>
       * @param value The bytes for deviceId to set.
       * @return This builder for chaining.
       */
      public Builder setDeviceIdBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        deviceId_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object groupId_ = "";
      /**
       * <code>string group_id = 4;</code>
       * @return The groupId.
       */
      public java.lang.String getGroupId() {
        java.lang.Object ref = groupId_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          groupId_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string group_id = 4;</code>
       * @return The bytes for groupId.
       */
      public com.google.protobuf.ByteString
          getGroupIdBytes() {
        java.lang.Object ref = groupId_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          groupId_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string group_id = 4;</code>
       * @param value The groupId to set.
       * @return This builder for chaining.
       */
      public Builder setGroupId(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        groupId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string group_id = 4;</code>
       * @return This builder for chaining.
       */
      public Builder clearGroupId() {
        
        groupId_ = getDefaultInstance().getGroupId();
        onChanged();
        return this;
      }
      /**
       * <code>string group_id = 4;</code>
       * @param value The bytes for groupId to set.
       * @return This builder for chaining.
       */
      public Builder setGroupIdBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        groupId_ = value;
        onChanged();
        return this;
      }
      @java.lang.Override
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFields(unknownFields);
      }

      @java.lang.Override
      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:skissm.e2ee_address)
    }

    // @@protoc_insertion_point(class_scope:skissm.e2ee_address)
    private static final org.e2eelab.skissm.proto.E2eeAddress.e2ee_address DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new org.e2eelab.skissm.proto.E2eeAddress.e2ee_address();
    }

    public static org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<e2ee_address>
        PARSER = new com.google.protobuf.AbstractParser<e2ee_address>() {
      @java.lang.Override
      public e2ee_address parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new e2ee_address(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<e2ee_address> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<e2ee_address> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_skissm_e2ee_address_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_skissm_e2ee_address_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\031skissm/e2ee_address.proto\022\006skissm\"T\n\014e" +
      "2ee_address\022\016\n\006domain\030\001 \001(\t\022\017\n\007user_id\030\002" +
      " \001(\t\022\021\n\tdevice_id\030\003 \001(\t\022\020\n\010group_id\030\004 \001(" +
      "\tB\'\n\030org.e2eelab.skissm.protoB\013E2eeAddre" +
      "ssb\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        });
    internal_static_skissm_e2ee_address_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_skissm_e2ee_address_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_skissm_e2ee_address_descriptor,
        new java.lang.String[] { "Domain", "UserId", "DeviceId", "GroupId", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}