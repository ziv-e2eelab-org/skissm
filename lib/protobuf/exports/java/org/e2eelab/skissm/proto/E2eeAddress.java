// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: e2ee_address.proto

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
      // @@protoc_insertion_point(interface_extends:org.e2eelab.skissm.proto.e2ee_address)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>bytes domain = 1;</code>
     * @return The domain.
     */
    com.google.protobuf.ByteString getDomain();

    /**
     * <code>bytes user_id = 2;</code>
     * @return The userId.
     */
    com.google.protobuf.ByteString getUserId();

    /**
     * <code>bytes device_id = 3;</code>
     * @return The deviceId.
     */
    com.google.protobuf.ByteString getDeviceId();

    /**
     * <code>bytes group_id = 4;</code>
     * @return The groupId.
     */
    com.google.protobuf.ByteString getGroupId();
  }
  /**
   * Protobuf type {@code org.e2eelab.skissm.proto.e2ee_address}
   */
  public static final class e2ee_address extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:org.e2eelab.skissm.proto.e2ee_address)
      e2ee_addressOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use e2ee_address.newBuilder() to construct.
    private e2ee_address(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private e2ee_address() {
      domain_ = com.google.protobuf.ByteString.EMPTY;
      userId_ = com.google.protobuf.ByteString.EMPTY;
      deviceId_ = com.google.protobuf.ByteString.EMPTY;
      groupId_ = com.google.protobuf.ByteString.EMPTY;
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

              domain_ = input.readBytes();
              break;
            }
            case 18: {

              userId_ = input.readBytes();
              break;
            }
            case 26: {

              deviceId_ = input.readBytes();
              break;
            }
            case 34: {

              groupId_ = input.readBytes();
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
      return org.e2eelab.skissm.proto.E2eeAddress.internal_static_org_e2eelab_skissm_proto_e2ee_address_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.e2eelab.skissm.proto.E2eeAddress.internal_static_org_e2eelab_skissm_proto_e2ee_address_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.class, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder.class);
    }

    public static final int DOMAIN_FIELD_NUMBER = 1;
    private com.google.protobuf.ByteString domain_;
    /**
     * <code>bytes domain = 1;</code>
     * @return The domain.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getDomain() {
      return domain_;
    }

    public static final int USER_ID_FIELD_NUMBER = 2;
    private com.google.protobuf.ByteString userId_;
    /**
     * <code>bytes user_id = 2;</code>
     * @return The userId.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getUserId() {
      return userId_;
    }

    public static final int DEVICE_ID_FIELD_NUMBER = 3;
    private com.google.protobuf.ByteString deviceId_;
    /**
     * <code>bytes device_id = 3;</code>
     * @return The deviceId.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getDeviceId() {
      return deviceId_;
    }

    public static final int GROUP_ID_FIELD_NUMBER = 4;
    private com.google.protobuf.ByteString groupId_;
    /**
     * <code>bytes group_id = 4;</code>
     * @return The groupId.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getGroupId() {
      return groupId_;
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
      if (!domain_.isEmpty()) {
        output.writeBytes(1, domain_);
      }
      if (!userId_.isEmpty()) {
        output.writeBytes(2, userId_);
      }
      if (!deviceId_.isEmpty()) {
        output.writeBytes(3, deviceId_);
      }
      if (!groupId_.isEmpty()) {
        output.writeBytes(4, groupId_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!domain_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(1, domain_);
      }
      if (!userId_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(2, userId_);
      }
      if (!deviceId_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(3, deviceId_);
      }
      if (!groupId_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(4, groupId_);
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
     * Protobuf type {@code org.e2eelab.skissm.proto.e2ee_address}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:org.e2eelab.skissm.proto.e2ee_address)
        org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return org.e2eelab.skissm.proto.E2eeAddress.internal_static_org_e2eelab_skissm_proto_e2ee_address_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return org.e2eelab.skissm.proto.E2eeAddress.internal_static_org_e2eelab_skissm_proto_e2ee_address_fieldAccessorTable
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
        domain_ = com.google.protobuf.ByteString.EMPTY;

        userId_ = com.google.protobuf.ByteString.EMPTY;

        deviceId_ = com.google.protobuf.ByteString.EMPTY;

        groupId_ = com.google.protobuf.ByteString.EMPTY;

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return org.e2eelab.skissm.proto.E2eeAddress.internal_static_org_e2eelab_skissm_proto_e2ee_address_descriptor;
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
        if (other.getDomain() != com.google.protobuf.ByteString.EMPTY) {
          setDomain(other.getDomain());
        }
        if (other.getUserId() != com.google.protobuf.ByteString.EMPTY) {
          setUserId(other.getUserId());
        }
        if (other.getDeviceId() != com.google.protobuf.ByteString.EMPTY) {
          setDeviceId(other.getDeviceId());
        }
        if (other.getGroupId() != com.google.protobuf.ByteString.EMPTY) {
          setGroupId(other.getGroupId());
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

      private com.google.protobuf.ByteString domain_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes domain = 1;</code>
       * @return The domain.
       */
      @java.lang.Override
      public com.google.protobuf.ByteString getDomain() {
        return domain_;
      }
      /**
       * <code>bytes domain = 1;</code>
       * @param value The domain to set.
       * @return This builder for chaining.
       */
      public Builder setDomain(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        domain_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes domain = 1;</code>
       * @return This builder for chaining.
       */
      public Builder clearDomain() {
        
        domain_ = getDefaultInstance().getDomain();
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString userId_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes user_id = 2;</code>
       * @return The userId.
       */
      @java.lang.Override
      public com.google.protobuf.ByteString getUserId() {
        return userId_;
      }
      /**
       * <code>bytes user_id = 2;</code>
       * @param value The userId to set.
       * @return This builder for chaining.
       */
      public Builder setUserId(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        userId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes user_id = 2;</code>
       * @return This builder for chaining.
       */
      public Builder clearUserId() {
        
        userId_ = getDefaultInstance().getUserId();
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString deviceId_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes device_id = 3;</code>
       * @return The deviceId.
       */
      @java.lang.Override
      public com.google.protobuf.ByteString getDeviceId() {
        return deviceId_;
      }
      /**
       * <code>bytes device_id = 3;</code>
       * @param value The deviceId to set.
       * @return This builder for chaining.
       */
      public Builder setDeviceId(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        deviceId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes device_id = 3;</code>
       * @return This builder for chaining.
       */
      public Builder clearDeviceId() {
        
        deviceId_ = getDefaultInstance().getDeviceId();
        onChanged();
        return this;
      }

      private com.google.protobuf.ByteString groupId_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes group_id = 4;</code>
       * @return The groupId.
       */
      @java.lang.Override
      public com.google.protobuf.ByteString getGroupId() {
        return groupId_;
      }
      /**
       * <code>bytes group_id = 4;</code>
       * @param value The groupId to set.
       * @return This builder for chaining.
       */
      public Builder setGroupId(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        groupId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes group_id = 4;</code>
       * @return This builder for chaining.
       */
      public Builder clearGroupId() {
        
        groupId_ = getDefaultInstance().getGroupId();
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


      // @@protoc_insertion_point(builder_scope:org.e2eelab.skissm.proto.e2ee_address)
    }

    // @@protoc_insertion_point(class_scope:org.e2eelab.skissm.proto.e2ee_address)
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
    internal_static_org_e2eelab_skissm_proto_e2ee_address_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_org_e2eelab_skissm_proto_e2ee_address_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\022e2ee_address.proto\022\030org.e2eelab.skissm" +
      ".proto\"T\n\014e2ee_address\022\016\n\006domain\030\001 \001(\014\022\017" +
      "\n\007user_id\030\002 \001(\014\022\021\n\tdevice_id\030\003 \001(\014\022\020\n\010gr" +
      "oup_id\030\004 \001(\014B\'\n\030org.e2eelab.skissm.proto" +
      "B\013E2eeAddressb\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        });
    internal_static_org_e2eelab_skissm_proto_e2ee_address_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_org_e2eelab_skissm_proto_e2ee_address_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_org_e2eelab_skissm_proto_e2ee_address_descriptor,
        new java.lang.String[] { "Domain", "UserId", "DeviceId", "GroupId", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}