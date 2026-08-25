#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9814290)
#define SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9812320)
#define SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x9815320)
#define SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x9816C70)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpContentHeaders_TypeDefinitionIndex = 36681;

	class HttpContentHeaders : public Il2CppObject
	{
	public:
		::System::Net::Http::HttpContent* content; // 0x20

		::System::Void .ctor(::System::Net::Http::HttpContent* arg)
		{
			((::System::Void(*)(::System::Net::Http::HttpContent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ContentLength()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_GET_CONTENTLENGTH_OFFSET))(nullptr);
		}

		::System::Net::Http::Headers::MediaTypeHeaderValue* get_ContentType()
		{
			return (return (::System::Net::Http::Headers::MediaTypeHeaderValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::System::Net::Http::Headers::MediaTypeHeaderValue* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::MediaTypeHeaderValue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPCONTENTHEADERS_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

	};
}

