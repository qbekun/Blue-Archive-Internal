#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HTTPUTILITIES_ISSUPPORTEDSECURESCHEME_OFFSET UNITYSDK_OFFSET(0x980D430)
#define SYSTEM_NET_HTTP_HTTPUTILITIES_ISSECUREWEBSOCKETSCHEME_OFFSET UNITYSDK_OFFSET(0x980D4C0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpUtilities_TypeDefinitionIndex = 36642;

	class HttpUtilities : public Il2CppObject
	{
	public:
		::System::Boolean IsSupportedSecureScheme(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPUTILITIES_ISSUPPORTEDSECURESCHEME_OFFSET))(str, nullptr);
		}

		::System::Boolean IsSecureWebSocketScheme(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPUTILITIES_ISSECUREWEBSOCKETSCHEME_OFFSET))(str, nullptr);
		}

	};
}

