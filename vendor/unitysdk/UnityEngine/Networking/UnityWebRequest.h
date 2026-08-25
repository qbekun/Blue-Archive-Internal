#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class DownloadHandler; }
namespace UnityEngine::Networking { class UploadHandler; }
namespace UnityEngine::Networking { class CertificateHandler; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine { class WWWForm; }

#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETWEBERRORSTRING_OFFSET UNITYSDK_OFFSET(0xA4A34C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETHTTPSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0xA4A3500)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A3540)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A3550)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A3560)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A3570)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A3580)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A3590)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0xA4A35A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_RELEASE_OFFSET UNITYSDK_OFFSET(0xA4A35E0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0xA4A3620)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETDEFAULTS_OFFSET UNITYSDK_OFFSET(0xA4A3710)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A3720)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A3770)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A3890)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A3AC0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA4A3DE0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A4020)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_DISPOSEHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4A3F40)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_BEGINWEBREQUEST_OFFSET UNITYSDK_OFFSET(0xA4A41D0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SENDWEBREQUEST_OFFSET UNITYSDK_OFFSET(0xA4A4210)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0xA4A36D0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETMETHOD_OFFSET UNITYSDK_OFFSET(0xA4A4270)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETMETHOD_OFFSET UNITYSDK_OFFSET(0xA4A42B0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCUSTOMMETHOD_OFFSET UNITYSDK_OFFSET(0xA4A4400)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETCUSTOMMETHOD_OFFSET UNITYSDK_OFFSET(0xA4A4440)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETMETHOD_OFFSET UNITYSDK_OFFSET(0xA4A4550)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETCUSTOMMETHOD_OFFSET UNITYSDK_OFFSET(0xA4A4590)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0xA4A45D0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0xA4A3950)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETERROR_OFFSET UNITYSDK_OFFSET(0xA4A46D0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xA4A4710)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_URL_OFFSET UNITYSDK_OFFSET(0xA4A4920)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_URL_OFFSET UNITYSDK_OFFSET(0xA4A3820)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETURL_OFFSET UNITYSDK_OFFSET(0xA4A4960)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETURL_OFFSET UNITYSDK_OFFSET(0xA4A4AB0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETURL_OFFSET UNITYSDK_OFFSET(0xA4A49A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_RESPONSECODE_OFFSET UNITYSDK_OFFSET(0xA4A48E0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ISEXECUTING_OFFSET UNITYSDK_OFFSET(0xA4A4AF0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISMODIFIABLE_OFFSET UNITYSDK_OFFSET(0xA4A43C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0xA4A4B30)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISNETWORKERROR_OFFSET UNITYSDK_OFFSET(0xA4A4B70)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISHTTPERROR_OFFSET UNITYSDK_OFFSET(0xA4A4BB0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_RESULT_OFFSET UNITYSDK_OFFSET(0xA4A48A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETDOWNLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0xA4A4BF0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DOWNLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0xA4A4C30)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DOWNLOADEDBYTES_OFFSET UNITYSDK_OFFSET(0xA4A4CE0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETREDIRECTLIMITFROMSCRIPTING_OFFSET UNITYSDK_OFFSET(0xA4A4D20)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_REDIRECTLIMIT_OFFSET UNITYSDK_OFFSET(0xA4A4D60)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0xA4A4DA0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0xA4A4DF0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADER_OFFSET UNITYSDK_OFFSET(0xA4A4F80)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERKEYS_OFFSET UNITYSDK_OFFSET(0xA4A4FC0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERS_OFFSET UNITYSDK_OFFSET(0xA4A5000)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0xA4A5200)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_UPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0xA4A4120)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_UPLOADHANDLER_OFFSET UNITYSDK_OFFSET(0xA4A3CC0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETDOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0xA4A5240)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0xA4A4110)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DOWNLOADHANDLER_OFFSET UNITYSDK_OFFSET(0xA4A3BA0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCERTIFICATEHANDLER_OFFSET UNITYSDK_OFFSET(0xA4A5280)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_CERTIFICATEHANDLER_OFFSET UNITYSDK_OFFSET(0xA4A4130)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_CERTIFICATEHANDLER_OFFSET UNITYSDK_OFFSET(0xA4A52C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETTIMEOUTMSEC_OFFSET UNITYSDK_OFFSET(0xA4A53E0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0xA4A5420)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_OFFSET UNITYSDK_OFFSET(0xA4A5590)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_HEAD_OFFSET UNITYSDK_OFFSET(0xA4A56A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_OFFSET UNITYSDK_OFFSET(0xA4A5710)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_OFFSET UNITYSDK_OFFSET(0xA4A5790)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_OFFSET UNITYSDK_OFFSET(0xA4A5A40)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_OFFSET UNITYSDK_OFFSET(0xA4A5AC0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_OFFSET UNITYSDK_OFFSET(0xA4A5DB0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_OFFSET UNITYSDK_OFFSET(0xA4A5DD0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequest_TypeDefinitionIndex = 37426;

