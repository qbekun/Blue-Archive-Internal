#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5BD0)
#define SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB5C00)
#define SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x9AB5C30)

namespace System::Configuration
{
	inline static constexpr unsigned int ClientSettingsSection_TypeDefinitionIndex = 30019;

	class ClientSettingsSection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Configuration::SettingElementCollection* get_Settings()
		{
			return (return (::System::Configuration::SettingElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CLIENTSETTINGSSECTION_GET_SETTINGS_OFFSET))(nullptr);
		}

	};
}

