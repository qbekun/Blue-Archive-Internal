#pragma once
#include "../../unitysdk.h"

#define MONO_UNITY_CERTHELPER_ADDCERTIFICATESTONATIVECHAIN_OFFSET UNITYSDK_OFFSET(0x96C9620)
#define MONO_UNITY_CERTHELPER_ADDCERTIFICATETONATIVECHAIN_OFFSET UNITYSDK_OFFSET(0x96C9800)

namespace Mono::Unity
{
	inline static constexpr unsigned int CertHelper_TypeDefinitionIndex = 28994;

	class CertHelper : public Il2CppObject
	{
	public:
		::System::Void AddCertificatesToNativeChain(::System::Object** arg, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_ADDCERTIFICATESTONATIVECHAIN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddCertificateToNativeChain(::System::Object** arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_ADDCERTIFICATETONATIVECHAIN_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

