# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: note.proto

require 'google/protobuf'

require 'google/protobuf/timestamp_pb'
require 'medicalissues_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "ehr.note.Note" do
    optional :id, :int64, 1
    optional :date_created, :message, 2, "google.protobuf.Timestamp"
    optional :note_guid, :string, 3
    optional :visit_guid, :string, 4
    optional :author_guid, :string, 5
    optional :patient_guid, :string, 6
    optional :type, :enum, 7, "ehr.note.NoteType"
    optional :status, :enum, 8, "ehr.note.RecordStatus"
    repeated :fragments, :message, 9, "ehr.note.NoteFragment"
    repeated :tags, :string, 10
  end
  add_message "ehr.note.NoteFragment" do
    optional :id, :int64, 1
    optional :date_created, :message, 2, "google.protobuf.Timestamp"
    optional :note_fragment_guid, :string, 3
    optional :note_guid, :string, 4
    optional :issue_guid, :string, 5
    optional :icd_10_code, :string, 6
    optional :icd_10_long, :string, 7
    optional :description, :string, 8
    optional :status, :enum, 9, "ehr.note.RecordStatus"
    optional :priority, :enum, 10, "ehr.note.RecordPriority"
    optional :topic, :enum, 11, "ehr.note.FragmentType"
    optional :content, :string, 12
    repeated :tags, :string, 13
  end
  add_enum "ehr.note.NoteType" do
    value :NO_NOTE_TYPE, 0
    value :FOLLOW_UP, 1
    value :PHONE_CALL, 2
    value :CONTINUED_CARE_DOCUMENTATION, 4
    value :REFILL_DOCUMENTATION, 5
    value :INTAKE, 6
    value :PROCEDURE, 7
    value :HISTORY_AND_PHYSICAL, 8
  end
  add_enum "ehr.note.FragmentType" do
    value :NO_TOPIC, 0
    value :SUBJECTIVE, 1
    value :REVIEW_OF_SYSTEMS, 2
    value :MEDICAL_HISTORY, 3
    value :ALLERGIES, 4
    value :MEDICATIONS, 5
    value :FAMILY_HISTORY, 6
    value :SOCIAL_HISTORY, 7
    value :VITALS, 8
    value :PHYSICAL_EXAM, 9
    value :LABORATORY_DATA, 10
    value :MEDICAL_PROBLEM, 11
  end
  add_enum "ehr.note.RecordPriority" do
    value :NO_PRIORITY, 0
    value :HIGH, 1
    value :NORMAL, 2
    value :LOW, 3
  end
  add_enum "ehr.note.RecordStatus" do
    value :NO_STATUS, 0
    value :INCOMPLETE, 1
    value :ACTIVE, 2
    value :REPLACED, 3
    value :DELETED, 4
  end
end

module Ehr
  module Note
    Note = Google::Protobuf::DescriptorPool.generated_pool.lookup("ehr.note.Note").msgclass
    NoteFragment = Google::Protobuf::DescriptorPool.generated_pool.lookup("ehr.note.NoteFragment").msgclass
    NoteType = Google::Protobuf::DescriptorPool.generated_pool.lookup("ehr.note.NoteType").enummodule
    FragmentType = Google::Protobuf::DescriptorPool.generated_pool.lookup("ehr.note.FragmentType").enummodule
    RecordPriority = Google::Protobuf::DescriptorPool.generated_pool.lookup("ehr.note.RecordPriority").enummodule
    RecordStatus = Google::Protobuf::DescriptorPool.generated_pool.lookup("ehr.note.RecordStatus").enummodule
  end
end