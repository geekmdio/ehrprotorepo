/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.ehr.clinicalnote.Note');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.ehr.clinicalnote.NoteFragment');
goog.require('proto.google.protobuf.Timestamp');

goog.forwardDeclare('proto.ehr.clinicalnote.NoteType');

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
proto.ehr.clinicalnote.Note = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ehr.clinicalnote.Note.repeatedFields_, null);
};
goog.inherits(proto.ehr.clinicalnote.Note, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ehr.clinicalnote.Note.displayName = 'proto.ehr.clinicalnote.Note';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ehr.clinicalnote.Note.repeatedFields_ = [8];



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
proto.ehr.clinicalnote.Note.prototype.toObject = function(opt_includeInstance) {
  return proto.ehr.clinicalnote.Note.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ehr.clinicalnote.Note} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ehr.clinicalnote.Note.toObject = function(includeInstance, msg) {
  var f, obj = {
    id: jspb.Message.getFieldWithDefault(msg, 1, 0),
    dateCreated: (f = msg.getDateCreated()) && proto.google.protobuf.Timestamp.toObject(includeInstance, f),
    noteGuid: jspb.Message.getFieldWithDefault(msg, 3, ""),
    visitGuid: jspb.Message.getFieldWithDefault(msg, 4, ""),
    authorGuid: jspb.Message.getFieldWithDefault(msg, 5, ""),
    patientGuid: jspb.Message.getFieldWithDefault(msg, 6, ""),
    type: jspb.Message.getFieldWithDefault(msg, 7, 0),
    fragmentsList: jspb.Message.toObjectList(msg.getFragmentsList(),
    proto.ehr.clinicalnote.NoteFragment.toObject, includeInstance)
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
 * @return {!proto.ehr.clinicalnote.Note}
 */
proto.ehr.clinicalnote.Note.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ehr.clinicalnote.Note;
  return proto.ehr.clinicalnote.Note.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ehr.clinicalnote.Note} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ehr.clinicalnote.Note}
 */
proto.ehr.clinicalnote.Note.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setId(value);
      break;
    case 2:
      var value = new proto.google.protobuf.Timestamp;
      reader.readMessage(value,proto.google.protobuf.Timestamp.deserializeBinaryFromReader);
      msg.setDateCreated(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setNoteGuid(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.setVisitGuid(value);
      break;
    case 5:
      var value = /** @type {string} */ (reader.readString());
      msg.setAuthorGuid(value);
      break;
    case 6:
      var value = /** @type {string} */ (reader.readString());
      msg.setPatientGuid(value);
      break;
    case 7:
      var value = /** @type {!proto.ehr.clinicalnote.NoteType} */ (reader.readEnum());
      msg.setType(value);
      break;
    case 8:
      var value = new proto.ehr.clinicalnote.NoteFragment;
      reader.readMessage(value,proto.ehr.clinicalnote.NoteFragment.deserializeBinaryFromReader);
      msg.addFragments(value);
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
proto.ehr.clinicalnote.Note.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ehr.clinicalnote.Note.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ehr.clinicalnote.Note} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ehr.clinicalnote.Note.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getId();
  if (f !== 0) {
    writer.writeInt32(
      1,
      f
    );
  }
  f = message.getDateCreated();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto.google.protobuf.Timestamp.serializeBinaryToWriter
    );
  }
  f = message.getNoteGuid();
  if (f.length > 0) {
    writer.writeString(
      3,
      f
    );
  }
  f = message.getVisitGuid();
  if (f.length > 0) {
    writer.writeString(
      4,
      f
    );
  }
  f = message.getAuthorGuid();
  if (f.length > 0) {
    writer.writeString(
      5,
      f
    );
  }
  f = message.getPatientGuid();
  if (f.length > 0) {
    writer.writeString(
      6,
      f
    );
  }
  f = message.getType();
  if (f !== 0.0) {
    writer.writeEnum(
      7,
      f
    );
  }
  f = message.getFragmentsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      8,
      f,
      proto.ehr.clinicalnote.NoteFragment.serializeBinaryToWriter
    );
  }
};


