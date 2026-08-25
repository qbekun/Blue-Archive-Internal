#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9815510)
#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x980DB90)
#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x980D820)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpMessageHandler_TypeDefinitionIndex = 36659;

	class HttpMessageHandler : public Il2CppObject
	{
	public:
		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_DISPOSE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SendAsync(::System::Net::Http::HttpRequestMessage* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_SENDASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