	class UnityWebRequest : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::UnityEngine::Networking::DownloadHandler* m_DownloadHandler; // 0x18
		::UnityEngine::Networking::UploadHandler* m_UploadHandler; // 0x20
		::UnityEngine::Networking::CertificateHandler* m_CertificateHandler; // 0x28
		::System::Uri* m_Uri; // 0x30
		::System::String* kHttpVerbGET; // 0x0
		::System::String* kHttpVerbHEAD; // 0x0
		::System::String* kHttpVerbPOST; // 0x0
		::System::String* kHttpVerbPUT; // 0x0
		::System::String* kHttpVerbCREATE; // 0x0
		::System::String* kHttpVerbDELETE; // 0x0
		::System::Boolean _disposeCertificateHandlerOnDispose_k__BackingField; // 0x38
		::System::Boolean _disposeDownloadHandlerOnDispose_k__BackingField; // 0x39
		::System::Boolean _disposeUploadHandlerOnDispose_k__BackingField; // 0x3A

		::System::String* GetWebErrorString(UnityWebRequestError* arg)
		{
			return (return (::System::String*(*)(UnityWebRequestError*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETWEBERRORSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetHTTPStatusString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETHTTPSTATUSSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_disposeCertificateHandlerOnDispose()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET))(nullptr);
		}

		::System::Void set_disposeCertificateHandlerOnDispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSECERTIFICATEHANDLERONDISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_disposeDownloadHandlerOnDispose()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET))(nullptr);
		}

		::System::Void set_disposeDownloadHandlerOnDispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEDOWNLOADHANDLERONDISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_disposeUploadHandlerOnDispose()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET))(nullptr);
		}

		::System::Void set_disposeUploadHandlerOnDispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DISPOSEUPLOADHANDLERONDISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Create()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_CREATE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_RELEASE_OFFSET))(nullptr);
		}

		::System::Void InternalDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALDESTROY_OFFSET))(nullptr);
		}

		::System::Void InternalSetDefaults()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETDEFAULTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::UnityEngine::Networking::DownloadHandler* arg, ::UnityEngine::Networking::UploadHandler* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::Networking::DownloadHandler*, ::UnityEngine::Networking::UploadHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_.CTOR_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void DisposeHandlers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_DISPOSEHANDLERS_OFFSET))(nullptr);
		}

		::UnityEngine::Networking::UnityWebRequestAsyncOperation* BeginWebRequest()
		{
			return (return (::UnityEngine::Networking::UnityWebRequestAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_BEGINWEBREQUEST_OFFSET))(nullptr);
		}

		::UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequest()
		{
			return (return (::UnityEngine::Networking::UnityWebRequestAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SENDWEBREQUEST_OFFSET))(nullptr);
		}

		::System::Void Abort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ABORT_OFFSET))(nullptr);
		}

		UnityWebRequestError* SetMethod(UnityWebRequestMethod* arg)
		{
			return (return (UnityWebRequestError*(*)(UnityWebRequestMethod*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void InternalSetMethod(UnityWebRequestMethod* arg)
		{
			((::System::Void(*)(UnityWebRequestMethod*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETMETHOD_OFFSET))(arg, nullptr);
		}

		UnityWebRequestError* SetCustomMethod(::System::String* str)
		{
			return (return (UnityWebRequestError*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCUSTOMMETHOD_OFFSET))(str, nullptr);
		}

		::System::Void InternalSetCustomMethod(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETCUSTOMMETHOD_OFFSET))(str, nullptr);
		}

		UnityWebRequestMethod* GetMethod()
		{
			return (return (UnityWebRequestMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETMETHOD_OFFSET))(nullptr);
		}

		::System::String* GetCustomMethod()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETCUSTOMMETHOD_OFFSET))(nullptr);
		}

		::System::String* get_method()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Void set_method(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_METHOD_OFFSET))(str, nullptr);
		}

		UnityWebRequestError* GetError()
		{
			return (return (UnityWebRequestError*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETERROR_OFFSET))(nullptr);
		}

		::System::String* get_error()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ERROR_OFFSET))(nullptr);
		}

		::System::String* get_url()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_URL_OFFSET))(nullptr);
		}

		::System::Void set_url(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_URL_OFFSET))(str, nullptr);
		}

		::System::String* GetUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETURL_OFFSET))(nullptr);
		}

		UnityWebRequestError* SetUrl(::System::String* str)
		{
			return (return (UnityWebRequestError*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETURL_OFFSET))(str, nullptr);
		}

		::System::Void InternalSetUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETURL_OFFSET))(str, nullptr);
		}

		::System::Int64 get_responseCode()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_RESPONSECODE_OFFSET))(nullptr);
		}

		::System::Boolean IsExecuting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_ISEXECUTING_OFFSET))(nullptr);
		}

		::System::Boolean get_isModifiable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISMODIFIABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_isDone()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISDONE_OFFSET))(nullptr);
		}

		::System::Boolean get_isNetworkError()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISNETWORKERROR_OFFSET))(nullptr);
		}

		::System::Boolean get_isHttpError()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_ISHTTPERROR_OFFSET))(nullptr);
		}

		Result* get_result()
		{
			return (return (Result*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_RESULT_OFFSET))(nullptr);
		}

		::System::Single GetDownloadProgress()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETDOWNLOADPROGRESS_OFFSET))(nullptr);
		}

		::System::Single get_downloadProgress()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DOWNLOADPROGRESS_OFFSET))(nullptr);
		}

		::System::UInt64 get_downloadedBytes()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DOWNLOADEDBYTES_OFFSET))(nullptr);
		}

		::System::Void SetRedirectLimitFromScripting(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETREDIRECTLIMITFROMSCRIPTING_OFFSET))(arg, nullptr);
		}

		::System::Void set_redirectLimit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_REDIRECTLIMIT_OFFSET))(arg, nullptr);
		}

		UnityWebRequestError* InternalSetRequestHeader(::System::String* str, ::System::String* str)
		{
			return (return (UnityWebRequestError*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_INTERNALSETREQUESTHEADER_OFFSET))(str, str, nullptr);
		}

		::System::Void SetRequestHeader(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETREQUESTHEADER_OFFSET))(str, str, nullptr);
		}

		::System::String* GetResponseHeader(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADER_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetResponseHeaderKeys()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERKEYS_OFFSET))(nullptr);
		}

		Il2CppObject* GetResponseHeaders()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GETRESPONSEHEADERS_OFFSET))(nullptr);
		}

		UnityWebRequestError* SetUploadHandler(::UnityEngine::Networking::UploadHandler* arg)
		{
			return (return (UnityWebRequestError*(*)(::UnityEngine::Networking::UploadHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPLOADHANDLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::UploadHandler* get_uploadHandler()
		{
			return (return (::UnityEngine::Networking::UploadHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_UPLOADHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_uploadHandler(::UnityEngine::Networking::UploadHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UploadHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_UPLOADHANDLER_OFFSET))(arg, nullptr);
		}

		UnityWebRequestError* SetDownloadHandler(::UnityEngine::Networking::DownloadHandler* arg)
		{
			return (return (UnityWebRequestError*(*)(::UnityEngine::Networking::DownloadHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETDOWNLOADHANDLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::DownloadHandler* get_downloadHandler()
		{
			return (return (::UnityEngine::Networking::DownloadHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_DOWNLOADHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_downloadHandler(::UnityEngine::Networking::DownloadHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::DownloadHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_DOWNLOADHANDLER_OFFSET))(arg, nullptr);
		}

		UnityWebRequestError* SetCertificateHandler(::UnityEngine::Networking::CertificateHandler* arg)
		{
			return (return (UnityWebRequestError*(*)(::UnityEngine::Networking::CertificateHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETCERTIFICATEHANDLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::CertificateHandler* get_certificateHandler()
		{
			return (return (::UnityEngine::Networking::CertificateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_CERTIFICATEHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_certificateHandler(::UnityEngine::Networking::CertificateHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::CertificateHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_CERTIFICATEHANDLER_OFFSET))(arg, nullptr);
		}

		UnityWebRequestError* SetTimeoutMsec(::System::Int32 arg)
		{
			return (return (UnityWebRequestError*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETTIMEOUTMSEC_OFFSET))(arg, nullptr);
		}

		::System::Void set_timeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* Get(::System::String* str)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_GET_OFFSET))(str, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* Head(::System::String* str)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_HEAD_OFFSET))(str, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* Post(::System::String* str, ::System::String* str)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_OFFSET))(str, str, nullptr);
		}

		::System::Void SetupPost(::UnityEngine::Networking::UnityWebRequest* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* Post(::System::String* str, ::UnityEngine::WWWForm* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::UnityEngine::WWWForm*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_POST_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetupPost(::UnityEngine::Networking::UnityWebRequest* arg, ::UnityEngine::WWWForm* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::UnityEngine::WWWForm*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_SETUPPOST_OFFSET))(arg, arg, nullptr);
		}

		::System::String* UnEscapeURL(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_OFFSET))(str, nullptr);
		}

		::System::String* UnEscapeURL(::System::String* str, ::System::Text::Encoding* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUEST_UNESCAPEURL_OFFSET))(str, arg, nullptr);
		}

	};
}

