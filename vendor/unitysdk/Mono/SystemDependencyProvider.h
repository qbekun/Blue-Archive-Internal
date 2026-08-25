#pragma once
#include "../unitysdk.h"

namespace Mono { class SystemDependencyProvider; }
namespace Mono { class SystemCertificateProvider; }
namespace Mono { class ISystemCertificateProvider; }
namespace Mono { class X509PalImpl; }

#define MONO_SYSTEMDEPENDENCYPROVIDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x96C8970)
#define MONO_SYSTEMDEPENDENCYPROVIDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x96C89C0)
#define MONO_SYSTEMDEPENDENCYPROVIDER_MONO.ISYSTEMDEPENDENCYPROVIDER.GET_CERTIFICATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x96C8C10)
#define MONO_SYSTEMDEPENDENCYPROVIDER_GET_CERTIFICATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x96C8C20)
#define MONO_SYSTEMDEPENDENCYPROVIDER_GET_X509PAL_OFFSET UNITYSDK_OFFSET(0x96C8C30)
#define MONO_SYSTEMDEPENDENCYPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96C8B70)
#define MONO_SYSTEMDEPENDENCYPROVIDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96C8C90)

namespace Mono
{
	inline static constexpr unsigned int SystemDependencyProvider_TypeDefinitionIndex = 28989;

	class SystemDependencyProvider : public Il2CppObject
	{
	public:
		::Mono::SystemDependencyProvider* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::Mono::SystemCertificateProvider* _CertificateProvider_k__BackingField; // 0x10

		::Mono::SystemDependencyProvider* get_Instance()
		{
			return (return (::Mono::SystemDependencyProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMDEPENDENCYPROVIDER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMDEPENDENCYPROVIDER_INITIALIZE_OFFSET))(nullptr);
		}

		::Mono::ISystemCertificateProvider* Mono.ISystemDependencyProvider.get_CertificateProvider()
		{
			return (return (::Mono::ISystemCertificateProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMDEPENDENCYPROVIDER_MONO.ISYSTEMDEPENDENCYPROVIDER.GET_CERTIFICATEPROVIDER_OFFSET))(nullptr);
		}

		::Mono::SystemCertificateProvider* get_CertificateProvider()
		{
			return (return (::Mono::SystemCertificateProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMDEPENDENCYPROVIDER_GET_CERTIFICATEPROVIDER_OFFSET))(nullptr);
		}

		::Mono::X509PalImpl* get_X509Pal()
		{
			return (return (::Mono::X509PalImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMDEPENDENCYPROVIDER_GET_X509PAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMDEPENDENCYPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SYSTEMDEPENDENCYPROVIDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

