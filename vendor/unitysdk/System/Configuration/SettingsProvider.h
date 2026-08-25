#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB17D0)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDER_GET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDER_SET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDER_GETPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDER_SETPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsProvider_TypeDefinitionIndex = 29965;

	class SettingsProvider : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_ApplicationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDER_GET_APPLICATIONNAME_OFFSET))(nullptr);
		}

		::System::Void set_ApplicationName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDER_SET_APPLICATIONNAME_OFFSET))(str, nullptr);
		}

		::System::Configuration::SettingsPropertyValueCollection* GetPropertyValues(::System::Configuration::SettingsContext* arg, ::System::Configuration::SettingsPropertyCollection* arg)
		{
			return (return (::System::Configuration::SettingsPropertyValueCollection*(*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDER_GETPROPERTYVALUES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPropertyValues(::System::Configuration::SettingsContext* arg, ::System::Configuration::SettingsPropertyValueCollection* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyValueCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDER_SETPROPERTYVALUES_OFFSET))(arg, arg, nullptr);
		}

	};
}

