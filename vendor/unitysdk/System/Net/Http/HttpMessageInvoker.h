#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9812E10)
#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9815530)
#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9812F30)
#define SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x98139F0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpMessageInvoker_TypeDefinitionIndex = 36660;

	class HttpMessageInvoker : public Il2CppObject
	{
	public:
		::System::Net::Http::HttpMessageHandler* handler; // 0x10
		::System::Boolean disposeHandler; // 0x18

		::System::Void .ctor(::System::Net::Http::HttpMessageHandler* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Net::Http::HttpMessageHandler*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_DISPOSE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SendAsync(::System::Net::Http::HttpRequestMessage* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMESSAGEINVOKER_SENDASYNC_OFFSET))(arg, arg, nullptr);
		}

	};
}

