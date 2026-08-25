#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsProvider; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Microsoft::Win32::SafeHandles { class SafePasswordHandle; }

#define MONO_BTLS_X509PALIMPLBTLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC79D0)
#define MONO_BTLS_X509PALIMPLBTLS_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x9AC7AB0)
#define MONO_BTLS_X509PALIMPLBTLS_IMPORT_OFFSET UNITYSDK_OFFSET(0x9AC7AC0)
#define MONO_BTLS_X509PALIMPLBTLS_IMPORT_OFFSET UNITYSDK_OFFSET(0x9AC7AF0)
#define MONO_BTLS_X509PALIMPLBTLS_IMPORT_OFFSET UNITYSDK_OFFSET(0x9AC7B20)

namespace Mono::Btls
{
	inline static constexpr unsigned int X509PalImplBtls_TypeDefinitionIndex = 29152;

	class X509PalImplBtls : public Il2CppObject
	{
	public:
		::Mono::Btls::MonoBtlsProvider* _Provider_k__BackingField; // 0x10

		::System::Void .ctor(::Mono::Security::Interface::MonoTlsProvider* arg)
		{
			((::System::Void(*)(::Mono::Security::Interface::MonoTlsProvider*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509PALIMPLBTLS_.CTOR_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsProvider* get_Provider()
		{
			return (return (::Mono::Btls::MonoBtlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509PALIMPLBTLS_GET_PROVIDER_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509PALIMPLBTLS_IMPORT_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509PALIMPLBTLS_IMPORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509PALIMPLBTLS_IMPORT_OFFSET))(arg, nullptr);
		}

	};
}

