#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_CREATEDEFAULTHANDLER_OFFSET UNITYSDK_OFFSET(0x980D510)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x980D760)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x980D7E0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x980DAE0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_THROWFORMODIFIEDMANAGEDSSLOPTIONSIFSTARTED_OFFSET UNITYSDK_OFFSET(0x980DBA0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_GET_CLIENTCERTIFICATEOPTIONS_OFFSET UNITYSDK_OFFSET(0x980DCB0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_SET_CLIENTCERTIFICATEOPTIONS_OFFSET UNITYSDK_OFFSET(0x980D830)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x980DCC0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_SETWEBREQUESTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x980DEC0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x980DF70)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__SET_CLIENTCERTIFICATEOPTIONS_B__23_0_OFFSET UNITYSDK_OFFSET(0x980E020)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpClientHandler_TypeDefinitionIndex = 36644;

	class HttpClientHandler : public Il2CppObject
	{
	public:
		::System::Net::Http::IMonoHttpClientHandler* _delegatingHandler; // 0x10
		::System::Net::Http::ClientCertificateOption* _clientCertificateOptions; // 0x18

		::System::Net::Http::IMonoHttpClientHandler* CreateDefaultHandler()
		{
			return (return (::System::Net::Http::IMonoHttpClientHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_CREATEDEFAULTHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::Http::IMonoHttpClientHandler* arg)
		{
			((::System::Void(*)(::System::Net::Http::IMonoHttpClientHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowForModifiedManagedSslOptionsIfStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_THROWFORMODIFIEDMANAGEDSSLOPTIONSIFSTARTED_OFFSET))(nullptr);
		}

		::System::Net::Http::ClientCertificateOption* get_ClientCertificateOptions()
		{
			return (return (::System::Net::Http::ClientCertificateOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_GET_CLIENTCERTIFICATEOPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_ClientCertificateOptions(::System::Net::Http::ClientCertificateOption* arg)
		{
			((::System::Void(*)(::System::Net::Http::ClientCertificateOption*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_SET_CLIENTCERTIFICATEOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_GET_CLIENTCERTIFICATES_OFFSET))(nullptr);
		}

		::System::Void SetWebRequestTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_SETWEBREQUESTTIMEOUT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SendAsync(::System::Net::Http::HttpRequestMessage* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER_SENDASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* _set_ClientCertificateOptions_b__23_0(::System::Object* arg, ::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::System::Object*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER__SET_CLIENTCERTIFICATEOPTIONS_B__23_0_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

	};
}

