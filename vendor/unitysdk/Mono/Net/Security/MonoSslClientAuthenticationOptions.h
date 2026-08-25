#pragma once
#include "../../../unitysdk.h"

#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x96D8660)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_SERVERMODE_OFFSET UNITYSDK_OFFSET(0x96D8670)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D4CB0)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_ALLOWRENEGOTIATION_OFFSET UNITYSDK_OFFSET(0x96D8680)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_SET_CERTIFICATEREVOCATIONCHECKMODE_OFFSET UNITYSDK_OFFSET(0x96D86A0)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_SET_ENCRYPTIONPOLICY_OFFSET UNITYSDK_OFFSET(0x96D86C0)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_ENABLEDSSLPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x96D86E0)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_SET_ENABLEDSSLPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x96D8700)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x96D8720)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_SET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x96D8740)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_CLIENTCERTIFICATEREQUIRED_OFFSET UNITYSDK_OFFSET(0x96D8770)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x96D87C0)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_SET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x96D87E0)
#define MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_SERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x96D8810)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MonoSslClientAuthenticationOptions_TypeDefinitionIndex = 29078;

	class MonoSslClientAuthenticationOptions : public Il2CppObject
	{
	public:
		::System::Net::Security::SslClientAuthenticationOptions* _Options_k__BackingField; // 0x18

		::System::Net::Security::SslClientAuthenticationOptions* get_Options()
		{
			return (return (::System::Net::Security::SslClientAuthenticationOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Boolean get_ServerMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_SERVERMODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_AllowRenegotiation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_ALLOWRENEGOTIATION_OFFSET))(nullptr);
		}

		::System::Void set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509RevocationMode*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_SET_CERTIFICATEREVOCATIONCHECKMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy* arg)
		{
			((::System::Void(*)(::System::Net::Security::EncryptionPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_SET_ENCRYPTIONPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Security::Authentication::SslProtocols* get_EnabledSslProtocols()
		{
			return (return (::System::Security::Authentication::SslProtocols*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_ENABLEDSSLPROTOCOLS_OFFSET))(nullptr);
		}

		::System::Void set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols* arg)
		{
			((::System::Void(*)(::System::Security::Authentication::SslProtocols*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_SET_ENABLEDSSLPROTOCOLS_OFFSET))(arg, nullptr);
		}

		::System::String* get_TargetHost()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_TARGETHOST_OFFSET))(nullptr);
		}

		::System::Void set_TargetHost(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_SET_TARGETHOST_OFFSET))(str, nullptr);
		}

		::System::Boolean get_ClientCertificateRequired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_CLIENTCERTIFICATEREQUIRED_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_CLIENTCERTIFICATES_OFFSET))(nullptr);
		}

		::System::Void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_SET_CLIENTCERTIFICATES_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_ServerCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLCLIENTAUTHENTICATIONOPTIONS_GET_SERVERCERTIFICATE_OFFSET))(nullptr);
		}

	};
}

