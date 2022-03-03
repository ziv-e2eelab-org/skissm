// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skissm/publish_spk_request_payload.proto

package org.e2eelab.skissm.proto;

public final class PublishSpkRequestPayload {
  private PublishSpkRequestPayload() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface publish_spk_request_payloadOrBuilder extends
      // @@protoc_insertion_point(interface_extends:skissm.publish_spk_request_payload)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>.skissm.e2ee_address user_address = 1;</code>
     * @return Whether the userAddress field is set.
     */
    boolean hasUserAddress();
    /**
     * <code>.skissm.e2ee_address user_address = 1;</code>
     * @return The userAddress.
     */
    org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getUserAddress();
    /**
     * <code>.skissm.e2ee_address user_address = 1;</code>
     */
    org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder getUserAddressOrBuilder();

    /**
     * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
     * @return Whether the signedPreKeyPublic field is set.
     */
    boolean hasSignedPreKeyPublic();
    /**
     * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
     * @return The signedPreKeyPublic.
     */
    org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public getSignedPreKeyPublic();
    /**
     * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
     */
    org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_publicOrBuilder getSignedPreKeyPublicOrBuilder();
  }
  /**
   * Protobuf type {@code skissm.publish_spk_request_payload}
   */
  public static final class publish_spk_request_payload extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:skissm.publish_spk_request_payload)
      publish_spk_request_payloadOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use publish_spk_request_payload.newBuilder() to construct.
    private publish_spk_request_payload(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private publish_spk_request_payload() {
    }

    @java.lang.Override
    @SuppressWarnings({"unused"})
    protected java.lang.Object newInstance(
        UnusedPrivateParameter unused) {
      return new publish_spk_request_payload();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private publish_spk_request_payload(
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
              if (userAddress_ != null) {
                subBuilder = userAddress_.toBuilder();
              }
              userAddress_ = input.readMessage(org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(userAddress_);
                userAddress_ = subBuilder.buildPartial();
              }

              break;
            }
            case 18: {
              org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public.Builder subBuilder = null;
              if (signedPreKeyPublic_ != null) {
                subBuilder = signedPreKeyPublic_.toBuilder();
              }
              signedPreKeyPublic_ = input.readMessage(org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(signedPreKeyPublic_);
                signedPreKeyPublic_ = subBuilder.buildPartial();
              }

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
      return org.e2eelab.skissm.proto.PublishSpkRequestPayload.internal_static_skissm_publish_spk_request_payload_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.e2eelab.skissm.proto.PublishSpkRequestPayload.internal_static_skissm_publish_spk_request_payload_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload.class, org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload.Builder.class);
    }

    public static final int USER_ADDRESS_FIELD_NUMBER = 1;
    private org.e2eelab.skissm.proto.E2eeAddress.e2ee_address userAddress_;
    /**
     * <code>.skissm.e2ee_address user_address = 1;</code>
     * @return Whether the userAddress field is set.
     */
    @java.lang.Override
    public boolean hasUserAddress() {
      return userAddress_ != null;
    }
    /**
     * <code>.skissm.e2ee_address user_address = 1;</code>
     * @return The userAddress.
     */
    @java.lang.Override
    public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getUserAddress() {
      return userAddress_ == null ? org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.getDefaultInstance() : userAddress_;
    }
    /**
     * <code>.skissm.e2ee_address user_address = 1;</code>
     */
    @java.lang.Override
    public org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder getUserAddressOrBuilder() {
      return getUserAddress();
    }

    public static final int SIGNED_PRE_KEY_PUBLIC_FIELD_NUMBER = 2;
    private org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public signedPreKeyPublic_;
    /**
     * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
     * @return Whether the signedPreKeyPublic field is set.
     */
    @java.lang.Override
    public boolean hasSignedPreKeyPublic() {
      return signedPreKeyPublic_ != null;
    }
    /**
     * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
     * @return The signedPreKeyPublic.
     */
    @java.lang.Override
    public org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public getSignedPreKeyPublic() {
      return signedPreKeyPublic_ == null ? org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public.getDefaultInstance() : signedPreKeyPublic_;
    }
    /**
     * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
     */
    @java.lang.Override
    public org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_publicOrBuilder getSignedPreKeyPublicOrBuilder() {
      return getSignedPreKeyPublic();
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
      if (userAddress_ != null) {
        output.writeMessage(1, getUserAddress());
      }
      if (signedPreKeyPublic_ != null) {
        output.writeMessage(2, getSignedPreKeyPublic());
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (userAddress_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(1, getUserAddress());
      }
      if (signedPreKeyPublic_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, getSignedPreKeyPublic());
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
      if (!(obj instanceof org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload)) {
        return super.equals(obj);
      }
      org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload other = (org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload) obj;

      if (hasUserAddress() != other.hasUserAddress()) return false;
      if (hasUserAddress()) {
        if (!getUserAddress()
            .equals(other.getUserAddress())) return false;
      }
      if (hasSignedPreKeyPublic() != other.hasSignedPreKeyPublic()) return false;
      if (hasSignedPreKeyPublic()) {
        if (!getSignedPreKeyPublic()
            .equals(other.getSignedPreKeyPublic())) return false;
      }
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
      if (hasUserAddress()) {
        hash = (37 * hash) + USER_ADDRESS_FIELD_NUMBER;
        hash = (53 * hash) + getUserAddress().hashCode();
      }
      if (hasSignedPreKeyPublic()) {
        hash = (37 * hash) + SIGNED_PRE_KEY_PUBLIC_FIELD_NUMBER;
        hash = (53 * hash) + getSignedPreKeyPublic().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parseFrom(
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
    public static Builder newBuilder(org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload prototype) {
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
     * Protobuf type {@code skissm.publish_spk_request_payload}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:skissm.publish_spk_request_payload)
        org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payloadOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return org.e2eelab.skissm.proto.PublishSpkRequestPayload.internal_static_skissm_publish_spk_request_payload_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return org.e2eelab.skissm.proto.PublishSpkRequestPayload.internal_static_skissm_publish_spk_request_payload_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload.class, org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload.Builder.class);
      }

      // Construct using org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload.newBuilder()
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
        if (userAddressBuilder_ == null) {
          userAddress_ = null;
        } else {
          userAddress_ = null;
          userAddressBuilder_ = null;
        }
        if (signedPreKeyPublicBuilder_ == null) {
          signedPreKeyPublic_ = null;
        } else {
          signedPreKeyPublic_ = null;
          signedPreKeyPublicBuilder_ = null;
        }
        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return org.e2eelab.skissm.proto.PublishSpkRequestPayload.internal_static_skissm_publish_spk_request_payload_descriptor;
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload getDefaultInstanceForType() {
        return org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload.getDefaultInstance();
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload build() {
        org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload buildPartial() {
        org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload result = new org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload(this);
        if (userAddressBuilder_ == null) {
          result.userAddress_ = userAddress_;
        } else {
          result.userAddress_ = userAddressBuilder_.build();
        }
        if (signedPreKeyPublicBuilder_ == null) {
          result.signedPreKeyPublic_ = signedPreKeyPublic_;
        } else {
          result.signedPreKeyPublic_ = signedPreKeyPublicBuilder_.build();
        }
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
        if (other instanceof org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload) {
          return mergeFrom((org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload other) {
        if (other == org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload.getDefaultInstance()) return this;
        if (other.hasUserAddress()) {
          mergeUserAddress(other.getUserAddress());
        }
        if (other.hasSignedPreKeyPublic()) {
          mergeSignedPreKeyPublic(other.getSignedPreKeyPublic());
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
        org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private org.e2eelab.skissm.proto.E2eeAddress.e2ee_address userAddress_;
      private com.google.protobuf.SingleFieldBuilderV3<
          org.e2eelab.skissm.proto.E2eeAddress.e2ee_address, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder, org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder> userAddressBuilder_;
      /**
       * <code>.skissm.e2ee_address user_address = 1;</code>
       * @return Whether the userAddress field is set.
       */
      public boolean hasUserAddress() {
        return userAddressBuilder_ != null || userAddress_ != null;
      }
      /**
       * <code>.skissm.e2ee_address user_address = 1;</code>
       * @return The userAddress.
       */
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getUserAddress() {
        if (userAddressBuilder_ == null) {
          return userAddress_ == null ? org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.getDefaultInstance() : userAddress_;
        } else {
          return userAddressBuilder_.getMessage();
        }
      }
      /**
       * <code>.skissm.e2ee_address user_address = 1;</code>
       */
      public Builder setUserAddress(org.e2eelab.skissm.proto.E2eeAddress.e2ee_address value) {
        if (userAddressBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          userAddress_ = value;
          onChanged();
        } else {
          userAddressBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.skissm.e2ee_address user_address = 1;</code>
       */
      public Builder setUserAddress(
          org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder builderForValue) {
        if (userAddressBuilder_ == null) {
          userAddress_ = builderForValue.build();
          onChanged();
        } else {
          userAddressBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.skissm.e2ee_address user_address = 1;</code>
       */
      public Builder mergeUserAddress(org.e2eelab.skissm.proto.E2eeAddress.e2ee_address value) {
        if (userAddressBuilder_ == null) {
          if (userAddress_ != null) {
            userAddress_ =
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.newBuilder(userAddress_).mergeFrom(value).buildPartial();
          } else {
            userAddress_ = value;
          }
          onChanged();
        } else {
          userAddressBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.skissm.e2ee_address user_address = 1;</code>
       */
      public Builder clearUserAddress() {
        if (userAddressBuilder_ == null) {
          userAddress_ = null;
          onChanged();
        } else {
          userAddress_ = null;
          userAddressBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.skissm.e2ee_address user_address = 1;</code>
       */
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder getUserAddressBuilder() {
        
        onChanged();
        return getUserAddressFieldBuilder().getBuilder();
      }
      /**
       * <code>.skissm.e2ee_address user_address = 1;</code>
       */
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder getUserAddressOrBuilder() {
        if (userAddressBuilder_ != null) {
          return userAddressBuilder_.getMessageOrBuilder();
        } else {
          return userAddress_ == null ?
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.getDefaultInstance() : userAddress_;
        }
      }
      /**
       * <code>.skissm.e2ee_address user_address = 1;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          org.e2eelab.skissm.proto.E2eeAddress.e2ee_address, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder, org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder> 
          getUserAddressFieldBuilder() {
        if (userAddressBuilder_ == null) {
          userAddressBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder, org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder>(
                  getUserAddress(),
                  getParentForChildren(),
                  isClean());
          userAddress_ = null;
        }
        return userAddressBuilder_;
      }

      private org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public signedPreKeyPublic_;
      private com.google.protobuf.SingleFieldBuilderV3<
          org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public, org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public.Builder, org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_publicOrBuilder> signedPreKeyPublicBuilder_;
      /**
       * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
       * @return Whether the signedPreKeyPublic field is set.
       */
      public boolean hasSignedPreKeyPublic() {
        return signedPreKeyPublicBuilder_ != null || signedPreKeyPublic_ != null;
      }
      /**
       * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
       * @return The signedPreKeyPublic.
       */
      public org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public getSignedPreKeyPublic() {
        if (signedPreKeyPublicBuilder_ == null) {
          return signedPreKeyPublic_ == null ? org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public.getDefaultInstance() : signedPreKeyPublic_;
        } else {
          return signedPreKeyPublicBuilder_.getMessage();
        }
      }
      /**
       * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
       */
      public Builder setSignedPreKeyPublic(org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public value) {
        if (signedPreKeyPublicBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          signedPreKeyPublic_ = value;
          onChanged();
        } else {
          signedPreKeyPublicBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
       */
      public Builder setSignedPreKeyPublic(
          org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public.Builder builderForValue) {
        if (signedPreKeyPublicBuilder_ == null) {
          signedPreKeyPublic_ = builderForValue.build();
          onChanged();
        } else {
          signedPreKeyPublicBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
       */
      public Builder mergeSignedPreKeyPublic(org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public value) {
        if (signedPreKeyPublicBuilder_ == null) {
          if (signedPreKeyPublic_ != null) {
            signedPreKeyPublic_ =
              org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public.newBuilder(signedPreKeyPublic_).mergeFrom(value).buildPartial();
          } else {
            signedPreKeyPublic_ = value;
          }
          onChanged();
        } else {
          signedPreKeyPublicBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
       */
      public Builder clearSignedPreKeyPublic() {
        if (signedPreKeyPublicBuilder_ == null) {
          signedPreKeyPublic_ = null;
          onChanged();
        } else {
          signedPreKeyPublic_ = null;
          signedPreKeyPublicBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
       */
      public org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public.Builder getSignedPreKeyPublicBuilder() {
        
        onChanged();
        return getSignedPreKeyPublicFieldBuilder().getBuilder();
      }
      /**
       * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
       */
      public org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_publicOrBuilder getSignedPreKeyPublicOrBuilder() {
        if (signedPreKeyPublicBuilder_ != null) {
          return signedPreKeyPublicBuilder_.getMessageOrBuilder();
        } else {
          return signedPreKeyPublic_ == null ?
              org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public.getDefaultInstance() : signedPreKeyPublic_;
        }
      }
      /**
       * <code>.skissm.signed_pre_key_public signed_pre_key_public = 2;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public, org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public.Builder, org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_publicOrBuilder> 
          getSignedPreKeyPublicFieldBuilder() {
        if (signedPreKeyPublicBuilder_ == null) {
          signedPreKeyPublicBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public, org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_public.Builder, org.e2eelab.skissm.proto.SignedPreKeyPublic.signed_pre_key_publicOrBuilder>(
                  getSignedPreKeyPublic(),
                  getParentForChildren(),
                  isClean());
          signedPreKeyPublic_ = null;
        }
        return signedPreKeyPublicBuilder_;
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


      // @@protoc_insertion_point(builder_scope:skissm.publish_spk_request_payload)
    }

    // @@protoc_insertion_point(class_scope:skissm.publish_spk_request_payload)
    private static final org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload();
    }

    public static org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<publish_spk_request_payload>
        PARSER = new com.google.protobuf.AbstractParser<publish_spk_request_payload>() {
      @java.lang.Override
      public publish_spk_request_payload parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new publish_spk_request_payload(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<publish_spk_request_payload> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<publish_spk_request_payload> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public org.e2eelab.skissm.proto.PublishSpkRequestPayload.publish_spk_request_payload getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_skissm_publish_spk_request_payload_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_skissm_publish_spk_request_payload_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n(skissm/publish_spk_request_payload.pro" +
      "to\022\006skissm\032\031skissm/e2ee_address.proto\032\"s" +
      "kissm/signed_pre_key_public.proto\"\207\001\n\033pu" +
      "blish_spk_request_payload\022*\n\014user_addres" +
      "s\030\001 \001(\0132\024.skissm.e2ee_address\022<\n\025signed_" +
      "pre_key_public\030\002 \001(\0132\035.skissm.signed_pre" +
      "_key_publicB4\n\030org.e2eelab.skissm.protoB" +
      "\030PublishSpkRequestPayloadb\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          org.e2eelab.skissm.proto.E2eeAddress.getDescriptor(),
          org.e2eelab.skissm.proto.SignedPreKeyPublic.getDescriptor(),
        });
    internal_static_skissm_publish_spk_request_payload_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_skissm_publish_spk_request_payload_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_skissm_publish_spk_request_payload_descriptor,
        new java.lang.String[] { "UserAddress", "SignedPreKeyPublic", });
    org.e2eelab.skissm.proto.E2eeAddress.getDescriptor();
    org.e2eelab.skissm.proto.SignedPreKeyPublic.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}