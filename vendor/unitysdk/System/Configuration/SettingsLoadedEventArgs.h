#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5A20)
#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTARGS_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x9AB5A50)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsLoadedEventArgs_TypeDefinitionIndex = 30015;

	class SettingsLoadedEventArgs : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Configuration::SettingsProvider* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Configuration::SettingsProvider* get_Provider()
		{
			return (return (::System::Configuration::SettingsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTARGS_GET_PROVIDER_OFFSET))(nullptr);
		}

	};
}

