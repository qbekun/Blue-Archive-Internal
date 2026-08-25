#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_ISETTINGSPROVIDERSERVICE_GETSETTINGSPROVIDER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Configuration
{
	inline static constexpr unsigned int ISettingsProviderService_TypeDefinitionIndex = 30032;

	class ISettingsProviderService : public Il2CppObject
	{
	public:
		::System::Configuration::SettingsProvider* GetSettingsProvider(::System::Configuration::SettingsProperty* arg)
		{
			return (return (::System::Configuration::SettingsProvider*(*)(::System::Configuration::SettingsProperty*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_ISETTINGSPROVIDERSERVICE_GETSETTINGSPROVIDER_OFFSET))(arg, nullptr);
		}

	};
}

