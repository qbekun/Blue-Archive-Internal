#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x980F8F0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x9816250)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x9816260)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x980FAE0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_ISSUCCESSSTATUSCODE_OFFSET UNITYSDK_OFFSET(0x98162C0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_REASONPHRASE_OFFSET UNITYSDK_OFFSET(0x98162E0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_REASONPHRASE_OFFSET UNITYSDK_OFFSET(0x9816300)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_REQUESTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9816310)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x9816320)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x98161F0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9816330)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98163A0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98163C0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_ENSURESUCCESSSTATUSCODE_OFFSET UNITYSDK_OFFSET(0x98163F0)
#define SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98164B0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpResponseMessage_TypeDefinitionIndex = 36664;

	class HttpResponseMessage : public Il2CppObject
	{
	public:
		::System::Net::Http::Headers::HttpResponseHeaders* headers; // 0x10
		::System::String* reasonPhrase; // 0x18
		::System::Net::HttpStatusCode* statusCode; // 0x20
		::System::Version* version; // 0x28
		::System::Boolean disposed; // 0x30
		::System::Net::Http::HttpContent* _Content_k__BackingField; // 0x38
		::System::Net::Http::HttpRequestMessage* _RequestMessage_k__BackingField; // 0x40

		::System::Void .ctor(::System::Net::HttpStatusCode* arg)
		{
			((::System::Void(*)(::System::Net::HttpStatusCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Net::Http::HttpContent* get_Content()
		{
			return (return (::System::Net::Http::HttpContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_CONTENT_OFFSET))(nullptr);
		}

		::System::Void set_Content(::System::Net::Http::HttpContent* arg)
		{
			((::System::Void(*)(::System::Net::Http::HttpContent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_CONTENT_OFFSET))(arg, nullptr);
		}

		::System::Net::Http::Headers::HttpResponseHeaders* get_Headers()
		{
			return (return (::System::Net::Http::Headers::HttpResponseHeaders*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSuccessStatusCode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_ISSUCCESSSTATUSCODE_OFFSET))(nullptr);
		}

		::System::String* get_ReasonPhrase()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_REASONPHRASE_OFFSET))(nullptr);
		}

		::System::Void set_ReasonPhrase(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_REASONPHRASE_OFFSET))(str, nullptr);
		}

		::System::Void set_RequestMessage(::System::Net::Http::HttpRequestMessage* arg)
		{
			((::System::Void(*)(::System::Net::Http::HttpRequestMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_REQUESTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Net::HttpStatusCode* get_StatusCode()
		{
			return (return (::System::Net::HttpStatusCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::Void set_StatusCode(::System::Net::HttpStatusCode* arg)
		{
			((::System::Void(*)(::System::Net::HttpStatusCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_SET_STATUSCODE_OFFSET))(arg, nullptr);
		}

		::System::Version* get_Version()
		{
			return (return (::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Net::Http::HttpResponseMessage* EnsureSuccessStatusCode()
		{
			return (return (::System::Net::Http::HttpResponseMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_ENSURESUCCESSSTATUSCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPRESPONSEMESSAGE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

