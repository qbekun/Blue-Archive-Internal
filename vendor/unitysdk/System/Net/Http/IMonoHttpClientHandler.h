#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_IMONOHTTPCLIENTHANDLER_GET_SSLOPTIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_IMONOHTTPCLIENTHANDLER_SET_SSLOPTIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_IMONOHTTPCLIENTHANDLER_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_IMONOHTTPCLIENTHANDLER_SETWEBREQUESTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net::Http
{
	inline static constexpr unsigned int IMonoHttpClientHandler_TypeDefinitionIndex = 36645;

	class IMonoHttpClientHandler : public Il2CppObject
	{
	public:
		::System::Net::Security::SslClientAuthenticationOptions* get_SslOptions()
		{
			return (return (::System::Net::Security::SslClientAuthenticationOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_IMONOHTTPCLIENTHANDLER_GET_SSLOPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_SslOptions(::System::Net::Security::SslClientAuthenticationOptions* arg)
		{
			((::System::Void(*)(::System::Net::Security::SslClientAuthenticationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_IMONOHTTPCLIENTHANDLER_SET_SSLOPTIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SendAsync(::System::Net::Http::HttpRequestMessage* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_IMONOHTTPCLIENTHANDLER_SENDASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetWebRequestTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_IMONOHTTPCLIENTHANDLER_SETWEBREQUESTTIMEOUT_OFFSET))(arg, nullptr);
		}

	};
}

