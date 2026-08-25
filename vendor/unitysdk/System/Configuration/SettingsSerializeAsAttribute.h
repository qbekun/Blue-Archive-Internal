#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSSERIALIZEASATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6EB0)
#define SYSTEM_CONFIGURATION_SETTINGSSERIALIZEASATTRIBUTE_GET_SERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x9AB6EC0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsSerializeAsAttribute_TypeDefinitionIndex = 30048;

	class SettingsSerializeAsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::Configuration::SettingsSerializeAs* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsSerializeAs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSERIALIZEASATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Configuration::SettingsSerializeAs* get_SerializeAs()
		{
			return (return (::System::Configuration::SettingsSerializeAs*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSERIALIZEASATTRIBUTE_GET_SERIALIZEAS_OFFSET))(nullptr);
		}

	};
}

