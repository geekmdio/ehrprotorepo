// Code generated by protoc-gen-go. DO NOT EDIT.
// source: noteservice.proto

package ehrpb

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type NoteServiceResponseStatus struct {
	HttpCode             int32    `protobuf:"varint,1,opt,name=http_code,json=httpCode,proto3" json:"http_code,omitempty"`
	Message              string   `protobuf:"bytes,2,opt,name=message,proto3" json:"message,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *NoteServiceResponseStatus) Reset()         { *m = NoteServiceResponseStatus{} }
func (m *NoteServiceResponseStatus) String() string { return proto.CompactTextString(m) }
func (*NoteServiceResponseStatus) ProtoMessage()    {}
func (*NoteServiceResponseStatus) Descriptor() ([]byte, []int) {
	return fileDescriptor_noteservice_33774777f008d1d7, []int{0}
}
func (m *NoteServiceResponseStatus) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_NoteServiceResponseStatus.Unmarshal(m, b)
}
func (m *NoteServiceResponseStatus) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_NoteServiceResponseStatus.Marshal(b, m, deterministic)
}
func (dst *NoteServiceResponseStatus) XXX_Merge(src proto.Message) {
	xxx_messageInfo_NoteServiceResponseStatus.Merge(dst, src)
}
func (m *NoteServiceResponseStatus) XXX_Size() int {
	return xxx_messageInfo_NoteServiceResponseStatus.Size(m)
}
func (m *NoteServiceResponseStatus) XXX_DiscardUnknown() {
	xxx_messageInfo_NoteServiceResponseStatus.DiscardUnknown(m)
}

var xxx_messageInfo_NoteServiceResponseStatus proto.InternalMessageInfo

func (m *NoteServiceResponseStatus) GetHttpCode() int32 {
	if m != nil {
		return m.HttpCode
	}
	return 0
}

func (m *NoteServiceResponseStatus) GetMessage() string {
	if m != nil {
		return m.Message
	}
	return ""
}

type CreateNoteRequest struct {
	Note                 *Note    `protobuf:"bytes,1,opt,name=note,proto3" json:"note,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *CreateNoteRequest) Reset()         { *m = CreateNoteRequest{} }
func (m *CreateNoteRequest) String() string { return proto.CompactTextString(m) }
func (*CreateNoteRequest) ProtoMessage()    {}
func (*CreateNoteRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_noteservice_33774777f008d1d7, []int{1}
}
func (m *CreateNoteRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_CreateNoteRequest.Unmarshal(m, b)
}
func (m *CreateNoteRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_CreateNoteRequest.Marshal(b, m, deterministic)
}
func (dst *CreateNoteRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_CreateNoteRequest.Merge(dst, src)
}
func (m *CreateNoteRequest) XXX_Size() int {
	return xxx_messageInfo_CreateNoteRequest.Size(m)
}
func (m *CreateNoteRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_CreateNoteRequest.DiscardUnknown(m)
}

var xxx_messageInfo_CreateNoteRequest proto.InternalMessageInfo

func (m *CreateNoteRequest) GetNote() *Note {
	if m != nil {
		return m.Note
	}
	return nil
}

type CreateNoteResponse struct {
	Status               *NoteServiceResponseStatus `protobuf:"bytes,1,opt,name=status,proto3" json:"status,omitempty"`
	Note                 *Note                      `protobuf:"bytes,2,opt,name=note,proto3" json:"note,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                   `json:"-"`
	XXX_unrecognized     []byte                     `json:"-"`
	XXX_sizecache        int32                      `json:"-"`
}

func (m *CreateNoteResponse) Reset()         { *m = CreateNoteResponse{} }
func (m *CreateNoteResponse) String() string { return proto.CompactTextString(m) }
func (*CreateNoteResponse) ProtoMessage()    {}
func (*CreateNoteResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_noteservice_33774777f008d1d7, []int{2}
}
func (m *CreateNoteResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_CreateNoteResponse.Unmarshal(m, b)
}
func (m *CreateNoteResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_CreateNoteResponse.Marshal(b, m, deterministic)
}
func (dst *CreateNoteResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_CreateNoteResponse.Merge(dst, src)
}
func (m *CreateNoteResponse) XXX_Size() int {
	return xxx_messageInfo_CreateNoteResponse.Size(m)
}
func (m *CreateNoteResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_CreateNoteResponse.DiscardUnknown(m)
}

var xxx_messageInfo_CreateNoteResponse proto.InternalMessageInfo

func (m *CreateNoteResponse) GetStatus() *NoteServiceResponseStatus {
	if m != nil {
		return m.Status
	}
	return nil
}

func (m *CreateNoteResponse) GetNote() *Note {
	if m != nil {
		return m.Note
	}
	return nil
}

type DeleteNoteRequest struct {
	Id                   int32    `protobuf:"varint,1,opt,name=id,proto3" json:"id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *DeleteNoteRequest) Reset()         { *m = DeleteNoteRequest{} }
func (m *DeleteNoteRequest) String() string { return proto.CompactTextString(m) }
func (*DeleteNoteRequest) ProtoMessage()    {}
func (*DeleteNoteRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_noteservice_33774777f008d1d7, []int{3}
}
func (m *DeleteNoteRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_DeleteNoteRequest.Unmarshal(m, b)
}
func (m *DeleteNoteRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_DeleteNoteRequest.Marshal(b, m, deterministic)
}
func (dst *DeleteNoteRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DeleteNoteRequest.Merge(dst, src)
}
func (m *DeleteNoteRequest) XXX_Size() int {
	return xxx_messageInfo_DeleteNoteRequest.Size(m)
}
func (m *DeleteNoteRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_DeleteNoteRequest.DiscardUnknown(m)
}

var xxx_messageInfo_DeleteNoteRequest proto.InternalMessageInfo

func (m *DeleteNoteRequest) GetId() int32 {
	if m != nil {
		return m.Id
	}
	return 0
}

type DeleteNoteResponse struct {
	Status               *NoteServiceResponseStatus `protobuf:"bytes,1,opt,name=status,proto3" json:"status,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                   `json:"-"`
	XXX_unrecognized     []byte                     `json:"-"`
	XXX_sizecache        int32                      `json:"-"`
}

func (m *DeleteNoteResponse) Reset()         { *m = DeleteNoteResponse{} }
func (m *DeleteNoteResponse) String() string { return proto.CompactTextString(m) }
func (*DeleteNoteResponse) ProtoMessage()    {}
func (*DeleteNoteResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_noteservice_33774777f008d1d7, []int{4}
}
func (m *DeleteNoteResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_DeleteNoteResponse.Unmarshal(m, b)
}
func (m *DeleteNoteResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_DeleteNoteResponse.Marshal(b, m, deterministic)
}
func (dst *DeleteNoteResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DeleteNoteResponse.Merge(dst, src)
}
func (m *DeleteNoteResponse) XXX_Size() int {
	return xxx_messageInfo_DeleteNoteResponse.Size(m)
}
func (m *DeleteNoteResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_DeleteNoteResponse.DiscardUnknown(m)
}

var xxx_messageInfo_DeleteNoteResponse proto.InternalMessageInfo

func (m *DeleteNoteResponse) GetStatus() *NoteServiceResponseStatus {
	if m != nil {
		return m.Status
	}
	return nil
}

type RetrieveNoteRequest struct {
	Id                   int32    `protobuf:"varint,1,opt,name=id,proto3" json:"id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *RetrieveNoteRequest) Reset()         { *m = RetrieveNoteRequest{} }
func (m *RetrieveNoteRequest) String() string { return proto.CompactTextString(m) }
func (*RetrieveNoteRequest) ProtoMessage()    {}
func (*RetrieveNoteRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_noteservice_33774777f008d1d7, []int{5}
}
func (m *RetrieveNoteRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_RetrieveNoteRequest.Unmarshal(m, b)
}
func (m *RetrieveNoteRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_RetrieveNoteRequest.Marshal(b, m, deterministic)
}
func (dst *RetrieveNoteRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_RetrieveNoteRequest.Merge(dst, src)
}
func (m *RetrieveNoteRequest) XXX_Size() int {
	return xxx_messageInfo_RetrieveNoteRequest.Size(m)
}
func (m *RetrieveNoteRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_RetrieveNoteRequest.DiscardUnknown(m)
}

var xxx_messageInfo_RetrieveNoteRequest proto.InternalMessageInfo

func (m *RetrieveNoteRequest) GetId() int32 {
	if m != nil {
		return m.Id
	}
	return 0
}

type RetrieveNoteResponse struct {
	Status               *NoteServiceResponseStatus `protobuf:"bytes,1,opt,name=status,proto3" json:"status,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                   `json:"-"`
	XXX_unrecognized     []byte                     `json:"-"`
	XXX_sizecache        int32                      `json:"-"`
}

func (m *RetrieveNoteResponse) Reset()         { *m = RetrieveNoteResponse{} }
func (m *RetrieveNoteResponse) String() string { return proto.CompactTextString(m) }
func (*RetrieveNoteResponse) ProtoMessage()    {}
func (*RetrieveNoteResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_noteservice_33774777f008d1d7, []int{6}
}
func (m *RetrieveNoteResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_RetrieveNoteResponse.Unmarshal(m, b)
}
func (m *RetrieveNoteResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_RetrieveNoteResponse.Marshal(b, m, deterministic)
}
func (dst *RetrieveNoteResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_RetrieveNoteResponse.Merge(dst, src)
}
func (m *RetrieveNoteResponse) XXX_Size() int {
	return xxx_messageInfo_RetrieveNoteResponse.Size(m)
}
func (m *RetrieveNoteResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_RetrieveNoteResponse.DiscardUnknown(m)
}

var xxx_messageInfo_RetrieveNoteResponse proto.InternalMessageInfo

func (m *RetrieveNoteResponse) GetStatus() *NoteServiceResponseStatus {
	if m != nil {
		return m.Status
	}
	return nil
}

type FindNoteRequest struct {
	SearchTerms          string   `protobuf:"bytes,1,opt,name=search_terms,json=searchTerms,proto3" json:"search_terms,omitempty"`
	AuthorGuid           string   `protobuf:"bytes,2,opt,name=author_guid,json=authorGuid,proto3" json:"author_guid,omitempty"`
	PatientGuid          string   `protobuf:"bytes,3,opt,name=patient_guid,json=patientGuid,proto3" json:"patient_guid,omitempty"`
	VisitGuid            string   `protobuf:"bytes,4,opt,name=visit_guid,json=visitGuid,proto3" json:"visit_guid,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *FindNoteRequest) Reset()         { *m = FindNoteRequest{} }
func (m *FindNoteRequest) String() string { return proto.CompactTextString(m) }
func (*FindNoteRequest) ProtoMessage()    {}
func (*FindNoteRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_noteservice_33774777f008d1d7, []int{7}
}
func (m *FindNoteRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_FindNoteRequest.Unmarshal(m, b)
}
func (m *FindNoteRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_FindNoteRequest.Marshal(b, m, deterministic)
}
func (dst *FindNoteRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_FindNoteRequest.Merge(dst, src)
}
func (m *FindNoteRequest) XXX_Size() int {
	return xxx_messageInfo_FindNoteRequest.Size(m)
}
func (m *FindNoteRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_FindNoteRequest.DiscardUnknown(m)
}

var xxx_messageInfo_FindNoteRequest proto.InternalMessageInfo

func (m *FindNoteRequest) GetSearchTerms() string {
	if m != nil {
		return m.SearchTerms
	}
	return ""
}

func (m *FindNoteRequest) GetAuthorGuid() string {
	if m != nil {
		return m.AuthorGuid
	}
	return ""
}

func (m *FindNoteRequest) GetPatientGuid() string {
	if m != nil {
		return m.PatientGuid
	}
	return ""
}

func (m *FindNoteRequest) GetVisitGuid() string {
	if m != nil {
		return m.VisitGuid
	}
	return ""
}

type FindNoteResponse struct {
	Status               *NoteServiceResponseStatus `protobuf:"bytes,1,opt,name=status,proto3" json:"status,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                   `json:"-"`
	XXX_unrecognized     []byte                     `json:"-"`
	XXX_sizecache        int32                      `json:"-"`
}

func (m *FindNoteResponse) Reset()         { *m = FindNoteResponse{} }
func (m *FindNoteResponse) String() string { return proto.CompactTextString(m) }
func (*FindNoteResponse) ProtoMessage()    {}
func (*FindNoteResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_noteservice_33774777f008d1d7, []int{8}
}
func (m *FindNoteResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_FindNoteResponse.Unmarshal(m, b)
}
func (m *FindNoteResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_FindNoteResponse.Marshal(b, m, deterministic)
}
func (dst *FindNoteResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_FindNoteResponse.Merge(dst, src)
}
func (m *FindNoteResponse) XXX_Size() int {
	return xxx_messageInfo_FindNoteResponse.Size(m)
}
func (m *FindNoteResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_FindNoteResponse.DiscardUnknown(m)
}

var xxx_messageInfo_FindNoteResponse proto.InternalMessageInfo

func (m *FindNoteResponse) GetStatus() *NoteServiceResponseStatus {
	if m != nil {
		return m.Status
	}
	return nil
}

type UpdateNoteRequest struct {
	Id                   int32    `protobuf:"varint,1,opt,name=id,proto3" json:"id,omitempty"`
	Note                 *Note    `protobuf:"bytes,2,opt,name=note,proto3" json:"note,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *UpdateNoteRequest) Reset()         { *m = UpdateNoteRequest{} }
func (m *UpdateNoteRequest) String() string { return proto.CompactTextString(m) }
func (*UpdateNoteRequest) ProtoMessage()    {}
func (*UpdateNoteRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_noteservice_33774777f008d1d7, []int{9}
}
func (m *UpdateNoteRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_UpdateNoteRequest.Unmarshal(m, b)
}
func (m *UpdateNoteRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_UpdateNoteRequest.Marshal(b, m, deterministic)
}
func (dst *UpdateNoteRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_UpdateNoteRequest.Merge(dst, src)
}
func (m *UpdateNoteRequest) XXX_Size() int {
	return xxx_messageInfo_UpdateNoteRequest.Size(m)
}
func (m *UpdateNoteRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_UpdateNoteRequest.DiscardUnknown(m)
}

var xxx_messageInfo_UpdateNoteRequest proto.InternalMessageInfo

func (m *UpdateNoteRequest) GetId() int32 {
	if m != nil {
		return m.Id
	}
	return 0
}

func (m *UpdateNoteRequest) GetNote() *Note {
	if m != nil {
		return m.Note
	}
	return nil
}

type UpdateNoteResponse struct {
	Status               *NoteServiceResponseStatus `protobuf:"bytes,1,opt,name=status,proto3" json:"status,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                   `json:"-"`
	XXX_unrecognized     []byte                     `json:"-"`
	XXX_sizecache        int32                      `json:"-"`
}

func (m *UpdateNoteResponse) Reset()         { *m = UpdateNoteResponse{} }
func (m *UpdateNoteResponse) String() string { return proto.CompactTextString(m) }
func (*UpdateNoteResponse) ProtoMessage()    {}
func (*UpdateNoteResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_noteservice_33774777f008d1d7, []int{10}
}
func (m *UpdateNoteResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_UpdateNoteResponse.Unmarshal(m, b)
}
func (m *UpdateNoteResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_UpdateNoteResponse.Marshal(b, m, deterministic)
}
func (dst *UpdateNoteResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_UpdateNoteResponse.Merge(dst, src)
}
func (m *UpdateNoteResponse) XXX_Size() int {
	return xxx_messageInfo_UpdateNoteResponse.Size(m)
}
func (m *UpdateNoteResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_UpdateNoteResponse.DiscardUnknown(m)
}

var xxx_messageInfo_UpdateNoteResponse proto.InternalMessageInfo

func (m *UpdateNoteResponse) GetStatus() *NoteServiceResponseStatus {
	if m != nil {
		return m.Status
	}
	return nil
}

func init() {
	proto.RegisterType((*NoteServiceResponseStatus)(nil), "ehr.noteservice.NoteServiceResponseStatus")
	proto.RegisterType((*CreateNoteRequest)(nil), "ehr.noteservice.CreateNoteRequest")
	proto.RegisterType((*CreateNoteResponse)(nil), "ehr.noteservice.CreateNoteResponse")
	proto.RegisterType((*DeleteNoteRequest)(nil), "ehr.noteservice.DeleteNoteRequest")
	proto.RegisterType((*DeleteNoteResponse)(nil), "ehr.noteservice.DeleteNoteResponse")
	proto.RegisterType((*RetrieveNoteRequest)(nil), "ehr.noteservice.RetrieveNoteRequest")
	proto.RegisterType((*RetrieveNoteResponse)(nil), "ehr.noteservice.RetrieveNoteResponse")
	proto.RegisterType((*FindNoteRequest)(nil), "ehr.noteservice.FindNoteRequest")
	proto.RegisterType((*FindNoteResponse)(nil), "ehr.noteservice.FindNoteResponse")
	proto.RegisterType((*UpdateNoteRequest)(nil), "ehr.noteservice.UpdateNoteRequest")
	proto.RegisterType((*UpdateNoteResponse)(nil), "ehr.noteservice.UpdateNoteResponse")
}

func init() { proto.RegisterFile("noteservice.proto", fileDescriptor_noteservice_33774777f008d1d7) }

var fileDescriptor_noteservice_33774777f008d1d7 = []byte{
	// 462 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xac, 0x54, 0x4d, 0x6f, 0x13, 0x31,
	0x10, 0x4d, 0xd2, 0x8f, 0x34, 0x93, 0xaa, 0x25, 0x86, 0x43, 0x08, 0x42, 0xa4, 0x2e, 0x95, 0x2a,
	0x0e, 0x7b, 0x28, 0x07, 0xee, 0x2d, 0xa2, 0xb7, 0x4a, 0xb8, 0x05, 0xaa, 0x4a, 0x28, 0xda, 0xc6,
	0xa3, 0xae, 0x25, 0xba, 0x5e, 0x6c, 0x6f, 0xb8, 0xf0, 0x3f, 0xf8, 0x49, 0xfc, 0x2d, 0x64, 0x7b,
	0xd3, 0xb8, 0xf1, 0xb2, 0x70, 0xd8, 0xe3, 0xbe, 0x79, 0xf3, 0xe6, 0x8d, 0xfd, 0xbc, 0x30, 0xca,
	0xa5, 0x41, 0x8d, 0x6a, 0x21, 0xe6, 0x98, 0x14, 0x4a, 0x1a, 0x49, 0xf6, 0x31, 0x53, 0x49, 0x00,
	0x4f, 0xc0, 0x7e, 0xf8, 0x22, 0x65, 0xf0, 0xfc, 0x42, 0x1a, 0xbc, 0xf4, 0x25, 0x86, 0xba, 0x90,
	0xb9, 0xc6, 0x4b, 0x93, 0x9a, 0x52, 0x93, 0x17, 0x30, 0xc8, 0x8c, 0x29, 0x66, 0x73, 0xc9, 0x71,
	0xdc, 0x9d, 0x76, 0x8f, 0xb7, 0xd8, 0x8e, 0x05, 0xce, 0x24, 0x47, 0x32, 0x86, 0xfe, 0x3d, 0x6a,
	0x9d, 0xde, 0xe1, 0xb8, 0x37, 0xed, 0x1e, 0x0f, 0xd8, 0xf2, 0x93, 0xbe, 0x83, 0xd1, 0x99, 0xc2,
	0xd4, 0xa0, 0x55, 0x66, 0xf8, 0xbd, 0x44, 0x6d, 0x08, 0x85, 0x4d, 0x3b, 0xd6, 0xc9, 0x0c, 0x4f,
	0xf6, 0x92, 0xa5, 0xa9, 0xc4, 0x91, 0x5c, 0x8d, 0xfe, 0x04, 0x12, 0x36, 0x7a, 0x2f, 0xe4, 0x14,
	0xb6, 0xb5, 0xf3, 0x53, 0xf5, 0xbe, 0x49, 0xd6, 0x16, 0x4a, 0xfe, 0xba, 0x01, 0xab, 0x3a, 0x1f,
	0xa6, 0xf7, 0x1a, 0xa6, 0x1f, 0xc2, 0xe8, 0x3d, 0x7e, 0xc3, 0xc7, 0xb6, 0xf7, 0xa0, 0x27, 0x78,
	0xb5, 0x7b, 0x4f, 0x70, 0x7a, 0x0d, 0x24, 0x24, 0xb5, 0x67, 0x91, 0x1e, 0xc1, 0x53, 0x86, 0x46,
	0x09, 0x5c, 0x34, 0x1a, 0xb8, 0x81, 0x67, 0x8f, 0x69, 0x2d, 0x5a, 0xf8, 0xd5, 0x85, 0xfd, 0x0f,
	0x22, 0xe7, 0xe1, 0xfc, 0x03, 0xd8, 0xd5, 0x98, 0xaa, 0x79, 0x36, 0x33, 0xa8, 0xee, 0xbd, 0xfa,
	0x80, 0x0d, 0x3d, 0x76, 0x65, 0x21, 0xf2, 0x0a, 0x86, 0x69, 0x69, 0x32, 0xa9, 0x66, 0x77, 0xa5,
	0xe0, 0x55, 0x1a, 0xc0, 0x43, 0xe7, 0xa5, 0xe0, 0x56, 0xa3, 0x48, 0x8d, 0xc0, 0xdc, 0x78, 0xc6,
	0x86, 0xd7, 0xa8, 0x30, 0x47, 0x79, 0x09, 0xb0, 0x10, 0x5a, 0x54, 0x84, 0x4d, 0x47, 0x18, 0x38,
	0xc4, 0x96, 0xe9, 0x67, 0x78, 0xb2, 0x32, 0xd6, 0xe2, 0xc6, 0xe7, 0x30, 0xfa, 0x54, 0xf0, 0xb4,
	0xf1, 0xce, 0xff, 0x2b, 0x3c, 0xd7, 0x40, 0x42, 0xa1, 0xf6, 0x2c, 0x9e, 0xfc, 0xde, 0x80, 0x61,
	0xc0, 0x22, 0x57, 0xd0, 0xbf, 0xc0, 0x1f, 0x16, 0x21, 0x34, 0x92, 0x8b, 0xde, 0xdd, 0xe4, 0xb0,
	0x91, 0xe3, 0x27, 0xd2, 0x0e, 0xf9, 0x02, 0xb0, 0xca, 0x75, 0x8d, 0x70, 0xf4, 0x32, 0x6a, 0x84,
	0xe3, 0x87, 0x41, 0x3b, 0xe4, 0x2b, 0xec, 0x86, 0x79, 0x25, 0xaf, 0xa3, 0xb6, 0x9a, 0xd4, 0x4f,
	0x8e, 0xfe, 0xc1, 0x7a, 0x90, 0xff, 0x08, 0x3b, 0xcb, 0x60, 0x90, 0x69, 0xd4, 0xb4, 0x16, 0xe6,
	0xc9, 0x41, 0x03, 0x23, 0x3c, 0x8a, 0xd5, 0x55, 0xd6, 0x1c, 0x45, 0x14, 0x98, 0x9a, 0xa3, 0x88,
	0xb3, 0x40, 0x3b, 0xa7, 0xfd, 0x9b, 0x2d, 0xcc, 0x54, 0x71, 0x7b, 0xbb, 0xed, 0xfe, 0xbd, 0x6f,
	0xff, 0x04, 0x00, 0x00, 0xff, 0xff, 0xc7, 0xa3, 0xba, 0x49, 0xad, 0x05, 0x00, 0x00,
}
