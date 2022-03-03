// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skiserver/login_request.proto

package org.e2eelab.skiserver.proto;

public final class LoginRequest {
  private LoginRequest() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface login_requestOrBuilder extends
      // @@protoc_insertion_point(interface_extends:skiserver.login_request)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.skissm.e2ee_address address = 1;</code>
     * @return Whether the address field is set.
     */
    boolean hasAddress();
    /**
     * <code>.skissm.e2ee_address address = 1;</code>
     * @return The address.
     */
    org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getAddress();
    /**
     * <code>.skissm.e2ee_address address = 1;</code>
     */
    org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder getAddressOrBuilder();

    /**
     * <code>string password = 2;</code>
     * @return The password.
     */
    java.lang.String getPassword();
    /**
     * <code>string password = 2;</code>
     * @return The bytes for password.
     */
    com.google.protobuf.ByteString
        getPasswordBytes();
  }
  /**
   * Protobuf type {@code skiserver.login_request}
   */
  public static final class login_request extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:skiserver.login_request)
      login_requestOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use login_request.newBuilder() to construct.
    private login_request(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private login_request() {
      password_ = "";
    }

    @java.lang.Override
    @SuppressWarnings({"unused"})
    protected java.lang.Object newInstance(
        UnusedPrivateParameter unused) {
      return new login_request();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private login_request(
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
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder subBuilder = null;
              if (address_ != null) {
                subBuilder = address_.toBuilder();
              }
              address_ = input.readMessage(org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(address_);
                address_ = subBuilder.buildPartial();
              }

              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              password_ = s;
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
      return org.e2eelab.skiserver.proto.LoginRequest.internal_static_skiserver_login_request_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.e2eelab.skiserver.proto.LoginRequest.internal_static_skiserver_login_request_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.e2eelab.skiserver.proto.LoginRequest.login_request.class, org.e2eelab.skiserver.proto.LoginRequest.login_request.Builder.class);
    }

    public static final int ADDRESS_FIELD_NUMBER = 1;
    private org.e2eelab.skissm.proto.E2eeAddress.e2ee_address address_;
    /**
     * <code>.skissm.e2ee_address address = 1;</code>
     * @return Whether the address field is set.
     */
    @java.lang.Override
    public boolean hasAddress() {
      return address_ != null;
    }
    /**
     * <code>.skissm.e2ee_address address = 1;</code>
     * @return The address.
     */
    @java.lang.Override
    public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getAddress() {
      return address_ == null ? org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.getDefaultInstance() : address_;
    }
    /**
     * <code>.skissm.e2ee_address address = 1;</code>
     */
    @java.lang.Override
    public org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder getAddressOrBuilder() {
      return getAddress();
    }

    public static final int PASSWORD_FIELD_NUMBER = 2;
    private volatile java.lang.Object password_;
    /**
     * <code>string password = 2;</code>
     * @return The password.
     */
    @java.lang.Override
    public java.lang.String getPassword() {
      java.lang.Object ref = password_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        password_ = s;
        return s;
      }
    }
    /**
     * <code>string password = 2;</code>
     * @return The bytes for password.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getPasswordBytes() {
      java.lang.Object ref = password_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        password_ = b;
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
      if (address_ != null) {
        output.writeMessage(1, getAddress());
      }
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(password_)) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, password_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (address_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, getAddress());
      }
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(password_)) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, password_);
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
      if (!(obj instanceof org.e2eelab.skiserver.proto.LoginRequest.login_request)) {
        return super.equals(obj);
      }
      org.e2eelab.skiserver.proto.LoginRequest.login_request other = (org.e2eelab.skiserver.proto.LoginRequest.login_request) obj;

      if (hasAddress() != other.hasAddress()) return false;
      if (hasAddress()) {
        if (!getAddress()
            .equals(other.getAddress())) return false;
      }
      if (!getPassword()
          .equals(other.getPassword())) return false;
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
      if (hasAddress()) {
        hash = (37 * hash) + ADDRESS_FIELD_NUMBER;
        hash = (53 * hash) + getAddress().hashCode();
      }
      hash = (37 * hash) + PASSWORD_FIELD_NUMBER;
      hash = (53 * hash) + getPassword().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skiserver.proto.LoginRequest.login_request parseFrom(
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
    public static Builder newBuilder(org.e2eelab.skiserver.proto.LoginRequest.login_request prototype) {
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
     * Protobuf type {@code skiserver.login_request}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:skiserver.login_request)
        org.e2eelab.skiserver.proto.LoginRequest.login_requestOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return org.e2eelab.skiserver.proto.LoginRequest.internal_static_skiserver_login_request_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return org.e2eelab.skiserver.proto.LoginRequest.internal_static_skiserver_login_request_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                org.e2eelab.skiserver.proto.LoginRequest.login_request.class, org.e2eelab.skiserver.proto.LoginRequest.login_request.Builder.class);
      }

      // Construct using org.e2eelab.skiserver.proto.LoginRequest.login_request.newBuilder()
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
        if (addressBuilder_ == null) {
          address_ = null;
        } else {
          address_ = null;
          addressBuilder_ = null;
        }
        password_ = "";

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return org.e2eelab.skiserver.proto.LoginRequest.internal_static_skiserver_login_request_descriptor;
      }

      @java.lang.Override
      public org.e2eelab.skiserver.proto.LoginRequest.login_request getDefaultInstanceForType() {
        return org.e2eelab.skiserver.proto.LoginRequest.login_request.getDefaultInstance();
      }

      @java.lang.Override
      public org.e2eelab.skiserver.proto.LoginRequest.login_request build() {
        org.e2eelab.skiserver.proto.LoginRequest.login_request result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public org.e2eelab.skiserver.proto.LoginRequest.login_request buildPartial() {
        org.e2eelab.skiserver.proto.LoginRequest.login_request result = new org.e2eelab.skiserver.proto.LoginRequest.login_request(this);
        if (addressBuilder_ == null) {
          result.address_ = address_;
        } else {
          result.address_ = addressBuilder_.build();
        }
        result.password_ = password_;
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
        if (other instanceof org.e2eelab.skiserver.proto.LoginRequest.login_request) {
          return mergeFrom((org.e2eelab.skiserver.proto.LoginRequest.login_request)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(org.e2eelab.skiserver.proto.LoginRequest.login_request other) {
        if (other == org.e2eelab.skiserver.proto.LoginRequest.login_request.getDefaultInstance()) return this;
        if (other.hasAddress()) {
          mergeAddress(other.getAddress());
        }
        if (!other.getPassword().isEmpty()) {
          password_ = other.password_;
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
        org.e2eelab.skiserver.proto.LoginRequest.login_request parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (org.e2eelab.skiserver.proto.LoginRequest.login_request) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private org.e2eelab.skissm.proto.E2eeAddress.e2ee_address address_;
      private com.google.protobuf.SingleFieldBuilderV3<
          org.e2eelab.skissm.proto.E2eeAddress.e2ee_address, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder, org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder> addressBuilder_;
      /**
       * <code>.skissm.e2ee_address address = 1;</code>
       * @return Whether the address field is set.
       */
      public boolean hasAddress() {
        return addressBuilder_ != null || address_ != null;
      }
      /**
       * <code>.skissm.e2ee_address address = 1;</code>
       * @return The address.
       */
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getAddress() {
        if (addressBuilder_ == null) {
          return address_ == null ? org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.getDefaultInstance() : address_;
        } else {
          return addressBuilder_.getMessage();
        }
      }
      /**
       * <code>.skissm.e2ee_address address = 1;</code>
       */
      public Builder setAddress(org.e2eelab.skissm.proto.E2eeAddress.e2ee_address value) {
        if (addressBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          address_ = value;
          onChanged();
        } else {
          addressBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.skissm.e2ee_address address = 1;</code>
       */
      public Builder setAddress(
          org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder builderForValue) {
        if (addressBuilder_ == null) {
          address_ = builderForValue.build();
          onChanged();
        } else {
          addressBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.skissm.e2ee_address address = 1;</code>
       */
      public Builder mergeAddress(org.e2eelab.skissm.proto.E2eeAddress.e2ee_address value) {
        if (addressBuilder_ == null) {
          if (address_ != null) {
            address_ =
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.newBuilder(address_).mergeFrom(value).buildPartial();
          } else {
            address_ = value;
          }
          onChanged();
        } else {
          addressBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.skissm.e2ee_address address = 1;</code>
       */
      public Builder clearAddress() {
        if (addressBuilder_ == null) {
          address_ = null;
          onChanged();
        } else {
          address_ = null;
          addressBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.skissm.e2ee_address address = 1;</code>
       */
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder getAddressBuilder() {
        
        onChanged();
        return getAddressFieldBuilder().getBuilder();
      }
      /**
       * <code>.skissm.e2ee_address address = 1;</code>
       */
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder getAddressOrBuilder() {
        if (addressBuilder_ != null) {
          return addressBuilder_.getMessageOrBuilder();
        } else {
          return address_ == null ?
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.getDefaultInstance() : address_;
        }
      }
      /**
       * <code>.skissm.e2ee_address address = 1;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          org.e2eelab.skissm.proto.E2eeAddress.e2ee_address, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder, org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder> 
          getAddressFieldBuilder() {
        if (addressBuilder_ == null) {
          addressBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder, org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder>(
                  getAddress(),
                  getParentForChildren(),
                  isClean());
          address_ = null;
        }
        return addressBuilder_;
      }

      private java.lang.Object password_ = "";
      /**
       * <code>string password = 2;</code>
       * @return The password.
       */
      public java.lang.String getPassword() {
        java.lang.Object ref = password_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          password_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string password = 2;</code>
       * @return The bytes for password.
       */
      public com.google.protobuf.ByteString
          getPasswordBytes() {
        java.lang.Object ref = password_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          password_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string password = 2;</code>
       * @param value The password to set.
       * @return This builder for chaining.
       */
      public Builder setPassword(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        password_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string password = 2;</code>
       * @return This builder for chaining.
       */
      public Builder clearPassword() {
        
        password_ = getDefaultInstance().getPassword();
        onChanged();
        return this;
      }
      /**
       * <code>string password = 2;</code>
       * @param value The bytes for password to set.
       * @return This builder for chaining.
       */
      public Builder setPasswordBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        password_ = value;
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


      // @@protoc_insertion_point(builder_scope:skiserver.login_request)
    }

    // @@protoc_insertion_point(class_scope:skiserver.login_request)
    private static final org.e2eelab.skiserver.proto.LoginRequest.login_request DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new org.e2eelab.skiserver.proto.LoginRequest.login_request();
    }

    public static org.e2eelab.skiserver.proto.LoginRequest.login_request getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<login_request>
        PARSER = new com.google.protobuf.AbstractParser<login_request>() {
      @java.lang.Override
      public login_request parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new login_request(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<login_request> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<login_request> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public org.e2eelab.skiserver.proto.LoginRequest.login_request getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_skiserver_login_request_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_skiserver_login_request_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\035skiserver/login_request.proto\022\tskiserv" +
      "er\032\031skissm/e2ee_address.proto\"H\n\rlogin_r" +
      "equest\022%\n\007address\030\001 \001(\0132\024.skissm.e2ee_ad" +
      "dress\022\020\n\010password\030\002 \001(\tB+\n\033org.e2eelab.s" +
      "kiserver.protoB\014LoginRequestb\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          org.e2eelab.skissm.proto.E2eeAddress.getDescriptor(),
        });
    internal_static_skiserver_login_request_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_skiserver_login_request_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_skiserver_login_request_descriptor,
        new java.lang.String[] { "Address", "Password", });
    org.e2eelab.skissm.proto.E2eeAddress.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}