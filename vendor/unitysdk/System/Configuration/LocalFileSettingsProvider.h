#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6630)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x9AB6660)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_SET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x9AB6690)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GETPREVIOUSVERSION_OFFSET UNITYSDK_OFFSET(0x9AB66C0)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GETPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x9AB66F0)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9AB6720)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_RESET_OFFSET UNITYSDK_OFFSET(0x9AB6750)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_SETPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x9AB6780)
#define SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_UPGRADE_OFFSET UNITYSDK_OFFSET(0x9AB67B0)

namespace System::Configuration
{
	inline static constexpr unsigned int LocalFileSettingsProvider_TypeDefinitionIndex = 30033;

	class LocalFileSettingsProvider : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_ApplicationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GET_APPLICATIONNAME_OFFSET))(nullptr);
		}

		::System::Void set_ApplicationName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_SET_APPLICATIONNAME_OFFSET))(str, nullptr);
		}

		::System::Configuration::SettingsPropertyValue* GetPreviousVersion(::System::Configuration::SettingsContext* arg, ::System::Configuration::SettingsProperty* arg)
		{
			return (return (::System::Configuration::SettingsPropertyValue*(*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsProperty*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GETPREVIOUSVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Configuration::SettingsPropertyValueCollection* GetPropertyValues(::System::Configuration::SettingsContext* arg, ::System::Configuration::SettingsPropertyCollection* arg)
		{
			return (return (::System::Configuration::SettingsPropertyValueCollection*(*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_GETPROPERTYVALUES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::Collections::Specialized::NameValueCollection* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Collections::Specialized::NameValueCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_INITIALIZE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Reset(::System::Configuration::SettingsContext* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void SetPropertyValues(::System::Configuration::SettingsContext* arg, ::System::Configuration::SettingsPropertyValueCollection* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyValueCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_SETPROPERTYVALUES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Upgrade(::System::Configuration::SettingsContext* arg, ::System::Configuration::SettingsPropertyCollection* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_LOCALFILESETTINGSPROVIDER_UPGRADE_OFFSET))(arg, arg, nullptr);
		}

	};
}

