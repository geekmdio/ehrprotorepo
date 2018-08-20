/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.ehr.noteservice.SearchNotesResponse');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.ehr.note.Note');
goog.require('proto.ehr.noteservice.NoteServiceResponseStatus');


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
proto.ehr.noteservice.SearchNotesResponse = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.ehr.noteservice.SearchNotesResponse.repeatedFields_, null);
};
goog.inherits(proto.ehr.noteservice.SearchNotesResponse, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.ehr.noteservice.SearchNotesResponse.displayName = 'proto.ehr.noteservice.SearchNotesResponse';
}
/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.ehr.noteservice.SearchNotesResponse.repeatedFields_ = [2];



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
proto.ehr.noteservice.SearchNotesResponse.prototype.toObject = function(opt_includeInstance) {
  return proto.ehr.noteservice.SearchNotesResponse.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.ehr.noteservice.SearchNotesResponse} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ehr.noteservice.SearchNotesResponse.toObject = function(includeInstance, msg) {
  var f, obj = {
    status: (f = msg.getStatus()) && proto.ehr.noteservice.NoteServiceResponseStatus.toObject(includeInstance, f),
    notesList: jspb.Message.toObjectList(msg.getNotesList(),
    proto.ehr.note.Note.toObject, includeInstance)
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
 * @return {!proto.ehr.noteservice.SearchNotesResponse}
 */
proto.ehr.noteservice.SearchNotesResponse.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.ehr.noteservice.SearchNotesResponse;
  return proto.ehr.noteservice.SearchNotesResponse.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.ehr.noteservice.SearchNotesResponse} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.ehr.noteservice.SearchNotesResponse}
 */
proto.ehr.noteservice.SearchNotesResponse.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto.ehr.noteservice.NoteServiceResponseStatus;
      reader.readMessage(value,proto.ehr.noteservice.NoteServiceResponseStatus.deserializeBinaryFromReader);
      msg.setStatus(value);
      break;
    case 2:
      var value = new proto.ehr.note.Note;
      reader.readMessage(value,proto.ehr.note.Note.deserializeBinaryFromReader);
      msg.addNotes(value);
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
proto.ehr.noteservice.SearchNotesResponse.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.ehr.noteservice.SearchNotesResponse.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.ehr.noteservice.SearchNotesResponse} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.ehr.noteservice.SearchNotesResponse.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getStatus();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      proto.ehr.noteservice.NoteServiceResponseStatus.serializeBinaryToWriter
    );
  }
  f = message.getNotesList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      2,
      f,
      proto.ehr.note.Note.serializeBinaryToWriter
    );
  }
};


/**
 * optional NoteServiceResponseStatus status = 1;
 * @return {?proto.ehr.noteservice.NoteServiceResponseStatus}
 */
proto.ehr.noteservice.SearchNotesResponse.prototype.getStatus = function() {
  return /** @type{?proto.ehr.noteservice.NoteServiceResponseStatus} */ (
    jspb.Message.getWrapperField(this, proto.ehr.noteservice.NoteServiceResponseStatus, 1));
};


/** @param {?proto.ehr.noteservice.NoteServiceResponseStatus|undefined} value */
proto.ehr.noteservice.SearchNotesResponse.prototype.setStatus = function(value) {
  jspb.Message.setWrapperField(this, 1, value);
};


proto.ehr.noteservice.SearchNotesResponse.prototype.clearStatus = function() {
  this.setStatus(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.ehr.noteservice.SearchNotesResponse.prototype.hasStatus = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * repeated ehr.note.Note notes = 2;
 * @return {!Array<!proto.ehr.note.Note>}
 */
proto.ehr.noteservice.SearchNotesResponse.prototype.getNotesList = function() {
  return /** @type{!Array<!proto.ehr.note.Note>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.ehr.note.Note, 2));
};


/** @param {!Array<!proto.ehr.note.Note>} value */
proto.ehr.noteservice.SearchNotesResponse.prototype.setNotesList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 2, value);
};


/**
 * @param {!proto.ehr.note.Note=} opt_value
 * @param {number=} opt_index
 * @return {!proto.ehr.note.Note}
 */
proto.ehr.noteservice.SearchNotesResponse.prototype.addNotes = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 2, opt_value, proto.ehr.note.Note, opt_index);
};


proto.ehr.noteservice.SearchNotesResponse.prototype.clearNotesList = function() {
  this.setNotesList([]);
};


