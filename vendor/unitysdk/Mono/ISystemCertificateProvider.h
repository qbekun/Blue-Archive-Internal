#pragma once
#include "../unitysdk.h"

namespace Mono { class CertificateImportFlags; }
namespace Microsoft::Win32::SafeHandles { class SafePasswordHandle; }

#define MONO_ISYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_ISYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_ISYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Mono
{
	inline static constexpr unsigned int ISystemCertificateProvider_TypeDefinitionIndex = 23567;

	class ISystemCertificateProvider : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Il2CppArray<::System::Object*>* arg, ::Mono::CertificateImportFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Object*>*, ::Mono::CertificateImportFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_ISYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg, ::Mono::CertificateImportFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::Mono::CertificateImportFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_ISYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::Mono::CertificateImportFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::CertificateImportFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_ISYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET))(arg, arg, nullptr);
		}

	};
}

