// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: http.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Ehr.Http {

  /// <summary>Holder for reflection information generated from http.proto</summary>
  public static partial class HttpReflection {

    #region Descriptor
    /// <summary>File descriptor for http.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static HttpReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CgpodHRwLnByb3RvEghlaHIuaHR0cCqMAQoLU3RhdHVzQ29kZXMSBgoCT0sQ",
            "ABIQCgxOT1RfTU9ESUZJRUQQARISCg5OT1RfQVVUSE9SSVpFRBADEg0KCU5P",
            "VF9GT1VORBAEEgwKCENPTkZMSUNUEAUSGQoVSU5URVJOQUxfU0VSVkVSX0VS",
            "Uk9SEAYSFwoTU0VSVklDRV9VTkFWQUlMQUJMRRAHQgdaBWVocnBiYgZwcm90",
            "bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(new[] {typeof(global::Ehr.Http.StatusCodes), }, null));
    }
    #endregion

  }
  #region Enums
  /// <summary>
  /// Sticking to only HTTP status codes that can be mapped to a gRPC code.
  /// </summary>
  public enum StatusCodes {
    /// <summary>
    /// OK | 200
    /// </summary>
    [pbr::OriginalName("OK")] Ok = 0,
    /// <summary>
    /// CANCELLED | 304
    /// </summary>
    [pbr::OriginalName("NOT_MODIFIED")] NotModified = 1,
    /// <summary>
    /// PERMISSION_DENIED or UNAUTHENTICATED | 401
    /// </summary>
    [pbr::OriginalName("NOT_AUTHORIZED")] NotAuthorized = 3,
    /// <summary>
    /// NOT_FOUND | 404
    /// </summary>
    [pbr::OriginalName("NOT_FOUND")] NotFound = 4,
    /// <summary>
    /// ALREADY_EXISTS | 409
    /// </summary>
    [pbr::OriginalName("CONFLICT")] Conflict = 5,
    /// <summary>
    /// INTERNAL | 500
    /// </summary>
    [pbr::OriginalName("INTERNAL_SERVER_ERROR")] InternalServerError = 6,
    /// <summary>
    /// UNAVAILABLE | 503
    /// </summary>
    [pbr::OriginalName("SERVICE_UNAVAILABLE")] ServiceUnavailable = 7,
  }

  #endregion

}

#endregion Designer generated code
