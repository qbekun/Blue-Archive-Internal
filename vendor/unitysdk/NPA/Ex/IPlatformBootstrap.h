#pragma once
#include "../../unitysdk.h"

#define NPA_EX_IPLATFORMBOOTSTRAP_ISALLOWED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_IPLATFORMBOOTSTRAP_LOADDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_IPLATFORMBOOTSTRAP_UNLOADDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_IPLATFORMBOOTSTRAP_ACTIVATEBACKEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_IPLATFORMBOOTSTRAP_DEACTIVATEBACKEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_IPLATFORMBOOTSTRAP_GETPLATFORMFACTORY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Ex
{
	inline static constexpr unsigned int IPlatformBootstrap_TypeDefinitionIndex = 25982;

	class IPlatformBootstrap : public Il2CppObject
	{
	public:
		::System::Boolean IsAllowed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_IPLATFORMBOOTSTRAP_ISALLOWED_OFFSET))(nullptr);
		}

		::System::Boolean LoadDependencies()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_IPLATFORMBOOTSTRAP_LOADDEPENDENCIES_OFFSET))(nullptr);
		}

		::System::Boolean UnloadDependencies()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_IPLATFORMBOOTSTRAP_UNLOADDEPENDENCIES_OFFSET))(nullptr);
		}

		::System::Boolean ActivateBackend()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_IPLATFORMBOOTSTRAP_ACTIVATEBACKEND_OFFSET))(nullptr);
		}

		::System::Boolean DeactivateBackend()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_IPLATFORMBOOTSTRAP_DEACTIVATEBACKEND_OFFSET))(nullptr);
		}

		Il2CppObject* GetPlatformFactory()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_IPLATFORMBOOTSTRAP_GETPLATFORMFACTORY_OFFSET))(nullptr);
		}

	};
}

