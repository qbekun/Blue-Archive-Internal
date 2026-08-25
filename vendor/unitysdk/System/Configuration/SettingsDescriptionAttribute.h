#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSDESCRIPTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6B20)
#define SYSTEM_CONFIGURATION_SETTINGSDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9AB6B30)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsDescriptionAttribute_TypeDefinitionIndex = 30039;

	class SettingsDescriptionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSDESCRIPTIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(nullptr);
		}

	};
}

