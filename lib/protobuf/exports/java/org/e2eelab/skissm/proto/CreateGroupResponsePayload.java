// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: create_group_response_payload.proto

package org.e2eelab.skissm.proto;

public final class CreateGroupResponsePayload {
  private CreateGroupResponsePayload() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface create_group_response_payloadOrBuilder extends
      // @@protoc_insertion_point(interface_extends:org.e2eelab.skissm.proto.create_group_response_payload)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>uint32 code = 1;</code>
     * @return The code.
     */
    int getCode();

    /**
     * <code>string msg = 2;</code>
     * @return The msg.
     */
    java.lang.String getMsg();
    /**
     * <code>string msg = 2;</code>
     * @return The bytes for msg.
     */
    com.google.protobuf.ByteString
        getMsgBytes();

    /**
     * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
     * @return Whether the groupAddress field is set.
     */
    boolean hasGroupAddress();
    /**
     * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
     * @return The groupAddress.
     */
    org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getGroupAddress();
    /**
     * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
     */
    org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder getGroupAddressOrBuilder();
  }
  /**
   * Protobuf type {@code org.e2eelab.skissm.proto.create_group_response_payload}
   */
  public static final class create_group_response_payload extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:org.e2eelab.skissm.proto.create_group_response_payload)
      create_group_response_payloadOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use create_group_response_payload.newBuilder() to construct.
    private create_group_response_payload(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private create_group_response_payload() {
      msg_ = "";
    }

    @java.lang.Override
    @SuppressWarnings({"unused"})
    protected java.lang.Object newInstance(
        UnusedPrivateParameter unused) {
      return new create_group_response_payload();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private create_group_response_payload(
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

              code_ = input.readUInt32();
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              msg_ = s;
              break;
            }
            case 26: {
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder subBuilder = null;
              if (groupAddress_ != null) {
                subBuilder = groupAddress_.toBuilder();
              }
              groupAddress_ = input.readMessage(org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(groupAddress_);
                groupAddress_ = subBuilder.buildPartial();
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
      return org.e2eelab.skissm.proto.CreateGroupResponsePayload.internal_static_org_e2eelab_skissm_proto_create_group_response_payload_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.e2eelab.skissm.proto.CreateGroupResponsePayload.internal_static_org_e2eelab_skissm_proto_create_group_response_payload_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload.class, org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload.Builder.class);
    }

    public static final int CODE_FIELD_NUMBER = 1;
    private int code_;
    /**
     * <code>uint32 code = 1;</code>
     * @return The code.
     */
    @java.lang.Override
    public int getCode() {
      return code_;
    }

    public static final int MSG_FIELD_NUMBER = 2;
    private volatile java.lang.Object msg_;
    /**
     * <code>string msg = 2;</code>
     * @return The msg.
     */
    @java.lang.Override
    public java.lang.String getMsg() {
      java.lang.Object ref = msg_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        msg_ = s;
        return s;
      }
    }
    /**
     * <code>string msg = 2;</code>
     * @return The bytes for msg.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getMsgBytes() {
      java.lang.Object ref = msg_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        msg_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int GROUP_ADDRESS_FIELD_NUMBER = 3;
    private org.e2eelab.skissm.proto.E2eeAddress.e2ee_address groupAddress_;
    /**
     * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
     * @return Whether the groupAddress field is set.
     */
    @java.lang.Override
    public boolean hasGroupAddress() {
      return groupAddress_ != null;
    }
    /**
     * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
     * @return The groupAddress.
     */
    @java.lang.Override
    public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getGroupAddress() {
      return groupAddress_ == null ? org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.getDefaultInstance() : groupAddress_;
    }
    /**
     * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
     */
    @java.lang.Override
    public org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder getGroupAddressOrBuilder() {
      return getGroupAddress();
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
      if (code_ != 0) {
        output.writeUInt32(1, code_);
      }
      if (!getMsgBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, msg_);
      }
      if (groupAddress_ != null) {
        output.writeMessage(3, getGroupAddress());
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (code_ != 0) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(1, code_);
      }
      if (!getMsgBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, msg_);
      }
      if (groupAddress_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(3, getGroupAddress());
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
      if (!(obj instanceof org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload)) {
        return super.equals(obj);
      }
      org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload other = (org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload) obj;

      if (getCode()
          != other.getCode()) return false;
      if (!getMsg()
          .equals(other.getMsg())) return false;
      if (hasGroupAddress() != other.hasGroupAddress()) return false;
      if (hasGroupAddress()) {
        if (!getGroupAddress()
            .equals(other.getGroupAddress())) return false;
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
      hash = (37 * hash) + CODE_FIELD_NUMBER;
      hash = (53 * hash) + getCode();
      hash = (37 * hash) + MSG_FIELD_NUMBER;
      hash = (53 * hash) + getMsg().hashCode();
      if (hasGroupAddress()) {
        hash = (37 * hash) + GROUP_ADDRESS_FIELD_NUMBER;
        hash = (53 * hash) + getGroupAddress().hashCode();
      }
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parseFrom(
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
    public static Builder newBuilder(org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload prototype) {
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
     * Protobuf type {@code org.e2eelab.skissm.proto.create_group_response_payload}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:org.e2eelab.skissm.proto.create_group_response_payload)
        org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payloadOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return org.e2eelab.skissm.proto.CreateGroupResponsePayload.internal_static_org_e2eelab_skissm_proto_create_group_response_payload_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return org.e2eelab.skissm.proto.CreateGroupResponsePayload.internal_static_org_e2eelab_skissm_proto_create_group_response_payload_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload.class, org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload.Builder.class);
      }

      // Construct using org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload.newBuilder()
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
        code_ = 0;

        msg_ = "";

        if (groupAddressBuilder_ == null) {
          groupAddress_ = null;
        } else {
          groupAddress_ = null;
          groupAddressBuilder_ = null;
        }
        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return org.e2eelab.skissm.proto.CreateGroupResponsePayload.internal_static_org_e2eelab_skissm_proto_create_group_response_payload_descriptor;
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload getDefaultInstanceForType() {
        return org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload.getDefaultInstance();
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload build() {
        org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload buildPartial() {
        org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload result = new org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload(this);
        result.code_ = code_;
        result.msg_ = msg_;
        if (groupAddressBuilder_ == null) {
          result.groupAddress_ = groupAddress_;
        } else {
          result.groupAddress_ = groupAddressBuilder_.build();
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
        if (other instanceof org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload) {
          return mergeFrom((org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload other) {
        if (other == org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload.getDefaultInstance()) return this;
        if (other.getCode() != 0) {
          setCode(other.getCode());
        }
        if (!other.getMsg().isEmpty()) {
          msg_ = other.msg_;
          onChanged();
        }
        if (other.hasGroupAddress()) {
          mergeGroupAddress(other.getGroupAddress());
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
        org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private int code_ ;
      /**
       * <code>uint32 code = 1;</code>
       * @return The code.
       */
      @java.lang.Override
      public int getCode() {
        return code_;
      }
      /**
       * <code>uint32 code = 1;</code>
       * @param value The code to set.
       * @return This builder for chaining.
       */
      public Builder setCode(int value) {
        
        code_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>uint32 code = 1;</code>
       * @return This builder for chaining.
       */
      public Builder clearCode() {
        
        code_ = 0;
        onChanged();
        return this;
      }

      private java.lang.Object msg_ = "";
      /**
       * <code>string msg = 2;</code>
       * @return The msg.
       */
      public java.lang.String getMsg() {
        java.lang.Object ref = msg_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          msg_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string msg = 2;</code>
       * @return The bytes for msg.
       */
      public com.google.protobuf.ByteString
          getMsgBytes() {
        java.lang.Object ref = msg_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          msg_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string msg = 2;</code>
       * @param value The msg to set.
       * @return This builder for chaining.
       */
      public Builder setMsg(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        msg_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string msg = 2;</code>
       * @return This builder for chaining.
       */
      public Builder clearMsg() {
        
        msg_ = getDefaultInstance().getMsg();
        onChanged();
        return this;
      }
      /**
       * <code>string msg = 2;</code>
       * @param value The bytes for msg to set.
       * @return This builder for chaining.
       */
      public Builder setMsgBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        msg_ = value;
        onChanged();
        return this;
      }

      private org.e2eelab.skissm.proto.E2eeAddress.e2ee_address groupAddress_;
      private com.google.protobuf.SingleFieldBuilderV3<
          org.e2eelab.skissm.proto.E2eeAddress.e2ee_address, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder, org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder> groupAddressBuilder_;
      /**
       * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
       * @return Whether the groupAddress field is set.
       */
      public boolean hasGroupAddress() {
        return groupAddressBuilder_ != null || groupAddress_ != null;
      }
      /**
       * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
       * @return The groupAddress.
       */
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address getGroupAddress() {
        if (groupAddressBuilder_ == null) {
          return groupAddress_ == null ? org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.getDefaultInstance() : groupAddress_;
        } else {
          return groupAddressBuilder_.getMessage();
        }
      }
      /**
       * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
       */
      public Builder setGroupAddress(org.e2eelab.skissm.proto.E2eeAddress.e2ee_address value) {
        if (groupAddressBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          groupAddress_ = value;
          onChanged();
        } else {
          groupAddressBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
       */
      public Builder setGroupAddress(
          org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder builderForValue) {
        if (groupAddressBuilder_ == null) {
          groupAddress_ = builderForValue.build();
          onChanged();
        } else {
          groupAddressBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
       */
      public Builder mergeGroupAddress(org.e2eelab.skissm.proto.E2eeAddress.e2ee_address value) {
        if (groupAddressBuilder_ == null) {
          if (groupAddress_ != null) {
            groupAddress_ =
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.newBuilder(groupAddress_).mergeFrom(value).buildPartial();
          } else {
            groupAddress_ = value;
          }
          onChanged();
        } else {
          groupAddressBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
       */
      public Builder clearGroupAddress() {
        if (groupAddressBuilder_ == null) {
          groupAddress_ = null;
          onChanged();
        } else {
          groupAddress_ = null;
          groupAddressBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
       */
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder getGroupAddressBuilder() {
        
        onChanged();
        return getGroupAddressFieldBuilder().getBuilder();
      }
      /**
       * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
       */
      public org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder getGroupAddressOrBuilder() {
        if (groupAddressBuilder_ != null) {
          return groupAddressBuilder_.getMessageOrBuilder();
        } else {
          return groupAddress_ == null ?
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.getDefaultInstance() : groupAddress_;
        }
      }
      /**
       * <code>.org.e2eelab.skissm.proto.e2ee_address group_address = 3;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          org.e2eelab.skissm.proto.E2eeAddress.e2ee_address, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder, org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder> 
          getGroupAddressFieldBuilder() {
        if (groupAddressBuilder_ == null) {
          groupAddressBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              org.e2eelab.skissm.proto.E2eeAddress.e2ee_address, org.e2eelab.skissm.proto.E2eeAddress.e2ee_address.Builder, org.e2eelab.skissm.proto.E2eeAddress.e2ee_addressOrBuilder>(
                  getGroupAddress(),
                  getParentForChildren(),
                  isClean());
          groupAddress_ = null;
        }
        return groupAddressBuilder_;
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


      // @@protoc_insertion_point(builder_scope:org.e2eelab.skissm.proto.create_group_response_payload)
    }

    // @@protoc_insertion_point(class_scope:org.e2eelab.skissm.proto.create_group_response_payload)
    private static final org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload();
    }

    public static org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<create_group_response_payload>
        PARSER = new com.google.protobuf.AbstractParser<create_group_response_payload>() {
      @java.lang.Override
      public create_group_response_payload parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new create_group_response_payload(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<create_group_response_payload> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<create_group_response_payload> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public org.e2eelab.skissm.proto.CreateGroupResponsePayload.create_group_response_payload getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_org_e2eelab_skissm_proto_create_group_response_payload_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_org_e2eelab_skissm_proto_create_group_response_payload_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n#create_group_response_payload.proto\022\030o" +
      "rg.e2eelab.skissm.proto\032\022e2ee_address.pr" +
      "oto\"y\n\035create_group_response_payload\022\014\n\004" +
      "code\030\001 \001(\r\022\013\n\003msg\030\002 \001(\t\022=\n\rgroup_address" +
      "\030\003 \001(\0132&.org.e2eelab.skissm.proto.e2ee_a" +
      "ddressB6\n\030org.e2eelab.skissm.protoB\032Crea" +
      "teGroupResponsePayloadb\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          org.e2eelab.skissm.proto.E2eeAddress.getDescriptor(),
        });
    internal_static_org_e2eelab_skissm_proto_create_group_response_payload_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_org_e2eelab_skissm_proto_create_group_response_payload_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_org_e2eelab_skissm_proto_create_group_response_payload_descriptor,
        new java.lang.String[] { "Code", "Msg", "GroupAddress", });
    org.e2eelab.skissm.proto.E2eeAddress.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}