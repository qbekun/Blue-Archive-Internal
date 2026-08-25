#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_APPLICATIONSETTINGSGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5B40)

namespace System::Configuration
{
	inline static constexpr unsigned int ApplicationSettingsGroup_TypeDefinitionIndex = 30017;

	class ApplicationSettingsGroup : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSETTINGSGROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

