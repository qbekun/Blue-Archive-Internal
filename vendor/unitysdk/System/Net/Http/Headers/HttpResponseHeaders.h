#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_HTTPRESPONSEHEADERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9816270)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpResponseHeaders_TypeDefinitionIndex = 36689;

	class HttpResponseHeaders : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPRESPONSEHEADERS_.CTOR_OFFSET))(nullptr);
		}

	};
}

