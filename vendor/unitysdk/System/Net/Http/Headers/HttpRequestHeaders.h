#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9815D10)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x980E4C0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTIONCLOSE_OFFSET UNITYSDK_OFFSET(0x980F190)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_EXPECTCONTINUE_OFFSET UNITYSDK_OFFSET(0x980F350)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_HOST_OFFSET UNITYSDK_OFFSET(0x980F570)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x9820580)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODINGCHUNKED_OFFSET UNITYSDK_OFFSET(0x9812170)
#define SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_ADDHEADERS_OFFSET UNITYSDK_OFFSET(0x9813510)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpRequestHeaders_TypeDefinitionIndex = 36688;

	class HttpRequestHeaders : public Il2CppObject
	{
	public:
		Il2CppObject* expectContinue; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Connection()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConnectionClose()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_CONNECTIONCLOSE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ExpectContinue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_EXPECTCONTINUE_OFFSET))(nullptr);
		}

		::System::String* get_Host()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_HOST_OFFSET))(nullptr);
		}

		Il2CppObject* get_TransferEncoding()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODING_OFFSET))(nullptr);
		}

		Il2CppObject* get_TransferEncodingChunked()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_GET_TRANSFERENCODINGCHUNKED_OFFSET))(nullptr);
		}

		::System::Void AddHeaders(::System::Net::Http::Headers::HttpRequestHeaders* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::HttpRequestHeaders*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPREQUESTHEADERS_ADDHEADERS_OFFSET))(arg, nullptr);
		}

	};
}

