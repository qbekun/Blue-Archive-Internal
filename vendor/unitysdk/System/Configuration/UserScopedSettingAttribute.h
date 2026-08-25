#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_USERSCOPEDSETTINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB7080)

namespace System::Configuration
{
	inline static constexpr unsigned int UserScopedSettingAttribute_TypeDefinitionIndex = 30053;

	class UserScopedSettingAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_USERSCOPEDSETTINGATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

