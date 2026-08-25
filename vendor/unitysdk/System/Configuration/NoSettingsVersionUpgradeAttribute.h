#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_NOSETTINGSVERSIONUPGRADEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6900)

namespace System::Configuration
{
	inline static constexpr unsigned int NoSettingsVersionUpgradeAttribute_TypeDefinitionIndex = 30036;

	class NoSettingsVersionUpgradeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_NOSETTINGSVERSIONUPGRADEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

