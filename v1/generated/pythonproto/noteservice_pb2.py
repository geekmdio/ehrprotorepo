# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: noteservice.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import note_pb2 as note__pb2
import http_pb2 as http__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='noteservice.proto',
  package='ehr.noteservice',
  syntax='proto3',
  serialized_options=_b('Z\005ehrpb'),
  serialized_pb=_b('\n\x11noteservice.proto\x12\x0f\x65hr.noteservice\x1a\nnote.proto\x1a\nhttp.proto\"V\n\x19NoteServiceResponseStatus\x12(\n\thttp_code\x18\x01 \x01(\x0e\x32\x15.ehr.http.StatusCodes\x12\x0f\n\x07message\x18\x02 \x01(\t\"1\n\x11\x43reateNoteRequest\x12\x1c\n\x04note\x18\x01 \x01(\x0b\x32\x0e.ehr.note.Note\"n\n\x12\x43reateNoteResponse\x12:\n\x06status\x18\x01 \x01(\x0b\x32*.ehr.noteservice.NoteServiceResponseStatus\x12\x1c\n\x04note\x18\x02 \x01(\x0b\x32\x0e.ehr.note.Note\"\x1f\n\x11\x44\x65leteNoteRequest\x12\n\n\x02id\x18\x01 \x01(\x03\"P\n\x12\x44\x65leteNoteResponse\x12:\n\x06status\x18\x01 \x01(\x0b\x32*.ehr.noteservice.NoteServiceResponseStatus\"!\n\x13RetrieveNoteRequest\x12\n\n\x02id\x18\x01 \x01(\x03\"p\n\x14RetrieveNoteResponse\x12:\n\x06status\x18\x01 \x01(\x0b\x32*.ehr.noteservice.NoteServiceResponseStatus\x12\x1c\n\x04note\x18\x02 \x01(\x0b\x32\x0e.ehr.note.Note\"i\n\x12SearchNotesRequest\x12\x14\n\x0csearch_terms\x18\x01 \x01(\t\x12\x13\n\x0b\x61uthor_guid\x18\x02 \x01(\t\x12\x14\n\x0cpatient_guid\x18\x03 \x01(\t\x12\x12\n\nvisit_guid\x18\x04 \x01(\t\"p\n\x13SearchNotesResponse\x12:\n\x06status\x18\x01 \x01(\x0b\x32*.ehr.noteservice.NoteServiceResponseStatus\x12\x1d\n\x05notes\x18\x02 \x03(\x0b\x32\x0e.ehr.note.Note\"\x83\x01\n\x19SearchNoteFragmentRequest\x12\x14\n\x0csearch_terms\x18\x01 \x01(\t\x12\x13\n\x0b\x61uthor_guid\x18\x02 \x01(\t\x12\x14\n\x0cpatient_guid\x18\x03 \x01(\t\x12\x12\n\nvisit_guid\x18\x04 \x01(\t\x12\x11\n\tnote_guid\x18\x05 \x01(\t\"\x87\x01\n\x1aSearchNoteFragmentResponse\x12:\n\x06status\x18\x01 \x01(\x0b\x32*.ehr.noteservice.NoteServiceResponseStatus\x12-\n\rnote_fragment\x18\x02 \x03(\x0b\x32\x16.ehr.note.NoteFragment\"=\n\x11UpdateNoteRequest\x12\n\n\x02id\x18\x01 \x01(\x03\x12\x1c\n\x04note\x18\x02 \x01(\x0b\x32\x0e.ehr.note.Note\"P\n\x12UpdateNoteResponse\x12:\n\x06status\x18\x01 \x01(\x0b\x32*.ehr.noteservice.NoteServiceResponseStatus2\xc5\x04\n\x0bNoteService\x12W\n\nCreateNote\x12\".ehr.noteservice.CreateNoteRequest\x1a#.ehr.noteservice.CreateNoteResponse\"\x00\x12]\n\x0cRetrieveNote\x12$.ehr.noteservice.RetrieveNoteRequest\x1a%.ehr.noteservice.RetrieveNoteResponse\"\x00\x12W\n\nUpdateNote\x12\".ehr.noteservice.UpdateNoteRequest\x1a#.ehr.noteservice.UpdateNoteResponse\"\x00\x12W\n\nDeleteNote\x12\".ehr.noteservice.DeleteNoteRequest\x1a#.ehr.noteservice.DeleteNoteResponse\"\x00\x12Z\n\x0bSearchNotes\x12#.ehr.noteservice.SearchNotesRequest\x1a$.ehr.noteservice.SearchNotesResponse\"\x00\x12p\n\x13SearchNoteFragments\x12*.ehr.noteservice.SearchNoteFragmentRequest\x1a+.ehr.noteservice.SearchNoteFragmentResponse\"\x00\x42\x07Z\x05\x65hrpbb\x06proto3')
  ,
  dependencies=[note__pb2.DESCRIPTOR,http__pb2.DESCRIPTOR,])




