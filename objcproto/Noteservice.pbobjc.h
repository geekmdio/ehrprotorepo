// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: noteservice.proto

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

@class Note;
@class NoteServiceResponseStatus;
GPB_ENUM_FWD_DECLARE(StatusCodes);

NS_ASSUME_NONNULL_BEGIN

#pragma mark - NoteserviceRoot

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
@interface NoteserviceRoot : GPBRootObject
@end

#pragma mark - NoteServiceResponseStatus

typedef GPB_ENUM(NoteServiceResponseStatus_FieldNumber) {
  NoteServiceResponseStatus_FieldNumber_HTTPCode = 1,
  NoteServiceResponseStatus_FieldNumber_Message = 2,
};

@interface NoteServiceResponseStatus : GPBMessage

@property(nonatomic, readwrite) enum StatusCodes HTTPCode;

@property(nonatomic, readwrite, copy, null_resettable) NSString *message;

@end

/**
 * Fetches the raw value of a @c NoteServiceResponseStatus's @c HTTPCode property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t NoteServiceResponseStatus_HTTPCode_RawValue(NoteServiceResponseStatus *message);
/**
 * Sets the raw value of an @c NoteServiceResponseStatus's @c HTTPCode property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetNoteServiceResponseStatus_HTTPCode_RawValue(NoteServiceResponseStatus *message, int32_t value);

#pragma mark - CreateNoteRequest

typedef GPB_ENUM(CreateNoteRequest_FieldNumber) {
  CreateNoteRequest_FieldNumber_Note = 1,
};

@interface CreateNoteRequest : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Note *note;
/** Test to see if @c note has been set. */
@property(nonatomic, readwrite) BOOL hasNote;

@end

#pragma mark - CreateNoteResponse

typedef GPB_ENUM(CreateNoteResponse_FieldNumber) {
  CreateNoteResponse_FieldNumber_Status = 1,
  CreateNoteResponse_FieldNumber_Note = 2,
};

@interface CreateNoteResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NoteServiceResponseStatus *status;
/** Test to see if @c status has been set. */
@property(nonatomic, readwrite) BOOL hasStatus;

@property(nonatomic, readwrite, strong, null_resettable) Note *note;
/** Test to see if @c note has been set. */
@property(nonatomic, readwrite) BOOL hasNote;

@end

#pragma mark - DeleteNoteRequest

typedef GPB_ENUM(DeleteNoteRequest_FieldNumber) {
  DeleteNoteRequest_FieldNumber_Id_p = 1,
};

@interface DeleteNoteRequest : GPBMessage

@property(nonatomic, readwrite) int64_t id_p;

@end

#pragma mark - DeleteNoteResponse

typedef GPB_ENUM(DeleteNoteResponse_FieldNumber) {
  DeleteNoteResponse_FieldNumber_Status = 1,
};

@interface DeleteNoteResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NoteServiceResponseStatus *status;
/** Test to see if @c status has been set. */
@property(nonatomic, readwrite) BOOL hasStatus;

@end

#pragma mark - RetrieveNoteRequest

typedef GPB_ENUM(RetrieveNoteRequest_FieldNumber) {
  RetrieveNoteRequest_FieldNumber_Id_p = 1,
};

@interface RetrieveNoteRequest : GPBMessage

@property(nonatomic, readwrite) int64_t id_p;

@end

#pragma mark - RetrieveNoteResponse

typedef GPB_ENUM(RetrieveNoteResponse_FieldNumber) {
  RetrieveNoteResponse_FieldNumber_Status = 1,
  RetrieveNoteResponse_FieldNumber_Note = 2,
};

@interface RetrieveNoteResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NoteServiceResponseStatus *status;
/** Test to see if @c status has been set. */
@property(nonatomic, readwrite) BOOL hasStatus;

@property(nonatomic, readwrite, strong, null_resettable) Note *note;
/** Test to see if @c note has been set. */
@property(nonatomic, readwrite) BOOL hasNote;

@end

#pragma mark - FindNoteRequest

typedef GPB_ENUM(FindNoteRequest_FieldNumber) {
  FindNoteRequest_FieldNumber_SearchTerms = 1,
  FindNoteRequest_FieldNumber_AuthorGuid = 2,
  FindNoteRequest_FieldNumber_PatientGuid = 3,
  FindNoteRequest_FieldNumber_VisitGuid = 4,
};

@interface FindNoteRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *searchTerms;

@property(nonatomic, readwrite, copy, null_resettable) NSString *authorGuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *patientGuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *visitGuid;

@end

#pragma mark - FindNoteResponse

typedef GPB_ENUM(FindNoteResponse_FieldNumber) {
  FindNoteResponse_FieldNumber_Status = 1,
  FindNoteResponse_FieldNumber_NoteArray = 2,
};

@interface FindNoteResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NoteServiceResponseStatus *status;
/** Test to see if @c status has been set. */
@property(nonatomic, readwrite) BOOL hasStatus;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Note*> *noteArray;
/** The number of items in @c noteArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger noteArray_Count;

@end

#pragma mark - UpdateNoteRequest

typedef GPB_ENUM(UpdateNoteRequest_FieldNumber) {
  UpdateNoteRequest_FieldNumber_Id_p = 1,
  UpdateNoteRequest_FieldNumber_Note = 2,
};

@interface UpdateNoteRequest : GPBMessage

@property(nonatomic, readwrite) int64_t id_p;

@property(nonatomic, readwrite, strong, null_resettable) Note *note;
/** Test to see if @c note has been set. */
@property(nonatomic, readwrite) BOOL hasNote;

@end

#pragma mark - UpdateNoteResponse

typedef GPB_ENUM(UpdateNoteResponse_FieldNumber) {
  UpdateNoteResponse_FieldNumber_Status = 1,
};

@interface UpdateNoteResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NoteServiceResponseStatus *status;
/** Test to see if @c status has been set. */
@property(nonatomic, readwrite) BOOL hasStatus;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
