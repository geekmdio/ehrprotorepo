// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: note.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class GPBTimestamp;
@class NoteFragment;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum NoteType

typedef GPB_ENUM(NoteType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  NoteType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  NoteType_NoNoteType = 0,
  NoteType_FollowUp = 1,
  NoteType_PhoneCall = 2,
  NoteType_ContinuedCareDocumentation = 4,
  NoteType_RefillDocumentation = 5,
  NoteType_Intake = 6,
  NoteType_Procedure = 7,
  NoteType_HistoryAndPhysical = 8,
};

GPBEnumDescriptor *NoteType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL NoteType_IsValidValue(int32_t value);

#pragma mark - Enum FragmentType

typedef GPB_ENUM(FragmentType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  FragmentType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  FragmentType_NoTopic = 0,
  FragmentType_Subjective = 1,
  FragmentType_ReviewOfSystems = 2,
  FragmentType_MedicalHistory = 3,
  FragmentType_Allergies = 4,
  FragmentType_Medications = 5,
  FragmentType_FamilyHistory = 6,
  FragmentType_SocialHistory = 7,
  FragmentType_Vitals = 8,
  FragmentType_PhysicalExam = 9,
  FragmentType_LaboratoryData = 10,
  FragmentType_MedicalProblem = 11,
};

GPBEnumDescriptor *FragmentType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL FragmentType_IsValidValue(int32_t value);

#pragma mark - Enum RecordPriority

typedef GPB_ENUM(RecordPriority) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  RecordPriority_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  RecordPriority_NoPriority = 0,
  RecordPriority_High = 1,
  RecordPriority_Normal = 2,
  RecordPriority_Low = 3,
};

GPBEnumDescriptor *RecordPriority_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL RecordPriority_IsValidValue(int32_t value);

#pragma mark - Enum RecordStatus

typedef GPB_ENUM(RecordStatus) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  RecordStatus_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  RecordStatus_NoStatus = 0,
  RecordStatus_Incomplete = 1,
  RecordStatus_Active = 2,
  RecordStatus_Replaced = 3,
  RecordStatus_Deleted = 4,
};

GPBEnumDescriptor *RecordStatus_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL RecordStatus_IsValidValue(int32_t value);

#pragma mark - NoteRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface NoteRoot : GPBRootObject
@end

#pragma mark - Note

typedef GPB_ENUM(Note_FieldNumber) {
  Note_FieldNumber_Id_p = 1,
  Note_FieldNumber_DateCreated = 2,
  Note_FieldNumber_NoteGuid = 3,
  Note_FieldNumber_VisitGuid = 4,
  Note_FieldNumber_AuthorGuid = 5,
  Note_FieldNumber_PatientGuid = 6,
  Note_FieldNumber_Type = 7,
  Note_FieldNumber_Status = 8,
  Note_FieldNumber_FragmentsArray = 9,
  Note_FieldNumber_TagsArray = 10,
};

@interface Note : GPBMessage

@property(nonatomic, readwrite) int64_t id_p;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *dateCreated;
/** Test to see if @c dateCreated has been set. */
@property(nonatomic, readwrite) BOOL hasDateCreated;

@property(nonatomic, readwrite, copy, null_resettable) NSString *noteGuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *visitGuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *authorGuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *patientGuid;

@property(nonatomic, readwrite) NoteType type;

@property(nonatomic, readwrite) RecordStatus status;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NoteFragment*> *fragmentsArray;
/** The number of items in @c fragmentsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger fragmentsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *tagsArray;
/** The number of items in @c tagsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger tagsArray_Count;

@end

/**
 * Fetches the raw value of a @c Note's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t Note_Type_RawValue(Note *message);
/**
 * Sets the raw value of an @c Note's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetNote_Type_RawValue(Note *message, int32_t value);

/**
 * Fetches the raw value of a @c Note's @c status property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t Note_Status_RawValue(Note *message);
/**
 * Sets the raw value of an @c Note's @c status property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetNote_Status_RawValue(Note *message, int32_t value);

#pragma mark - NoteFragment

typedef GPB_ENUM(NoteFragment_FieldNumber) {
  NoteFragment_FieldNumber_Id_p = 1,
  NoteFragment_FieldNumber_DateCreated = 2,
  NoteFragment_FieldNumber_NoteFragmentGuid = 3,
  NoteFragment_FieldNumber_NoteGuid = 4,
  NoteFragment_FieldNumber_IssueGuid = 5,
  NoteFragment_FieldNumber_Icd10Code = 6,
  NoteFragment_FieldNumber_Icd10Long = 7,
  NoteFragment_FieldNumber_Description_p = 8,
  NoteFragment_FieldNumber_Status = 9,
  NoteFragment_FieldNumber_Priority = 10,
  NoteFragment_FieldNumber_Topic = 11,
  NoteFragment_FieldNumber_Content = 12,
  NoteFragment_FieldNumber_TagsArray = 13,
};

@interface NoteFragment : GPBMessage

@property(nonatomic, readwrite) int64_t id_p;

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *dateCreated;
/** Test to see if @c dateCreated has been set. */
@property(nonatomic, readwrite) BOOL hasDateCreated;

@property(nonatomic, readwrite, copy, null_resettable) NSString *noteFragmentGuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *noteGuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *issueGuid;

/** recommend using watson api to determine from description */
@property(nonatomic, readwrite, copy, null_resettable) NSString *icd10Code;

/** recommend using watson api to determine from description */
@property(nonatomic, readwrite, copy, null_resettable) NSString *icd10Long;

/** free text, human readable */
@property(nonatomic, readwrite, copy, null_resettable) NSString *description_p;

@property(nonatomic, readwrite) RecordStatus status;

@property(nonatomic, readwrite) RecordPriority priority;

@property(nonatomic, readwrite) FragmentType topic;

@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *tagsArray;
/** The number of items in @c tagsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger tagsArray_Count;

@end

/**
 * Fetches the raw value of a @c NoteFragment's @c status property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t NoteFragment_Status_RawValue(NoteFragment *message);
/**
 * Sets the raw value of an @c NoteFragment's @c status property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetNoteFragment_Status_RawValue(NoteFragment *message, int32_t value);

/**
 * Fetches the raw value of a @c NoteFragment's @c priority property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t NoteFragment_Priority_RawValue(NoteFragment *message);
/**
 * Sets the raw value of an @c NoteFragment's @c priority property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetNoteFragment_Priority_RawValue(NoteFragment *message, int32_t value);

/**
 * Fetches the raw value of a @c NoteFragment's @c topic property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t NoteFragment_Topic_RawValue(NoteFragment *message);
/**
 * Sets the raw value of an @c NoteFragment's @c topic property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetNoteFragment_Topic_RawValue(NoteFragment *message, int32_t value);

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
