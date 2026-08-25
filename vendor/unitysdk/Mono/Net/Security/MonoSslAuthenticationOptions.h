#pragma once
#include "../../../unitysdk.h"

#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_SERVERMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_ALLOWRENEGOTIATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_ENABLEDSSLPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_SET_ENABLEDSSLPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_SET_ENCRYPTIONPOLICY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_SET_CERTIFICATEREVOCATIONCHECKMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_SET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_SERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_SET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_CLIENTCERTIFICATEREQUIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_SERVERCERTSELECTIONDELEGATE_OFFSET UNITYSDK_OFFSET(0x96D8640)
#define MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D8650)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MonoSslAuthenticationOptions_TypeDefinitionIndex = 29077;

	class MonoSslAuthenticationOptions : public Il2CppObject
	{
	public:
		::System::Net::Security::ServerCertSelectionCallback* _ServerCertSelectionDelegate_k__BackingField; // 0x10

		::System::Boolean get_ServerMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_SERVERMODE_OFFSET))(nullptr);
		}

		::System::Boolean get_AllowRenegotiation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_ALLOWRENEGOTIATION_OFFSET))(nullptr);
		}

		::System::Security::Authentication::SslProtocols* get_EnabledSslProtocols()
		{
			return (return (::System::Security::Authentication::SslProtocols*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_ENABLEDSSLPROTOCOLS_OFFSET))(nullptr);
		}

		::System::Void set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols* arg)
		{
			((::System::Void(*)(::System::Security::Authentication::SslProtocols*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_SET_ENABLEDSSLPROTOCOLS_OFFSET))(arg, nullptr);
		}

		::System::Void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy* arg)
		{
			((::System::Void(*)(::System::Net::Security::EncryptionPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_SET_ENCRYPTIONPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509RevocationMode*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_SET_CERTIFICATEREVOCATIONCHECKMODE_OFFSET))(arg, nullptr);
		}

		::System::String* get_TargetHost()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_TARGETHOST_OFFSET))(nullptr);
		}

		::System::Void set_TargetHost(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_SET_TARGETHOST_OFFSET))(str, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_ServerCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_SERVERCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_CLIENTCERTIFICATES_OFFSET))(nullptr);
		}

		::System::Void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_SET_CLIENTCERTIFICATES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ClientCertificateRequired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_CLIENTCERTIFICATEREQUIRED_OFFSET))(nullptr);
		}

		::System::Net::Security::ServerCertSelectionCallback* get_ServerCertSelectionDelegate()
		{
			return (return (::System::Net::Security::ServerCertSelectionCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_GET_SERVERCERTSELECTIONDELEGATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOSSLAUTHENTICATIONOPTIONS_.CTOR_OFFSET))(nullptr);
		}

	};
}

