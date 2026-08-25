#pragma once
#include "../unitysdk.h"

namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono { class X509PalImpl; }
namespace Mono { class CertificateImportFlags; }
namespace Microsoft::Win32::SafeHandles { class SafePasswordHandle; }

#define MONO_SYSTEMCERTIFICATEPROVIDER_GETX509PAL_OFFSET UNITYSDK_OFFSET(0x96C7D00)
#define MONO_SYSTEMCERTIFICATEPROVIDER_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x96C7FC0)
#define MONO_SYSTEMCERTIFICATEPROVIDER_GET_X509PAL_OFFSET UNITYSDK_OFFSET(0x96C8180)
#define MONO_SYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET UNITYSDK_OFFSET(0x96C81E0)
#define MONO_SYSTEMCERTIFICATEPROVIDER_MONO.ISYSTEMCERTIFICATEPROVIDER.IMPORT_OFFSET UNITYSDK_OFFSET(0x96C84F0)
#define MONO_SYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET UNITYSDK_OFFSET(0x96C8510)
#define MONO_SYSTEMCERTIFICATEPROVIDER_MONO.ISYSTEMCERTIFICATEPROVIDER.IMPORT_OFFSET UNITYSDK_OFFSET(0x96C8700)
#define MONO_SYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET UNITYSDK_OFFSET(0x96C8710)
#define MONO_SYSTEMCERTIFICATEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96C88E0)
#define MONO_SYSTEMCERTIFICATEPROVIDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96C88F0)

namespace Mono
{
	inline static constexpr unsigned int SystemCertificateProvider_TypeDefinitionIndex = 28988;

	class SystemCertificateProvider : public Il2CppObject
	{
	public:
		::Mono::Security::Interface::MonoTlsProvider* provider; // 0x0
		::System::Int32 initialized; // 0x8
		::Mono::X509PalImpl* x509pal; // 0x10
		::System::Object* syncRoot; // 0x18

		::Mono::X509PalImpl* GetX509Pal()
		{
			return (return (::Mono::X509PalImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMCERTIFICATEPROVIDER_GETX509PAL_OFFSET))(nullptr);
		}

		::System::Void EnsureInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMCERTIFICATEPROVIDER_ENSUREINITIALIZED_OFFSET))(nullptr);
		}

		::Mono::X509PalImpl* get_X509Pal()
		{
			return (return (::Mono::X509PalImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMCERTIFICATEPROVIDER_GET_X509PAL_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Il2CppArray<::System::Object*>* arg, ::Mono::CertificateImportFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Object*>*, ::Mono::CertificateImportFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono.ISystemCertificateProvider.Import(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg, ::Mono::CertificateImportFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::Mono::CertificateImportFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMCERTIFICATEPROVIDER_MONO.ISYSTEMCERTIFICATEPROVIDER.IMPORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg, ::Mono::CertificateImportFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::Mono::CertificateImportFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono.ISystemCertificateProvider.Import(::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::Mono::CertificateImportFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::CertificateImportFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMCERTIFICATEPROVIDER_MONO.ISYSTEMCERTIFICATEPROVIDER.IMPORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::Mono::CertificateImportFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::CertificateImportFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMCERTIFICATEPROVIDER_IMPORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMCERTIFICATEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMCERTIFICATEPROVIDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