/**
 * optional int32 id = 1;
 * @return {number}
 */
proto.ehr.clinicalnote.Note.prototype.getId = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {number} value */
proto.ehr.clinicalnote.Note.prototype.setId = function(value) {
  jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional google.protobuf.Timestamp date_created = 2;
 * @return {?proto.google.protobuf.Timestamp}
 */
proto.ehr.clinicalnote.Note.prototype.getDateCreated = function() {
  return /** @type{?proto.google.protobuf.Timestamp} */ (
    jspb.Message.getWrapperField(this, proto.google.protobuf.Timestamp, 2));
};


/** @param {?proto.google.protobuf.Timestamp|undefined} value */
proto.ehr.clinicalnote.Note.prototype.setDateCreated = function(value) {
  jspb.Message.setWrapperField(this, 2, value);
};


proto.ehr.clinicalnote.Note.prototype.clearDateCreated = function() {
  this.setDateCreated(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ehr.clinicalnote.Note.prototype.hasDateCreated = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional string note_guid = 3;
 * @return {string}
 */
proto.ehr.clinicalnote.Note.prototype.getNoteGuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/** @param {string} value */
proto.ehr.clinicalnote.Note.prototype.setNoteGuid = function(value) {
  jspb.Message.setProto3StringField(this, 3, value);
};


/**
 * optional string visit_guid = 4;
 * @return {string}
 */
proto.ehr.clinicalnote.Note.prototype.getVisitGuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/** @param {string} value */
proto.ehr.clinicalnote.Note.prototype.setVisitGuid = function(value) {
  jspb.Message.setProto3StringField(this, 4, value);
};


/**
 * optional string author_guid = 5;
 * @return {string}
 */
proto.ehr.clinicalnote.Note.prototype.getAuthorGuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 5, ""));
};


/** @param {string} value */
proto.ehr.clinicalnote.Note.prototype.setAuthorGuid = function(value) {
  jspb.Message.setProto3StringField(this, 5, value);
};


/**
 * optional string patient_guid = 6;
 * @return {string}
 */
proto.ehr.clinicalnote.Note.prototype.getPatientGuid = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 6, ""));
};


/** @param {string} value */
proto.ehr.clinicalnote.Note.prototype.setPatientGuid = function(value) {
  jspb.Message.setProto3StringField(this, 6, value);
};


/**
 * optional NoteType type = 7;
 * @return {!proto.ehr.clinicalnote.NoteType}
 */
proto.ehr.clinicalnote.Note.prototype.getType = function() {
  return /** @type {!proto.ehr.clinicalnote.NoteType} */ (jspb.Message.getFieldWithDefault(this, 7, 0));
};


/** @param {!proto.ehr.clinicalnote.NoteType} value */
proto.ehr.clinicalnote.Note.prototype.setType = function(value) {
  jspb.Message.setProto3EnumField(this, 7, value);
};


/**
 * repeated NoteFragment fragments = 8;
 * @return {!Array<!proto.ehr.clinicalnote.NoteFragment>}
 */
proto.ehr.clinicalnote.Note.prototype.getFragmentsList = function() {
  return /** @type{!Array<!proto.ehr.clinicalnote.NoteFragment>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.ehr.clinicalnote.NoteFragment, 8));
};


/** @param {!Array<!proto.ehr.clinicalnote.NoteFragment>} value */
proto.ehr.clinicalnote.Note.prototype.setFragmentsList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 8, value);
};


/**
 * @param {!proto.ehr.clinicalnote.NoteFragment=} opt_value
 * @param {number=} opt_index
 * @return {!proto.ehr.clinicalnote.NoteFragment}
 */
proto.ehr.clinicalnote.Note.prototype.addFragments = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 8, opt_value, proto.ehr.clinicalnote.NoteFragment, opt_index);
};


proto.ehr.clinicalnote.Note.prototype.clearFragmentsList = function() {
  this.setFragmentsList([]);
};


