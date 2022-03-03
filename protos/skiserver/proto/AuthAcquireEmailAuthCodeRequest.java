// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: skiserver/auth_acquire_email_auth_code_request.proto

package org.e2eelab.skiserver.proto;

public final class AuthAcquireEmailAuthCodeRequest {
  private AuthAcquireEmailAuthCodeRequest() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface auth_acquire_email_auth_code_requestOrBuilder extends
      // @@protoc_insertion_point(interface_extends:skiserver.auth_acquire_email_auth_code_request)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string email = 1;</code>
     * @return The email.
     */
    java.lang.String getEmail();
    /**
     * <code>string email = 1;</code>
     * @return The bytes for email.
     */
    com.google.protobuf.ByteString
        getEmailBytes();
  }
  /**
   * Protobuf type {@code skiserver.auth_acquire_email_auth_code_request}
   */
  public static final class auth_acquire_email_auth_code_request extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:skiserver.auth_acquire_email_auth_code_request)
      auth_acquire_email_auth_code_requestOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use auth_acquire_email_auth_code_request.newBuilder() to construct.
    private auth_acquire_email_auth_code_request(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private auth_acquire_email_auth_code_request() {
      email_ = "";
    }

    @java.lang.Override
    @SuppressWarnings({"unused"})
    protected java.lang.Object newInstance(
        UnusedPrivateParameter unused) {
      return new auth_acquire_email_auth_code_request();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private auth_acquire_email_auth_code_request(
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

              email_ = s;
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
      return org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.internal_static_skiserver_auth_acquire_email_auth_code_request_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.internal_static_skiserver_auth_acquire_email_auth_code_request_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request.class, org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request.Builder.class);
    }

    public static final int EMAIL_FIELD_NUMBER = 1;
    private volatile java.lang.Object email_;
    /**
     * <code>string email = 1;</code>
     * @return The email.
     */
    @java.lang.Override
    public java.lang.String getEmail() {
      java.lang.Object ref = email_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        email_ = s;
        return s;
      }
    }
    /**
     * <code>string email = 1;</code>
     * @return The bytes for email.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString
        getEmailBytes() {
      java.lang.Object ref = email_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        email_ = b;
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
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(email_)) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, email_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(email_)) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, email_);
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
      if (!(obj instanceof org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request)) {
        return super.equals(obj);
      }
      org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request other = (org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request) obj;

      if (!getEmail()
          .equals(other.getEmail())) return false;
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
      hash = (37 * hash) + EMAIL_FIELD_NUMBER;
      hash = (53 * hash) + getEmail().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parseFrom(
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
    public static Builder newBuilder(org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request prototype) {
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
     * Protobuf type {@code skiserver.auth_acquire_email_auth_code_request}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:skiserver.auth_acquire_email_auth_code_request)
        org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_requestOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.internal_static_skiserver_auth_acquire_email_auth_code_request_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.internal_static_skiserver_auth_acquire_email_auth_code_request_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request.class, org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request.Builder.class);
      }

      // Construct using org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request.newBuilder()
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
        email_ = "";

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.internal_static_skiserver_auth_acquire_email_auth_code_request_descriptor;
      }

      @java.lang.Override
      public org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request getDefaultInstanceForType() {
        return org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request.getDefaultInstance();
      }

      @java.lang.Override
      public org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request build() {
        org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request buildPartial() {
        org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request result = new org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request(this);
        result.email_ = email_;
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
        if (other instanceof org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request) {
          return mergeFrom((org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request other) {
        if (other == org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request.getDefaultInstance()) return this;
        if (!other.getEmail().isEmpty()) {
          email_ = other.email_;
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
        org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object email_ = "";
      /**
       * <code>string email = 1;</code>
       * @return The email.
       */
      public java.lang.String getEmail() {
        java.lang.Object ref = email_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          email_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string email = 1;</code>
       * @return The bytes for email.
       */
      public com.google.protobuf.ByteString
          getEmailBytes() {
        java.lang.Object ref = email_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          email_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string email = 1;</code>
       * @param value The email to set.
       * @return This builder for chaining.
       */
      public Builder setEmail(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        email_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string email = 1;</code>
       * @return This builder for chaining.
       */
      public Builder clearEmail() {
        
        email_ = getDefaultInstance().getEmail();
        onChanged();
        return this;
      }
      /**
       * <code>string email = 1;</code>
       * @param value The bytes for email to set.
       * @return This builder for chaining.
       */
      public Builder setEmailBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        email_ = value;
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


      // @@protoc_insertion_point(builder_scope:skiserver.auth_acquire_email_auth_code_request)
    }

    // @@protoc_insertion_point(class_scope:skiserver.auth_acquire_email_auth_code_request)
    private static final org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request();
    }

    public static org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<auth_acquire_email_auth_code_request>
        PARSER = new com.google.protobuf.AbstractParser<auth_acquire_email_auth_code_request>() {
      @java.lang.Override
      public auth_acquire_email_auth_code_request parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new auth_acquire_email_auth_code_request(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<auth_acquire_email_auth_code_request> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<auth_acquire_email_auth_code_request> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public org.e2eelab.skiserver.proto.AuthAcquireEmailAuthCodeRequest.auth_acquire_email_auth_code_request getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_skiserver_auth_acquire_email_auth_code_request_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_skiserver_auth_acquire_email_auth_code_request_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n4skiserver/auth_acquire_email_auth_code" +
      "_request.proto\022\tskiserver\"5\n$auth_acquir" +
      "e_email_auth_code_request\022\r\n\005email\030\001 \001(\t" +
      "B\035\n\033org.e2eelab.skiserver.protob\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        });
    internal_static_skiserver_auth_acquire_email_auth_code_request_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_skiserver_auth_acquire_email_auth_code_request_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_skiserver_auth_acquire_email_auth_code_request_descriptor,
        new java.lang.String[] { "Email", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