_NOTESERVICERESPONSESTATUS = _descriptor.Descriptor(
  name='NoteServiceResponseStatus',
  full_name='ehr.noteservice.NoteServiceResponseStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='http_code', full_name='ehr.noteservice.NoteServiceResponseStatus.http_code', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='message', full_name='ehr.noteservice.NoteServiceResponseStatus.message', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=62,
  serialized_end=148,
)


_CREATENOTEREQUEST = _descriptor.Descriptor(
  name='CreateNoteRequest',
  full_name='ehr.noteservice.CreateNoteRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='note', full_name='ehr.noteservice.CreateNoteRequest.note', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=150,
  serialized_end=199,
)


_CREATENOTERESPONSE = _descriptor.Descriptor(
  name='CreateNoteResponse',
  full_name='ehr.noteservice.CreateNoteResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='ehr.noteservice.CreateNoteResponse.status', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='note', full_name='ehr.noteservice.CreateNoteResponse.note', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=201,
  serialized_end=311,
)


_DELETENOTEREQUEST = _descriptor.Descriptor(
  name='DeleteNoteRequest',
  full_name='ehr.noteservice.DeleteNoteRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ehr.noteservice.DeleteNoteRequest.id', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=313,
  serialized_end=344,
)


_DELETENOTERESPONSE = _descriptor.Descriptor(
  name='DeleteNoteResponse',
  full_name='ehr.noteservice.DeleteNoteResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='ehr.noteservice.DeleteNoteResponse.status', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=346,
  serialized_end=426,
)


_RETRIEVENOTEREQUEST = _descriptor.Descriptor(
  name='RetrieveNoteRequest',
  full_name='ehr.noteservice.RetrieveNoteRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ehr.noteservice.RetrieveNoteRequest.id', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=428,
  serialized_end=461,
)


_RETRIEVENOTERESPONSE = _descriptor.Descriptor(
  name='RetrieveNoteResponse',
  full_name='ehr.noteservice.RetrieveNoteResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='ehr.noteservice.RetrieveNoteResponse.status', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='note', full_name='ehr.noteservice.RetrieveNoteResponse.note', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=463,
  serialized_end=575,
)


_SEARCHNOTESREQUEST = _descriptor.Descriptor(
  name='SearchNotesRequest',
  full_name='ehr.noteservice.SearchNotesRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='search_terms', full_name='ehr.noteservice.SearchNotesRequest.search_terms', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='author_guid', full_name='ehr.noteservice.SearchNotesRequest.author_guid', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='patient_guid', full_name='ehr.noteservice.SearchNotesRequest.patient_guid', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='visit_guid', full_name='ehr.noteservice.SearchNotesRequest.visit_guid', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=577,
  serialized_end=682,
)


_SEARCHNOTESRESPONSE = _descriptor.Descriptor(
  name='SearchNotesResponse',
  full_name='ehr.noteservice.SearchNotesResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='ehr.noteservice.SearchNotesResponse.status', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='notes', full_name='ehr.noteservice.SearchNotesResponse.notes', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=684,
  serialized_end=796,
)


_SEARCHNOTEFRAGMENTREQUEST = _descriptor.Descriptor(
  name='SearchNoteFragmentRequest',
  full_name='ehr.noteservice.SearchNoteFragmentRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='search_terms', full_name='ehr.noteservice.SearchNoteFragmentRequest.search_terms', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='author_guid', full_name='ehr.noteservice.SearchNoteFragmentRequest.author_guid', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='patient_guid', full_name='ehr.noteservice.SearchNoteFragmentRequest.patient_guid', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='visit_guid', full_name='ehr.noteservice.SearchNoteFragmentRequest.visit_guid', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='note_guid', full_name='ehr.noteservice.SearchNoteFragmentRequest.note_guid', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=799,
  serialized_end=930,
)


_SEARCHNOTEFRAGMENTRESPONSE = _descriptor.Descriptor(
  name='SearchNoteFragmentResponse',
  full_name='ehr.noteservice.SearchNoteFragmentResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='ehr.noteservice.SearchNoteFragmentResponse.status', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='note_fragment', full_name='ehr.noteservice.SearchNoteFragmentResponse.note_fragment', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=933,
  serialized_end=1068,
)


_UPDATENOTEREQUEST = _descriptor.Descriptor(
  name='UpdateNoteRequest',
  full_name='ehr.noteservice.UpdateNoteRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='ehr.noteservice.UpdateNoteRequest.id', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='note', full_name='ehr.noteservice.UpdateNoteRequest.note', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1070,
  serialized_end=1131,
)


