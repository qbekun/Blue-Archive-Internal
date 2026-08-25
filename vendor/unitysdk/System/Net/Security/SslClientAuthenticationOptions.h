#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_ALLOWRENEGOTIATION_OFFSET UNITYSDK_OFFSET(0x9AAEDF0)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_LOCALCERTIFICATESELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AAEE00)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_LOCALCERTIFICATESELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AAEE10)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_REMOTECERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AAEE20)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x9AAEE30)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_TARGETHOST_OFFSET UNITYSDK_OFFSET(0x9AAEE40)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9AAEE50)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9AAEE60)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_CERTIFICATEREVOCATIONCHECKMODE_OFFSET UNITYSDK_OFFSET(0x9AAEE70)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_ENCRYPTIONPOLICY_OFFSET UNITYSDK_OFFSET(0x9AAEF10)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_ENABLEDSSLPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x9AAEFB0)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_ENABLEDSSLPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x9AAEFC0)
#define SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAEFD0)

namespace System::Net::Security
{
	inline static constexpr unsigned int SslClientAuthenticationOptions_TypeDefinitionIndex = 29939;

	class SslClientAuthenticationOptions : public Il2CppObject
	{
	public:
		::System::Net::Security::EncryptionPolicy* _encryptionPolicy; // 0x10
		::System::Security::Cryptography::X509Certificates::X509RevocationMode* _checkCertificateRevocation; // 0x14
		::System::Security::Authentication::SslProtocols* _enabledSslProtocols; // 0x18
		::System::Boolean _allowRenegotiation; // 0x1C
		::System::Net::Security::LocalCertificateSelectionCallback* _LocalCertificateSelectionCallback_k__BackingField; // 0x20
		::System::Net::Security::RemoteCertificateValidationCallback* _RemoteCertificateValidationCallback_k__BackingField; // 0x28
		::System::String* _TargetHost_k__BackingField; // 0x30
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _ClientCertificates_k__BackingField; // 0x38

		::System::Boolean get_AllowRenegotiation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_ALLOWRENEGOTIATION_OFFSET))(nullptr);
		}

		::System::Net::Security::LocalCertificateSelectionCallback* get_LocalCertificateSelectionCallback()
		{
			return (return (::System::Net::Security::LocalCertificateSelectionCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_LOCALCERTIFICATESELECTIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_LocalCertificateSelectionCallback(::System::Net::Security::LocalCertificateSelectionCallback* arg)
		{
			((::System::Void(*)(::System::Net::Security::LocalCertificateSelectionCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_LOCALCERTIFICATESELECTIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Net::Security::RemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback()
		{
			return (return (::System::Net::Security::RemoteCertificateValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_REMOTECERTIFICATEVALIDATIONCALLBACK_OFFSET))(nullptr);
		}

		::System::String* get_TargetHost()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_TARGETHOST_OFFSET))(nullptr);
		}

		::System::Void set_TargetHost(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_TARGETHOST_OFFSET))(str, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_CLIENTCERTIFICATES_OFFSET))(nullptr);
		}

		::System::Void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_CLIENTCERTIFICATES_OFFSET))(arg, nullptr);
		}

		::System::Void set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509RevocationMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_CERTIFICATEREVOCATIONCHECKMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy* arg)
		{
			((::System::Void(*)(::System::Net::Security::EncryptionPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_ENCRYPTIONPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Security::Authentication::SslProtocols* get_EnabledSslProtocols()
		{
			return (return (::System::Security::Authentication::SslProtocols*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_GET_ENABLEDSSLPROTOCOLS_OFFSET))(nullptr);
		}

		::System::Void set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols* arg)
		{
			((::System::Void(*)(::System::Security::Authentication::SslProtocols*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_SET_ENABLEDSSLPROTOCOLS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLCLIENTAUTHENTICATIONOPTIONS_.CTOR_OFFSET))(nullptr);
		}

	};
}

