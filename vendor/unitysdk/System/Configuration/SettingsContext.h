#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB1080)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsContext_TypeDefinitionIndex = 29962;

	class SettingsContext : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSCONTEXT_.CTOR_OFFSET))(nullptr);
		}

	};
}