_UPDATENOTERESPONSE = _descriptor.Descriptor(
  name='UpdateNoteResponse',
  full_name='ehr.noteservice.UpdateNoteResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='ehr.noteservice.UpdateNoteResponse.status', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1133,
  serialized_end=1213,
)

_NOTESERVICERESPONSESTATUS.fields_by_name['http_code'].enum_type = http__pb2._STATUSCODES
_CREATENOTEREQUEST.fields_by_name['note'].message_type = note__pb2._NOTE
_CREATENOTERESPONSE.fields_by_name['status'].message_type = _NOTESERVICERESPONSESTATUS
_CREATENOTERESPONSE.fields_by_name['note'].message_type = note__pb2._NOTE
_DELETENOTERESPONSE.fields_by_name['status'].message_type = _NOTESERVICERESPONSESTATUS
_RETRIEVENOTERESPONSE.fields_by_name['status'].message_type = _NOTESERVICERESPONSESTATUS
_RETRIEVENOTERESPONSE.fields_by_name['note'].message_type = note__pb2._NOTE
_SEARCHNOTESRESPONSE.fields_by_name['status'].message_type = _NOTESERVICERESPONSESTATUS
_SEARCHNOTESRESPONSE.fields_by_name['notes'].message_type = note__pb2._NOTE
_SEARCHNOTEFRAGMENTRESPONSE.fields_by_name['status'].message_type = _NOTESERVICERESPONSESTATUS
_SEARCHNOTEFRAGMENTRESPONSE.fields_by_name['note_fragment'].message_type = note__pb2._NOTEFRAGMENT
_UPDATENOTEREQUEST.fields_by_name['note'].message_type = note__pb2._NOTE
_UPDATENOTERESPONSE.fields_by_name['status'].message_type = _NOTESERVICERESPONSESTATUS
DESCRIPTOR.message_types_by_name['NoteServiceResponseStatus'] = _NOTESERVICERESPONSESTATUS
DESCRIPTOR.message_types_by_name['CreateNoteRequest'] = _CREATENOTEREQUEST
DESCRIPTOR.message_types_by_name['CreateNoteResponse'] = _CREATENOTERESPONSE
DESCRIPTOR.message_types_by_name['DeleteNoteRequest'] = _DELETENOTEREQUEST
DESCRIPTOR.message_types_by_name['DeleteNoteResponse'] = _DELETENOTERESPONSE
DESCRIPTOR.message_types_by_name['RetrieveNoteRequest'] = _RETRIEVENOTEREQUEST
DESCRIPTOR.message_types_by_name['RetrieveNoteResponse'] = _RETRIEVENOTERESPONSE
DESCRIPTOR.message_types_by_name['SearchNotesRequest'] = _SEARCHNOTESREQUEST
DESCRIPTOR.message_types_by_name['SearchNotesResponse'] = _SEARCHNOTESRESPONSE
DESCRIPTOR.message_types_by_name['SearchNoteFragmentRequest'] = _SEARCHNOTEFRAGMENTREQUEST
DESCRIPTOR.message_types_by_name['SearchNoteFragmentResponse'] = _SEARCHNOTEFRAGMENTRESPONSE
DESCRIPTOR.message_types_by_name['UpdateNoteRequest'] = _UPDATENOTEREQUEST
DESCRIPTOR.message_types_by_name['UpdateNoteResponse'] = _UPDATENOTERESPONSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

NoteServiceResponseStatus = _reflection.GeneratedProtocolMessageType('NoteServiceResponseStatus', (_message.Message,), dict(
  DESCRIPTOR = _NOTESERVICERESPONSESTATUS,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.NoteServiceResponseStatus)
  ))
_sym_db.RegisterMessage(NoteServiceResponseStatus)

CreateNoteRequest = _reflection.GeneratedProtocolMessageType('CreateNoteRequest', (_message.Message,), dict(
  DESCRIPTOR = _CREATENOTEREQUEST,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.CreateNoteRequest)
  ))
_sym_db.RegisterMessage(CreateNoteRequest)

CreateNoteResponse = _reflection.GeneratedProtocolMessageType('CreateNoteResponse', (_message.Message,), dict(
  DESCRIPTOR = _CREATENOTERESPONSE,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.CreateNoteResponse)
  ))
_sym_db.RegisterMessage(CreateNoteResponse)

DeleteNoteRequest = _reflection.GeneratedProtocolMessageType('DeleteNoteRequest', (_message.Message,), dict(
  DESCRIPTOR = _DELETENOTEREQUEST,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.DeleteNoteRequest)
  ))
_sym_db.RegisterMessage(DeleteNoteRequest)

DeleteNoteResponse = _reflection.GeneratedProtocolMessageType('DeleteNoteResponse', (_message.Message,), dict(
  DESCRIPTOR = _DELETENOTERESPONSE,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.DeleteNoteResponse)
  ))
