#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSATTRIBUTEDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB1C80)
#define SYSTEM_CONFIGURATION_SETTINGSATTRIBUTEDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB1CB0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsAttributeDictionary_TypeDefinitionIndex = 29969;

	class SettingsAttributeDictionary : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSATTRIBUTEDICTIONARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Configuration::SettingsAttributeDictionary* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsAttributeDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSATTRIBUTEDICTIONARY_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

