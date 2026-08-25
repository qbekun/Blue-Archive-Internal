#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SECURITY_CERTIFICATEHELPER_GETELIGIBLECLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AAE930)
#define SYSTEM_NET_SECURITY_CERTIFICATEHELPER_GETELIGIBLECLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AAE9C0)
#define SYSTEM_NET_SECURITY_CERTIFICATEHELPER_ISVALIDCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AAEA60)
#define SYSTEM_NET_SECURITY_CERTIFICATEHELPER_ISVALIDFORCLIENTAUTHENTICATIONEKU_OFFSET UNITYSDK_OFFSET(0x9AAEB70)
#define SYSTEM_NET_SECURITY_CERTIFICATEHELPER_ISVALIDFORDIGITALSIGNATUREUSAGE_OFFSET UNITYSDK_OFFSET(0x9AAEC10)
#define SYSTEM_NET_SECURITY_CERTIFICATEHELPER_GETELIGIBLECLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AAEC30)

namespace System::Net::Security
{
	inline static constexpr unsigned int CertificateHelper_TypeDefinitionIndex = 29938;

	class CertificateHelper : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509Certificate2* GetEligibleClientCertificate(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_CERTIFICATEHELPER_GETELIGIBLECLIENTCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* GetEligibleClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_CERTIFICATEHELPER_GETELIGIBLECLIENTCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_CERTIFICATEHELPER_ISVALIDCLIENTCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidForClientAuthenticationEKU(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_CERTIFICATEHELPER_ISVALIDFORCLIENTAUTHENTICATIONEKU_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidForDigitalSignatureUsage(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_CERTIFICATEHELPER_ISVALIDFORDIGITALSIGNATUREUSAGE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* GetEligibleClientCertificate()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_CERTIFICATEHELPER_GETELIGIBLECLIENTCERTIFICATE_OFFSET))(nullptr);
		}

	};
}

