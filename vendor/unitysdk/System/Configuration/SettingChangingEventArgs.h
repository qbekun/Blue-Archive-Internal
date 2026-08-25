#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5870)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_NEWVALUE_OFFSET UNITYSDK_OFFSET(0x9AB58A0)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGCLASS_OFFSET UNITYSDK_OFFSET(0x9AB58D0)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGKEY_OFFSET UNITYSDK_OFFSET(0x9AB5900)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGNAME_OFFSET UNITYSDK_OFFSET(0x9AB5930)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingChangingEventArgs_TypeDefinitionIndex = 30013;

	class SettingChangingEventArgs : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_.CTOR_OFFSET))(str, str, str, arg, arg, nullptr);
		}

		::System::Object* get_NewValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_NEWVALUE_OFFSET))(nullptr);
		}

		::System::String* get_SettingClass()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGCLASS_OFFSET))(nullptr);
		}

		::System::String* get_SettingKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGKEY_OFFSET))(nullptr);
		}

		::System::String* get_SettingName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTARGS_GET_SETTINGNAME_OFFSET))(nullptr);
		}

	};
}

