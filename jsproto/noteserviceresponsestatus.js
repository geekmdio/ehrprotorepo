/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.ehr.noteservice.NoteServiceResponseStatus');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');

goog.forwardDeclare('proto.ehr.http.StatusCodes');

/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.ehr.noteservice.NoteServiceResponseStatus = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.ehr.noteservice.NoteServiceResponseStatus, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ehr.noteservice.NoteServiceResponseStatus.displayName = 'proto.ehr.noteservice.NoteServiceResponseStatus';
}


if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.ehr.noteservice.NoteServiceResponseStatus.prototype.toObject = function(opt_includeInstance) {
  return proto.ehr.noteservice.NoteServiceResponseStatus.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ehr.noteservice.NoteServiceResponseStatus} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ehr.noteservice.NoteServiceResponseStatus.toObject = function(includeInstance, msg) {
  var f, obj = {
    httpCode: jspb.Message.getFieldWithDefault(msg, 1, 0),
    message: jspb.Message.getFieldWithDefault(msg, 2, "")
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.ehr.noteservice.NoteServiceResponseStatus}
 */
proto.ehr.noteservice.NoteServiceResponseStatus.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ehr.noteservice.NoteServiceResponseStatus;
  return proto.ehr.noteservice.NoteServiceResponseStatus.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ehr.noteservice.NoteServiceResponseStatus} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ehr.noteservice.NoteServiceResponseStatus}
 */
proto.ehr.noteservice.NoteServiceResponseStatus.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {!proto.ehr.http.StatusCodes} */ (reader.readEnum());
      msg.setHttpCode(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setMessage(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.ehr.noteservice.NoteServiceResponseStatus.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ehr.noteservice.NoteServiceResponseStatus.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ehr.noteservice.NoteServiceResponseStatus} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ehr.noteservice.NoteServiceResponseStatus.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getHttpCode();
  if (f !== 0.0) {
    writer.writeEnum(
      1,
      f
    );
  }
  f = message.getMessage();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
};


/**
 * optional ehr.http.StatusCodes http_code = 1;
 * @return {!proto.ehr.http.StatusCodes}
 */
proto.ehr.noteservice.NoteServiceResponseStatus.prototype.getHttpCode = function() {
  return /** @type {!proto.ehr.http.StatusCodes} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {!proto.ehr.http.StatusCodes} value */
proto.ehr.noteservice.NoteServiceResponseStatus.prototype.setHttpCode = function(value) {
  jspb.Message.setProto3EnumField(this, 1, value);
};


/**
 * optional string message = 2;
 * @return {string}
 */
proto.ehr.noteservice.NoteServiceResponseStatus.prototype.getMessage = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.ehr.noteservice.NoteServiceResponseStatus.prototype.setMessage = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


