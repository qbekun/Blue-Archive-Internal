#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_FILEWEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A5F6B0)
#define SYSTEM_NET_FILEWEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A5F8A0)
#define SYSTEM_NET_FILEWEBREQUEST_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A5FC80)
#define SYSTEM_NET_FILEWEBREQUEST_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A5FCB0)
#define SYSTEM_NET_FILEWEBREQUEST_GET_ABORTED_OFFSET UNITYSDK_OFFSET(0x9A5FEE0)
#define SYSTEM_NET_FILEWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x9A5FEF0)
#define SYSTEM_NET_FILEWEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9A5FF00)
#define SYSTEM_NET_FILEWEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9A5FF10)
#define SYSTEM_NET_FILEWEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A5FFA0)
#define SYSTEM_NET_FILEWEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A5FFB0)
#define SYSTEM_NET_FILEWEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9A5FFC0)
#define SYSTEM_NET_FILEWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9A5FFD0)
#define SYSTEM_NET_FILEWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x9A5FFE0)
#define SYSTEM_NET_FILEWEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A600C0)
#define SYSTEM_NET_FILEWEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x9A600D0)
#define SYSTEM_NET_FILEWEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x9A600E0)
#define SYSTEM_NET_FILEWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x9A600F0)
#define SYSTEM_NET_FILEWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x9A60100)
#define SYSTEM_NET_FILEWEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x9A60190)
#define SYSTEM_NET_FILEWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x9A601A0)
#define SYSTEM_NET_FILEWEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9A606A0)
#define SYSTEM_NET_FILEWEBREQUEST_CANGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x9A60640)
#define SYSTEM_NET_FILEWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x9A609F0)
#define SYSTEM_NET_FILEWEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9A60CB0)
#define SYSTEM_NET_FILEWEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9A60F70)
#define SYSTEM_NET_FILEWEBREQUEST_GETREQUESTSTREAMCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A61360)
#define SYSTEM_NET_FILEWEBREQUEST_GETRESPONSECALLBACK_OFFSET UNITYSDK_OFFSET(0x9A61710)
#define SYSTEM_NET_FILEWEBREQUEST_UNBLOCKREADER_OFFSET UNITYSDK_OFFSET(0x9A61FA0)
#define SYSTEM_NET_FILEWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A620B0)
#define SYSTEM_NET_FILEWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x9A620E0)
#define SYSTEM_NET_FILEWEBREQUEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A62500)

namespace System::Net
{
	inline static constexpr unsigned int FileWebRequest_TypeDefinitionIndex = 29741;

	class FileWebRequest : public Il2CppObject
	{
	public:
		::System::Threading::WaitCallback* s_GetRequestStreamCallback; // 0x0
		::System::Threading::WaitCallback* s_GetResponseCallback; // 0x8
		::System::String* m_connectionGroupName; // 0x38
		::System::Int64 m_contentLength; // 0x40
		::System::Net::ICredentials* m_credentials; // 0x48
		::System::IO::FileAccess* m_fileAccess; // 0x50
		::System::Net::WebHeaderCollection* m_headers; // 0x58
		::System::String* m_method; // 0x60
		::System::Boolean m_preauthenticate; // 0x68
		::System::Net::IWebProxy* m_proxy; // 0x70
		::System::Threading::ManualResetEvent* m_readerEvent; // 0x78
		::System::Boolean m_readPending; // 0x80
		::System::Net::WebResponse* m_response; // 0x88
		::System::IO::Stream* m_stream; // 0x90
		::System::Boolean m_syncHint; // 0x98
		::System::Int32 m_timeout; // 0x9C
		::System::Uri* m_uri; // 0xA0
		::System::Boolean m_writePending; // 0xA8
		::System::Boolean m_writing; // 0xA9
		::System::Net::LazyAsyncResult* m_WriteAResult; // 0xB0
		::System::Net::LazyAsyncResult* m_ReadAResult; // 0xB8
		::System::Int32 m_Aborted; // 0xC0

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_Aborted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_ABORTED_OFFSET))(nullptr);
		}

		::System::Void set_ConnectionGroupName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_ContentLength()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_CONTENTLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_ContentLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_CONTENTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return (return (::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_CREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* arg)
		{
			((::System::Void(*)(::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_CREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return (return (::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::String* get_Method()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Void set_Method(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_METHOD_OFFSET))(str, nullptr);
		}

		::System::Void set_PreAuthenticate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_PREAUTHENTICATE_OFFSET))(arg, nullptr);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return (return (::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_PROXY_OFFSET))(nullptr);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* arg)
		{
			((::System::Void(*)(::System::Net::IWebProxy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_PROXY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Timeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_Timeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_RequestUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_REQUESTURI_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_BEGINGETRESPONSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanGetRequestStream()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_CANGETREQUESTSTREAM_OFFSET))(nullptr);
		}

		::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* arg)
		{
			return (return (::System::Net::WebResponse*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_ENDGETRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Net::WebResponse* GetResponse()
		{
			return (return (::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GETRESPONSE_OFFSET))(nullptr);
		}

		::System::Void GetRequestStreamCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GETREQUESTSTREAMCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void GetResponseCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GETRESPONSECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void UnblockReader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_UNBLOCKREADER_OFFSET))(nullptr);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void Abort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_ABORT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUEST_.CCTOR_OFFSET))(nullptr);
		}

	};
}

