#pragma once
#include "../../unitysdk.h"

namespace NPA::Ex { class Group; }
namespace NPA::Ex { class IPlatformBootstrap; }

#define NPA_EX_EXTERNALPLATFORMSUPPORT_SIGNUP_OFFSET UNITYSDK_OFFSET(0x9D1CFD0)
#define NPA_EX_EXTERNALPLATFORMSUPPORT_GETREGISTRATIONS_OFFSET UNITYSDK_OFFSET(0x9D1D100)
#define NPA_EX_EXTERNALPLATFORMSUPPORT_ONDOMAINRELOADINEDITOR_OFFSET UNITYSDK_OFFSET(0x9D1D340)
#define NPA_EX_EXTERNALPLATFORMSUPPORT_RELEASEREGISTRATIONS_OFFSET UNITYSDK_OFFSET(0x9D1D3A0)
#define NPA_EX_EXTERNALPLATFORMSUPPORT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D1D450)

namespace NPA::Ex
{
	inline static constexpr unsigned int ExternalPlatformSupport_TypeDefinitionIndex = 25980;

	class ExternalPlatformSupport : public Il2CppObject
	{
	public:
		Il2CppObject* registrations; // 0x0

		::System::Void SignUp(::NPA::Ex::Group* arg, ::NPA::Ex::IPlatformBootstrap* arg)
		{
			((::System::Void(*)(::NPA::Ex::Group*, ::NPA::Ex::IPlatformBootstrap*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMSUPPORT_SIGNUP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetRegistrations()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMSUPPORT_GETREGISTRATIONS_OFFSET))(nullptr);
		}

		::System::Void OnDomainReloadInEditor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMSUPPORT_ONDOMAINRELOADINEDITOR_OFFSET))(nullptr);
		}

		::System::Void ReleaseRegistrations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMSUPPORT_RELEASEREGISTRATIONS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMSUPPORT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

