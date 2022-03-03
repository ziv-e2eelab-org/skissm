// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skissm/signed_pre_key_pair.proto

package org.e2eelab.skissm.proto;

public final class SignedPreKeyPair {
  private SignedPreKeyPair() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface signed_pre_key_pairOrBuilder extends
      // @@protoc_insertion_point(interface_extends:skissm.signed_pre_key_pair)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>uint32 spk_id = 1;</code>
     * @return The spkId.
     */
    int getSpkId();

    /**
     * <code>.skissm.key_pair key_pair = 2;</code>
     * @return Whether the keyPair field is set.
     */
    boolean hasKeyPair();
    /**
     * <code>.skissm.key_pair key_pair = 2;</code>
     * @return The keyPair.
     */
    org.e2eelab.skissm.proto.KeyPair.key_pair getKeyPair();
    /**
     * <code>.skissm.key_pair key_pair = 2;</code>
     */
    org.e2eelab.skissm.proto.KeyPair.key_pairOrBuilder getKeyPairOrBuilder();

    /**
     * <code>bytes signature = 3;</code>
     * @return The signature.
     */
    com.google.protobuf.ByteString getSignature();

    /**
     * <code>int64 ttl = 4;</code>
     * @return The ttl.
     */
    long getTtl();
  }
  /**
   * Protobuf type {@code skissm.signed_pre_key_pair}
   */
  public static final class signed_pre_key_pair extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:skissm.signed_pre_key_pair)
      signed_pre_key_pairOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use signed_pre_key_pair.newBuilder() to construct.
    private signed_pre_key_pair(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private signed_pre_key_pair() {
      signature_ = com.google.protobuf.ByteString.EMPTY;
    }

    @java.lang.Override
    @SuppressWarnings({"unused"})
    protected java.lang.Object newInstance(
        UnusedPrivateParameter unused) {
      return new signed_pre_key_pair();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private signed_pre_key_pair(
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
            case 8: {

              spkId_ = input.readUInt32();
              break;
            }
            case 18: {
              org.e2eelab.skissm.proto.KeyPair.key_pair.Builder subBuilder = null;
              if (keyPair_ != null) {
                subBuilder = keyPair_.toBuilder();
              }
              keyPair_ = input.readMessage(org.e2eelab.skissm.proto.KeyPair.key_pair.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(keyPair_);
                keyPair_ = subBuilder.buildPartial();
              }

              break;
            }
            case 26: {

              signature_ = input.readBytes();
              break;
            }
            case 32: {

              ttl_ = input.readInt64();
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
      return org.e2eelab.skissm.proto.SignedPreKeyPair.internal_static_skissm_signed_pre_key_pair_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.e2eelab.skissm.proto.SignedPreKeyPair.internal_static_skissm_signed_pre_key_pair_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair.class, org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair.Builder.class);
    }

    public static final int SPK_ID_FIELD_NUMBER = 1;
    private int spkId_;
    /**
     * <code>uint32 spk_id = 1;</code>
     * @return The spkId.
     */
    @java.lang.Override
    public int getSpkId() {
      return spkId_;
    }

    public static final int KEY_PAIR_FIELD_NUMBER = 2;
    private org.e2eelab.skissm.proto.KeyPair.key_pair keyPair_;
    /**
     * <code>.skissm.key_pair key_pair = 2;</code>
     * @return Whether the keyPair field is set.
     */
    @java.lang.Override
    public boolean hasKeyPair() {
      return keyPair_ != null;
    }
    /**
     * <code>.skissm.key_pair key_pair = 2;</code>
     * @return The keyPair.
     */
    @java.lang.Override
    public org.e2eelab.skissm.proto.KeyPair.key_pair getKeyPair() {
      return keyPair_ == null ? org.e2eelab.skissm.proto.KeyPair.key_pair.getDefaultInstance() : keyPair_;
    }
    /**
     * <code>.skissm.key_pair key_pair = 2;</code>
     */
    @java.lang.Override
    public org.e2eelab.skissm.proto.KeyPair.key_pairOrBuilder getKeyPairOrBuilder() {
      return getKeyPair();
    }

    public static final int SIGNATURE_FIELD_NUMBER = 3;
    private com.google.protobuf.ByteString signature_;
    /**
     * <code>bytes signature = 3;</code>
     * @return The signature.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getSignature() {
      return signature_;
    }

    public static final int TTL_FIELD_NUMBER = 4;
    private long ttl_;
    /**
     * <code>int64 ttl = 4;</code>
     * @return The ttl.
     */
    @java.lang.Override
    public long getTtl() {
      return ttl_;
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
      if (spkId_ != 0) {
        output.writeUInt32(1, spkId_);
      }
      if (keyPair_ != null) {
        output.writeMessage(2, getKeyPair());
      }
      if (!signature_.isEmpty()) {
        output.writeBytes(3, signature_);
      }
      if (ttl_ != 0L) {
        output.writeInt64(4, ttl_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (spkId_ != 0) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(1, spkId_);
      }
      if (keyPair_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, getKeyPair());
      }
      if (!signature_.isEmpty()) {
        size += com.google.protobuf.CodedOutputStream
          .computeBytesSize(3, signature_);
      }
      if (ttl_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(4, ttl_);
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
      if (!(obj instanceof org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair)) {
        return super.equals(obj);
      }
      org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair other = (org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair) obj;

      if (getSpkId()
          != other.getSpkId()) return false;
      if (hasKeyPair() != other.hasKeyPair()) return false;
      if (hasKeyPair()) {
        if (!getKeyPair()
            .equals(other.getKeyPair())) return false;
      }
      if (!getSignature()
          .equals(other.getSignature())) return false;
      if (getTtl()
          != other.getTtl()) return false;
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
      hash = (37 * hash) + SPK_ID_FIELD_NUMBER;
      hash = (53 * hash) + getSpkId();
      if (hasKeyPair()) {
        hash = (37 * hash) + KEY_PAIR_FIELD_NUMBER;
        hash = (53 * hash) + getKeyPair().hashCode();
      }
      hash = (37 * hash) + SIGNATURE_FIELD_NUMBER;
      hash = (53 * hash) + getSignature().hashCode();
      hash = (37 * hash) + TTL_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getTtl());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parseFrom(
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
    public static Builder newBuilder(org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair prototype) {
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
     * Protobuf type {@code skissm.signed_pre_key_pair}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:skissm.signed_pre_key_pair)
        org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pairOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return org.e2eelab.skissm.proto.SignedPreKeyPair.internal_static_skissm_signed_pre_key_pair_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return org.e2eelab.skissm.proto.SignedPreKeyPair.internal_static_skissm_signed_pre_key_pair_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair.class, org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair.Builder.class);
      }

      // Construct using org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair.newBuilder()
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
        spkId_ = 0;

        if (keyPairBuilder_ == null) {
          keyPair_ = null;
        } else {
          keyPair_ = null;
          keyPairBuilder_ = null;
        }
        signature_ = com.google.protobuf.ByteString.EMPTY;

        ttl_ = 0L;

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return org.e2eelab.skissm.proto.SignedPreKeyPair.internal_static_skissm_signed_pre_key_pair_descriptor;
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair getDefaultInstanceForType() {
        return org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair.getDefaultInstance();
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair build() {
        org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair buildPartial() {
        org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair result = new org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair(this);
        result.spkId_ = spkId_;
        if (keyPairBuilder_ == null) {
          result.keyPair_ = keyPair_;
        } else {
          result.keyPair_ = keyPairBuilder_.build();
        }
        result.signature_ = signature_;
        result.ttl_ = ttl_;
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
        if (other instanceof org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair) {
          return mergeFrom((org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair other) {
        if (other == org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair.getDefaultInstance()) return this;
        if (other.getSpkId() != 0) {
          setSpkId(other.getSpkId());
        }
        if (other.hasKeyPair()) {
          mergeKeyPair(other.getKeyPair());
        }
        if (other.getSignature() != com.google.protobuf.ByteString.EMPTY) {
          setSignature(other.getSignature());
        }
        if (other.getTtl() != 0L) {
          setTtl(other.getTtl());
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
        org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private int spkId_ ;
      /**
       * <code>uint32 spk_id = 1;</code>
       * @return The spkId.
       */
      @java.lang.Override
      public int getSpkId() {
        return spkId_;
      }
      /**
       * <code>uint32 spk_id = 1;</code>
       * @param value The spkId to set.
       * @return This builder for chaining.
       */
      public Builder setSpkId(int value) {
        
        spkId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>uint32 spk_id = 1;</code>
       * @return This builder for chaining.
       */
      public Builder clearSpkId() {
        
        spkId_ = 0;
        onChanged();
        return this;
      }

      private org.e2eelab.skissm.proto.KeyPair.key_pair keyPair_;
      private com.google.protobuf.SingleFieldBuilderV3<
          org.e2eelab.skissm.proto.KeyPair.key_pair, org.e2eelab.skissm.proto.KeyPair.key_pair.Builder, org.e2eelab.skissm.proto.KeyPair.key_pairOrBuilder> keyPairBuilder_;
      /**
       * <code>.skissm.key_pair key_pair = 2;</code>
       * @return Whether the keyPair field is set.
       */
      public boolean hasKeyPair() {
        return keyPairBuilder_ != null || keyPair_ != null;
      }
      /**
       * <code>.skissm.key_pair key_pair = 2;</code>
       * @return The keyPair.
       */
      public org.e2eelab.skissm.proto.KeyPair.key_pair getKeyPair() {
        if (keyPairBuilder_ == null) {
          return keyPair_ == null ? org.e2eelab.skissm.proto.KeyPair.key_pair.getDefaultInstance() : keyPair_;
        } else {
          return keyPairBuilder_.getMessage();
        }
      }
      /**
       * <code>.skissm.key_pair key_pair = 2;</code>
       */
      public Builder setKeyPair(org.e2eelab.skissm.proto.KeyPair.key_pair value) {
        if (keyPairBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          keyPair_ = value;
          onChanged();
        } else {
          keyPairBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.skissm.key_pair key_pair = 2;</code>
       */
      public Builder setKeyPair(
          org.e2eelab.skissm.proto.KeyPair.key_pair.Builder builderForValue) {
        if (keyPairBuilder_ == null) {
          keyPair_ = builderForValue.build();
          onChanged();
        } else {
          keyPairBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.skissm.key_pair key_pair = 2;</code>
       */
      public Builder mergeKeyPair(org.e2eelab.skissm.proto.KeyPair.key_pair value) {
        if (keyPairBuilder_ == null) {
          if (keyPair_ != null) {
            keyPair_ =
              org.e2eelab.skissm.proto.KeyPair.key_pair.newBuilder(keyPair_).mergeFrom(value).buildPartial();
          } else {
            keyPair_ = value;
          }
          onChanged();
        } else {
          keyPairBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.skissm.key_pair key_pair = 2;</code>
       */
      public Builder clearKeyPair() {
        if (keyPairBuilder_ == null) {
          keyPair_ = null;
          onChanged();
        } else {
          keyPair_ = null;
          keyPairBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.skissm.key_pair key_pair = 2;</code>
       */
      public org.e2eelab.skissm.proto.KeyPair.key_pair.Builder getKeyPairBuilder() {
        
        onChanged();
        return getKeyPairFieldBuilder().getBuilder();
      }
      /**
       * <code>.skissm.key_pair key_pair = 2;</code>
       */
      public org.e2eelab.skissm.proto.KeyPair.key_pairOrBuilder getKeyPairOrBuilder() {
        if (keyPairBuilder_ != null) {
          return keyPairBuilder_.getMessageOrBuilder();
        } else {
          return keyPair_ == null ?
              org.e2eelab.skissm.proto.KeyPair.key_pair.getDefaultInstance() : keyPair_;
        }
      }
      /**
       * <code>.skissm.key_pair key_pair = 2;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          org.e2eelab.skissm.proto.KeyPair.key_pair, org.e2eelab.skissm.proto.KeyPair.key_pair.Builder, org.e2eelab.skissm.proto.KeyPair.key_pairOrBuilder> 
          getKeyPairFieldBuilder() {
        if (keyPairBuilder_ == null) {
          keyPairBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              org.e2eelab.skissm.proto.KeyPair.key_pair, org.e2eelab.skissm.proto.KeyPair.key_pair.Builder, org.e2eelab.skissm.proto.KeyPair.key_pairOrBuilder>(
                  getKeyPair(),
                  getParentForChildren(),
                  isClean());
          keyPair_ = null;
        }
        return keyPairBuilder_;
      }

      private com.google.protobuf.ByteString signature_ = com.google.protobuf.ByteString.EMPTY;
      /**
       * <code>bytes signature = 3;</code>
       * @return The signature.
       */
      @java.lang.Override
      public com.google.protobuf.ByteString getSignature() {
        return signature_;
      }
      /**
       * <code>bytes signature = 3;</code>
       * @param value The signature to set.
       * @return This builder for chaining.
       */
      public Builder setSignature(com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        signature_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>bytes signature = 3;</code>
       * @return This builder for chaining.
       */
      public Builder clearSignature() {
        
        signature_ = getDefaultInstance().getSignature();
        onChanged();
        return this;
      }

      private long ttl_ ;
      /**
       * <code>int64 ttl = 4;</code>
       * @return The ttl.
       */
      @java.lang.Override
      public long getTtl() {
        return ttl_;
      }
      /**
       * <code>int64 ttl = 4;</code>
       * @param value The ttl to set.
       * @return This builder for chaining.
       */
      public Builder setTtl(long value) {
        
        ttl_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 ttl = 4;</code>
       * @return This builder for chaining.
       */
      public Builder clearTtl() {
        
        ttl_ = 0L;
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


      // @@protoc_insertion_point(builder_scope:skissm.signed_pre_key_pair)
    }

    // @@protoc_insertion_point(class_scope:skissm.signed_pre_key_pair)
    private static final org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair();
    }

    public static org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<signed_pre_key_pair>
        PARSER = new com.google.protobuf.AbstractParser<signed_pre_key_pair>() {
      @java.lang.Override
      public signed_pre_key_pair parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new signed_pre_key_pair(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<signed_pre_key_pair> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<signed_pre_key_pair> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public org.e2eelab.skissm.proto.SignedPreKeyPair.signed_pre_key_pair getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_skissm_signed_pre_key_pair_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_skissm_signed_pre_key_pair_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n skissm/signed_pre_key_pair.proto\022\006skis" +
      "sm\032\025skissm/key_pair.proto\"i\n\023signed_pre_" +
      "key_pair\022\016\n\006spk_id\030\001 \001(\r\022\"\n\010key_pair\030\002 \001" +
      "(\0132\020.skissm.key_pair\022\021\n\tsignature\030\003 \001(\014\022" +
      "\013\n\003ttl\030\004 \001(\003B,\n\030org.e2eelab.skissm.proto" +
      "B\020SignedPreKeyPairb\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          org.e2eelab.skissm.proto.KeyPair.getDescriptor(),
        });
    internal_static_skissm_signed_pre_key_pair_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_skissm_signed_pre_key_pair_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_skissm_signed_pre_key_pair_descriptor,
        new java.lang.String[] { "SpkId", "KeyPair", "Signature", "Ttl", });
    org.e2eelab.skissm.proto.KeyPair.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}