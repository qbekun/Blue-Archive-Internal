#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HTTPCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9812CF0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9812D50)
#define SYSTEM_NET_HTTP_HTTPCLIENT_GET_MAXRESPONSECONTENTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x9812EA0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9812EB0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_POSTASYNC_OFFSET UNITYSDK_OFFSET(0x9812F90)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x98131D0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x98134E0)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x9813230)
#define SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNCWORKER_OFFSET UNITYSDK_OFFSET(0x9813800)
#define SYSTEM_NET_HTTP_HTTPCLIENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9813950)
#define SYSTEM_NET_HTTP_HTTPCLIENT___N__0_OFFSET UNITYSDK_OFFSET(0x98139C0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpClient_TypeDefinitionIndex = 36653;

	class HttpClient : public Il2CppObject
	{
	public:
		::System::TimeSpan* TimeoutDefault; // 0x0
		::System::Uri* base_address; // 0x20
		::System::Threading::CancellationTokenSource* cts; // 0x28
		::System::Boolean disposed; // 0x30
		::System::Net::Http::Headers::HttpRequestHeaders* headers; // 0x38
		::System::Int64 buffer_size; // 0x40
		::System::TimeSpan* timeout; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::Http::HttpMessageHandler* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Net::Http::HttpMessageHandler*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_MaxResponseContentBufferSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_GET_MAXRESPONSECONTENTBUFFERSIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_DISPOSE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* PostAsync(::System::String* str, ::System::Net::Http::HttpContent* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Net::Http::HttpContent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_POSTASYNC_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* SendAsync(::System::Net::Http::HttpRequestMessage* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::HttpRequestMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SendAsync(::System::Net::Http::HttpRequestMessage* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SendAsync(::System::Net::Http::HttpRequestMessage* arg, ::System::Net::Http::HttpCompletionOption* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* SendAsyncWorker(::System::Net::Http::HttpRequestMessage* arg, ::System::Net::Http::HttpCompletionOption* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::HttpRequestMessage*, ::System::Net::Http::HttpCompletionOption*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_SENDASYNCWORKER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* __n__0(::System::Net::Http::HttpRequestMessage* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENT___N__0_OFFSET))(arg, arg, nullptr);
		}

	};
}

