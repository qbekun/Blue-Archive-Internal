#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9813110)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9815BE0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x9815CF0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x9815D00)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x980F0E0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9815D60)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x9815C20)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x9815D70)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x980FC40)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_ISALLOWEDABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x9815D80)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x980F070)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9815ED0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9815EF0)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SETISUSED_OFFSET UNITYSDK_OFFSET(0x9813500)
#define SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9815F20)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpRequestMessage_TypeDefinitionIndex = 36663;

	class HttpRequestMessage : public Il2CppObject
	{
	public:
		::System::Net::Http::Headers::HttpRequestHeaders* headers; // 0x10
		::System::Net::Http::HttpMethod* method; // 0x18
		::System::Version* version; // 0x20
		::System::Uri* uri; // 0x28
		::System::Boolean is_used; // 0x30
		::System::Boolean disposed; // 0x31
		::System::Net::Http::HttpContent* _Content_k__BackingField; // 0x38

		::System::Void .ctor(::System::Net::Http::HttpMethod* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Net::Http::HttpMethod*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Net::Http::HttpMethod* arg, ::System::Uri* arg)
		{
			((::System::Void(*)(::System::Net::Http::HttpMethod*, ::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::Http::HttpContent* get_Content()
		{
			return (return (::System::Net::Http::HttpContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_CONTENT_OFFSET))(nullptr);
		}

		::System::Void set_Content(::System::Net::Http::HttpContent* arg)
		{
			((::System::Void(*)(::System::Net::Http::HttpContent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_CONTENT_OFFSET))(arg, nullptr);
		}

		::System::Net::Http::Headers::HttpRequestHeaders* get_Headers()
		{
			return (return (::System::Net::Http::Headers::HttpRequestHeaders*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Net::Http::HttpMethod* get_Method()
		{
			return (return (::System::Net::Http::HttpMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Void set_Method(::System::Net::Http::HttpMethod* arg)
		{
			((::System::Void(*)(::System::Net::Http::HttpMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_METHOD_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_RequestUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_REQUESTURI_OFFSET))(nullptr);
		}

		::System::Void set_RequestUri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SET_REQUESTURI_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAllowedAbsoluteUri(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_ISALLOWEDABSOLUTEURI_OFFSET))(arg, nullptr);
		}

		::System::Version* get_Version()
		{
			return (return (::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetIsUsed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_SETISUSED_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPREQUESTMESSAGE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

