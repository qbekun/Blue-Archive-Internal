#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_ICONFIGURATIONSYSTEM_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_CONFIGURATION_ICONFIGURATIONSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Configuration
{
	inline static constexpr unsigned int IConfigurationSystem_TypeDefinitionIndex = 30027;

	class IConfigurationSystem : public Il2CppObject
	{
	public:
		::System::Object* GetConfig(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_ICONFIGURATIONSYSTEM_GETCONFIG_OFFSET))(str, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_ICONFIGURATIONSYSTEM_INIT_OFFSET))(nullptr);
		}

	};
}

