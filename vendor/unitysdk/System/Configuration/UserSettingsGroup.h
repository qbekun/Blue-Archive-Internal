#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_USERSETTINGSGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB7090)

namespace System::Configuration
{
	inline static constexpr unsigned int UserSettingsGroup_TypeDefinitionIndex = 30054;

	class UserSettingsGroup : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_USERSETTINGSGROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

