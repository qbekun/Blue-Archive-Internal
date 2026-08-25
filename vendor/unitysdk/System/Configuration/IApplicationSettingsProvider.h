#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_IAPPLICATIONSETTINGSPROVIDER_GETPREVIOUSVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_CONFIGURATION_IAPPLICATIONSETTINGSPROVIDER_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_CONFIGURATION_IAPPLICATIONSETTINGSPROVIDER_UPGRADE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Configuration
{
	inline static constexpr unsigned int IApplicationSettingsProvider_TypeDefinitionIndex = 29971;

	class IApplicationSettingsProvider : public Il2CppObject
	{
	public:
		::System::Configuration::SettingsPropertyValue* GetPreviousVersion(::System::Configuration::SettingsContext* arg, ::System::Configuration::SettingsProperty* arg)
		{
			return (return (::System::Configuration::SettingsPropertyValue*(*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsProperty*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IAPPLICATIONSETTINGSPROVIDER_GETPREVIOUSVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset(::System::Configuration::SettingsContext* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IAPPLICATIONSETTINGSPROVIDER_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void Upgrade(::System::Configuration::SettingsContext* arg, ::System::Configuration::SettingsPropertyCollection* arg)
		{
			((::System::Void(*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IAPPLICATIONSETTINGSPROVIDER_UPGRADE_OFFSET))(arg, arg, nullptr);
		}

	};
}

