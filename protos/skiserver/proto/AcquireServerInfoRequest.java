// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skiserver/acquire_server_info_request.proto

package org.e2eelab.skiserver.proto;

public final class AcquireServerInfoRequest {
  private AcquireServerInfoRequest() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface acquire_server_info_requestOrBuilder extends
      // @@protoc_insertion_point(interface_extends:skiserver.acquire_server_info_request)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 client_t = 1;</code>
     * @return The clientT.
     */
    long getClientT();
  }
  /**
   * Protobuf type {@code skiserver.acquire_server_info_request}
   */
  public static final class acquire_server_info_request extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:skiserver.acquire_server_info_request)
      acquire_server_info_requestOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use acquire_server_info_request.newBuilder() to construct.
    private acquire_server_info_request(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private acquire_server_info_request() {
    }

    @java.lang.Override
    @SuppressWarnings({"unused"})
    protected java.lang.Object newInstance(
        UnusedPrivateParameter unused) {
      return new acquire_server_info_request();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private acquire_server_info_request(
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

              clientT_ = input.readInt64();
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
      return org.e2eelab.skiserver.proto.AcquireServerInfoRequest.internal_static_skiserver_acquire_server_info_request_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.e2eelab.skiserver.proto.AcquireServerInfoRequest.internal_static_skiserver_acquire_server_info_request_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request.class, org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request.Builder.class);
    }

    public static final int CLIENT_T_FIELD_NUMBER = 1;
    private long clientT_;
    /**
     * <code>int64 client_t = 1;</code>
     * @return The clientT.
     */
    @java.lang.Override
    public long getClientT() {
      return clientT_;
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
      if (clientT_ != 0L) {
        output.writeInt64(1, clientT_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (clientT_ != 0L) {
        size += com.google.protobuf.CodedOutputStream
          .computeInt64Size(1, clientT_);
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
      if (!(obj instanceof org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request)) {
        return super.equals(obj);
      }
      org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request other = (org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request) obj;

      if (getClientT()
          != other.getClientT()) return false;
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
      hash = (37 * hash) + CLIENT_T_FIELD_NUMBER;
      hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
          getClientT());
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parseFrom(
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
    public static Builder newBuilder(org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request prototype) {
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
     * Protobuf type {@code skiserver.acquire_server_info_request}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:skiserver.acquire_server_info_request)
        org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_requestOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return org.e2eelab.skiserver.proto.AcquireServerInfoRequest.internal_static_skiserver_acquire_server_info_request_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return org.e2eelab.skiserver.proto.AcquireServerInfoRequest.internal_static_skiserver_acquire_server_info_request_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request.class, org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request.Builder.class);
      }

      // Construct using org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request.newBuilder()
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
        clientT_ = 0L;

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return org.e2eelab.skiserver.proto.AcquireServerInfoRequest.internal_static_skiserver_acquire_server_info_request_descriptor;
      }

      @java.lang.Override
      public org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request getDefaultInstanceForType() {
        return org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request.getDefaultInstance();
      }

      @java.lang.Override
      public org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request build() {
        org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request buildPartial() {
        org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request result = new org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request(this);
        result.clientT_ = clientT_;
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
        if (other instanceof org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request) {
          return mergeFrom((org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request other) {
        if (other == org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request.getDefaultInstance()) return this;
        if (other.getClientT() != 0L) {
          setClientT(other.getClientT());
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
        org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private long clientT_ ;
      /**
       * <code>int64 client_t = 1;</code>
       * @return The clientT.
       */
      @java.lang.Override
      public long getClientT() {
        return clientT_;
      }
      /**
       * <code>int64 client_t = 1;</code>
       * @param value The clientT to set.
       * @return This builder for chaining.
       */
      public Builder setClientT(long value) {
        
        clientT_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>int64 client_t = 1;</code>
       * @return This builder for chaining.
       */
      public Builder clearClientT() {
        
        clientT_ = 0L;
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


      // @@protoc_insertion_point(builder_scope:skiserver.acquire_server_info_request)
    }

    // @@protoc_insertion_point(class_scope:skiserver.acquire_server_info_request)
    private static final org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request();
    }

    public static org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<acquire_server_info_request>
        PARSER = new com.google.protobuf.AbstractParser<acquire_server_info_request>() {
      @java.lang.Override
      public acquire_server_info_request parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new acquire_server_info_request(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<acquire_server_info_request> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<acquire_server_info_request> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public org.e2eelab.skiserver.proto.AcquireServerInfoRequest.acquire_server_info_request getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_skiserver_acquire_server_info_request_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_skiserver_acquire_server_info_request_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n+skiserver/acquire_server_info_request." +
      "proto\022\tskiserver\"/\n\033acquire_server_info_" +
      "request\022\020\n\010client_t\030\001 \001(\003B\035\n\033org.e2eelab" +
      ".skiserver.protob\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        });
    internal_static_skiserver_acquire_server_info_request_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_skiserver_acquire_server_info_request_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_skiserver_acquire_server_info_request_descriptor,
        new java.lang.String[] { "ClientT", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
