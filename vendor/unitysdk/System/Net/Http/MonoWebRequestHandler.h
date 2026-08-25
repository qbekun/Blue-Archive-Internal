#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x980D560)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_ENSUREMODIFIABILITY_OFFSET UNITYSDK_OFFSET(0x980E0E0)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_GET_COOKIECONTAINER_OFFSET UNITYSDK_OFFSET(0x980E150)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_GET_MAXREQUESTCONTENTBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x980E1C0)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_GET_SSLOPTIONS_OFFSET UNITYSDK_OFFSET(0x980E1D0)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_SET_SSLOPTIONS_OFFSET UNITYSDK_OFFSET(0x980E240)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x980E2C0)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x980E2E0)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_GETCONNECTIONKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x980E360)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_CREATEWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x980E510)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_CREATERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x980F610)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_METHODHASBODY_OFFSET UNITYSDK_OFFSET(0x980FD20)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x980FE20)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_SYSTEM.NET.HTTP.IMONOHTTPCLIENTHANDLER.SETWEBREQUESTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x980FF90)
#define SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER__CREATEWEBREQUEST_B__96_0_OFFSET UNITYSDK_OFFSET(0x980FFF0)

namespace System::Net::Http
{
	inline static constexpr unsigned int MonoWebRequestHandler_TypeDefinitionIndex = 36648;

	class MonoWebRequestHandler : public Il2CppObject
	{
	public:
		::System::Int64 groupCounter; // 0x0
		::System::Boolean allowAutoRedirect; // 0x10
		::System::Net::DecompressionMethods* automaticDecompression; // 0x14
		::System::Net::CookieContainer* cookieContainer; // 0x18
		::System::Net::ICredentials* credentials; // 0x20
		::System::Int32 maxAutomaticRedirections; // 0x28
		::System::Int64 maxRequestContentBufferSize; // 0x30
		::System::Boolean preAuthenticate; // 0x38
		::System::Net::IWebProxy* proxy; // 0x40
		::System::Boolean useCookies; // 0x48
		::System::Boolean useProxy; // 0x49
		::System::Net::Security::SslClientAuthenticationOptions* sslOptions; // 0x50
		::System::Boolean allowPipelining; // 0x58
		::System::Net::Cache::RequestCachePolicy* cachePolicy; // 0x60
		::System::Net::Security::AuthenticationLevel* authenticationLevel; // 0x68
		::System::TimeSpan* continueTimeout; // 0x70
		::System::Security::Principal::TokenImpersonationLevel* impersonationLevel; // 0x78
		::System::Int32 maxResponseHeadersLength; // 0x7C
		::System::Int32 readWriteTimeout; // 0x80
		::System::Net::Security::RemoteCertificateValidationCallback* serverCertificateValidationCallback; // 0x88
		::System::Boolean unsafeAuthenticatedConnectionSharing; // 0x90
		::System::Boolean sentRequest; // 0x91
		::System::String* connectionGroupName; // 0x98
		Il2CppObject* timeout; // 0xA0
		::System::Boolean disposed; // 0xB0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void EnsureModifiability()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_ENSUREMODIFIABILITY_OFFSET))(nullptr);
		}

		::System::Net::CookieContainer* get_CookieContainer()
		{
			return (return (::System::Net::CookieContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_GET_COOKIECONTAINER_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxRequestContentBufferSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_GET_MAXREQUESTCONTENTBUFFERSIZE_OFFSET))(nullptr);
		}

		::System::Net::Security::SslClientAuthenticationOptions* get_SslOptions()
		{
			return (return (::System::Net::Security::SslClientAuthenticationOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_GET_SSLOPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_SslOptions(::System::Net::Security::SslClientAuthenticationOptions* arg)
		{
			((::System::Void(*)(::System::Net::Security::SslClientAuthenticationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_SET_SSLOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetConnectionKeepAlive(::System::Net::Http::Headers::HttpRequestHeaders* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::HttpRequestHeaders*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_GETCONNECTIONKEEPALIVE_OFFSET))(arg, nullptr);
		}

		::System::Net::HttpWebRequest* CreateWebRequest(::System::Net::Http::HttpRequestMessage* arg)
		{
			return (return (::System::Net::HttpWebRequest*(*)(::System::Net::Http::HttpRequestMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_CREATEWEBREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Net::Http::HttpResponseMessage* CreateResponseMessage(::System::Net::HttpWebResponse* arg, ::System::Net::Http::HttpRequestMessage* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Net::Http::HttpResponseMessage*(*)(::System::Net::HttpWebResponse*, ::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_CREATERESPONSEMESSAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MethodHasBody(::System::Net::Http::HttpMethod* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::HttpMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_METHODHASBODY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SendAsync(::System::Net::Http::HttpRequestMessage* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_SENDASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Net.Http.IMonoHttpClientHandler.SetWebRequestTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER_SYSTEM.NET.HTTP.IMONOHTTPCLIENTHANDLER.SETWEBREQUESTTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* _CreateWebRequest_b__96_0(::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_MONOWEBREQUESTHANDLER__CREATEWEBREQUEST_B__96_0_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