_sym_db.RegisterMessage(DeleteNoteResponse)

RetrieveNoteRequest = _reflection.GeneratedProtocolMessageType('RetrieveNoteRequest', (_message.Message,), dict(
  DESCRIPTOR = _RETRIEVENOTEREQUEST,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.RetrieveNoteRequest)
  ))
_sym_db.RegisterMessage(RetrieveNoteRequest)

RetrieveNoteResponse = _reflection.GeneratedProtocolMessageType('RetrieveNoteResponse', (_message.Message,), dict(
  DESCRIPTOR = _RETRIEVENOTERESPONSE,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.RetrieveNoteResponse)
  ))
_sym_db.RegisterMessage(RetrieveNoteResponse)

SearchNotesRequest = _reflection.GeneratedProtocolMessageType('SearchNotesRequest', (_message.Message,), dict(
  DESCRIPTOR = _SEARCHNOTESREQUEST,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.SearchNotesRequest)
  ))
_sym_db.RegisterMessage(SearchNotesRequest)

SearchNotesResponse = _reflection.GeneratedProtocolMessageType('SearchNotesResponse', (_message.Message,), dict(
  DESCRIPTOR = _SEARCHNOTESRESPONSE,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.SearchNotesResponse)
  ))
_sym_db.RegisterMessage(SearchNotesResponse)

SearchNoteFragmentRequest = _reflection.GeneratedProtocolMessageType('SearchNoteFragmentRequest', (_message.Message,), dict(
  DESCRIPTOR = _SEARCHNOTEFRAGMENTREQUEST,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.SearchNoteFragmentRequest)
  ))
_sym_db.RegisterMessage(SearchNoteFragmentRequest)

SearchNoteFragmentResponse = _reflection.GeneratedProtocolMessageType('SearchNoteFragmentResponse', (_message.Message,), dict(
  DESCRIPTOR = _SEARCHNOTEFRAGMENTRESPONSE,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.SearchNoteFragmentResponse)
  ))
_sym_db.RegisterMessage(SearchNoteFragmentResponse)

UpdateNoteRequest = _reflection.GeneratedProtocolMessageType('UpdateNoteRequest', (_message.Message,), dict(
  DESCRIPTOR = _UPDATENOTEREQUEST,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.UpdateNoteRequest)
  ))
_sym_db.RegisterMessage(UpdateNoteRequest)

UpdateNoteResponse = _reflection.GeneratedProtocolMessageType('UpdateNoteResponse', (_message.Message,), dict(
  DESCRIPTOR = _UPDATENOTERESPONSE,
  __module__ = 'noteservice_pb2'
  # @@protoc_insertion_point(class_scope:ehr.noteservice.UpdateNoteResponse)
  ))
_sym_db.RegisterMessage(UpdateNoteResponse)


DESCRIPTOR._options = None

_NOTESERVICE = _descriptor.ServiceDescriptor(
  name='NoteService',
  full_name='ehr.noteservice.NoteService',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  serialized_start=1216,
  serialized_end=1797,
  methods=[
  _descriptor.MethodDescriptor(
    name='CreateNote',
    full_name='ehr.noteservice.NoteService.CreateNote',
    index=0,
    containing_service=None,
    input_type=_CREATENOTEREQUEST,
    output_type=_CREATENOTERESPONSE,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='RetrieveNote',
    full_name='ehr.noteservice.NoteService.RetrieveNote',
    index=1,
    containing_service=None,
    input_type=_RETRIEVENOTEREQUEST,
    output_type=_RETRIEVENOTERESPONSE,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='UpdateNote',
    full_name='ehr.noteservice.NoteService.UpdateNote',
    index=2,
    containing_service=None,
    input_type=_UPDATENOTEREQUEST,
    output_type=_UPDATENOTERESPONSE,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='DeleteNote',
    full_name='ehr.noteservice.NoteService.DeleteNote',
    index=3,
    containing_service=None,
    input_type=_DELETENOTEREQUEST,
    output_type=_DELETENOTERESPONSE,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='SearchNotes',
    full_name='ehr.noteservice.NoteService.SearchNotes',
    index=4,
    containing_service=None,
    input_type=_SEARCHNOTESREQUEST,
    output_type=_SEARCHNOTESRESPONSE,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='SearchNoteFragments',
    full_name='ehr.noteservice.NoteService.SearchNoteFragments',
    index=5,
    containing_service=None,
    input_type=_SEARCHNOTEFRAGMENTREQUEST,
    output_type=_SEARCHNOTEFRAGMENTRESPONSE,
    serialized_options=None,
  ),
])
_sym_db.RegisterServiceDescriptor(_NOTESERVICE)

DESCRIPTOR.services_by_name['NoteService'] = _NOTESERVICE

# @@protoc_insertion_point(module_scope)
