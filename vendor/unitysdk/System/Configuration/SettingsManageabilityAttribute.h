#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSMANAGEABILITYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6BE0)
#define SYSTEM_CONFIGURATION_SETTINGSMANAGEABILITYATTRIBUTE_GET_MANAGEABILITY_OFFSET UNITYSDK_OFFSET(0x9AB6BF0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsManageabilityAttribute_TypeDefinitionIndex = 30043;

	class SettingsManageabilityAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::Configuration::SettingsManageability* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsManageability*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSMANAGEABILITYATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Configuration::SettingsManageability* get_Manageability()
		{
			return (return (::System::Configuration::SettingsManageability*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSMANAGEABILITYATTRIBUTE_GET_MANAGEABILITY_OFFSET))(nullptr);
		}

	};
}

