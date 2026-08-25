#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5230)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingAttribute_TypeDefinitionIndex = 30010;

	class SettingAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

