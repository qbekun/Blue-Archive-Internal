#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSGROUPNAMEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6BA0)
#define SYSTEM_CONFIGURATION_SETTINGSGROUPNAMEATTRIBUTE_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x9AB6BB0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsGroupNameAttribute_TypeDefinitionIndex = 30041;

	class SettingsGroupNameAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSGROUPNAMEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_GroupName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSGROUPNAMEATTRIBUTE_GET_GROUPNAME_OFFSET))(nullptr);
		}

	};
}

