#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_HTTPWEBRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A75670)
#define SYSTEM_NET_HTTPWEBRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A75680)
#define SYSTEM_NET_HTTPWEBRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A74CE0)
#define SYSTEM_NET_HTTPWEBRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A759B0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9A75D60)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_RESPONSEURI_OFFSET UNITYSDK_OFFSET(0x9A75D70)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x9A75E10)
#define SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9A75E20)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET UNITYSDK_OFFSET(0x9A75E40)
#define SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A75ED0)
#define SYSTEM_NET_HTTPWEBRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A75F00)
#define SYSTEM_NET_HTTPWEBRESPONSE_CLOSE_OFFSET UNITYSDK_OFFSET(0x9A76070)
#define SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A760B0)
#define SYSTEM_NET_HTTPWEBRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A760D0)
#define SYSTEM_NET_HTTPWEBRESPONSE_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x9A75D90)
#define SYSTEM_NET_HTTPWEBRESPONSE_FILLCOOKIES_OFFSET UNITYSDK_OFFSET(0x9A75760)

namespace System::Net
{
	inline static constexpr unsigned int HttpWebResponse_TypeDefinitionIndex = 29780;

	class HttpWebResponse : public Il2CppObject
	{
	public:
		::System::Uri* uri; // 0x20
		::System::Net::WebHeaderCollection* webHeaders; // 0x28
		::System::Net::CookieCollection* cookieCollection; // 0x30
		::System::String* method; // 0x38
		::System::Version* version; // 0x40
		::System::Net::HttpStatusCode* statusCode; // 0x48
		::System::String* statusDescription; // 0x50
		::System::Int64 contentLength; // 0x58
		::System::String* contentType; // 0x60
		::System::Net::CookieContainer* cookie_container; // 0x68
		::System::Boolean disposed; // 0x70
		::System::IO::Stream* stream; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::System::String* str, ::System::Net::HttpStatusCode* arg, ::System::Net::WebHeaderCollection* arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::String*, ::System::Net::HttpStatusCode*, ::System::Net::WebHeaderCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::System::String* str, ::System::Net::WebResponseStream* arg, ::System::Net::CookieContainer* arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::String*, ::System::Net::WebResponseStream*, ::System::Net::CookieContainer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return (return (::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Uri* get_ResponseUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_RESPONSEURI_OFFSET))(nullptr);
		}

		::System::Net::HttpStatusCode* get_StatusCode()
		{
			return (return (::System::Net::HttpStatusCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::String* get_StatusDescription()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GET_STATUSDESCRIPTION_OFFSET))(nullptr);
		}

		::System::IO::Stream* GetResponseStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETRESPONSESTREAM_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_CLOSE_OFFSET))(nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_CHECKDISPOSED_OFFSET))(nullptr);
		}

		::System::Void FillCookies()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBRESPONSE_FILLCOOKIES_OFFSET))(nullptr);
		}

	};
}

