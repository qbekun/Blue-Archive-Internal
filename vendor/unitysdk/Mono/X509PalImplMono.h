#pragma once
#include "../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafePasswordHandle; }

#define MONO_X509PALIMPLMONO_IMPORT_OFFSET UNITYSDK_OFFSET(0x96C8E40)
#define MONO_X509PALIMPLMONO_IMPORT_OFFSET UNITYSDK_OFFSET(0x96C8E50)
#define MONO_X509PALIMPLMONO_IMPORT_OFFSET UNITYSDK_OFFSET(0x96C8EC0)
#define MONO_X509PALIMPLMONO_.CTOR_OFFSET UNITYSDK_OFFSET(0x96C7F70)

namespace Mono
{
	inline static constexpr unsigned int X509PalImplMono_TypeDefinitionIndex = 28991;

	class X509PalImplMono : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPLMONO_IMPORT_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPLMONO_IMPORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPLMONO_IMPORT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPLMONO_.CTOR_OFFSET))(nullptr);
		}

	};
}

