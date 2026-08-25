#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SPECIALSETTINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6F50)
#define SYSTEM_CONFIGURATION_SPECIALSETTINGATTRIBUTE_GET_SPECIALSETTING_OFFSET UNITYSDK_OFFSET(0x9AB6F60)

namespace System::Configuration
{
	inline static constexpr unsigned int SpecialSettingAttribute_TypeDefinitionIndex = 30051;

	class SpecialSettingAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::Configuration::SpecialSetting* arg)
		{
			((::System::Void(*)(::System::Configuration::SpecialSetting*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SPECIALSETTINGATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Configuration::SpecialSetting* get_SpecialSetting()
		{
			return (return (::System::Configuration::SpecialSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SPECIALSETTINGATTRIBUTE_GET_SPECIALSETTING_OFFSET))(nullptr);
		}

	};
}

