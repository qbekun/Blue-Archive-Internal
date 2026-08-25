#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB20D0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_GET_AUTHENTICATIONMODULES_OFFSET UNITYSDK_OFFSET(0x9AB2100)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB2130)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_INITIALIZEDEFAULT_OFFSET UNITYSDK_OFFSET(0x9AB2160)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9AB2190)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int AuthenticationModulesSection_TypeDefinitionIndex = 29974;

	class AuthenticationModulesSection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Configuration::AuthenticationModuleElementCollection* get_AuthenticationModules()
		{
			return (return (::System::Net::Configuration::AuthenticationModuleElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_GET_AUTHENTICATIONMODULES_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void InitializeDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_INITIALIZEDEFAULT_OFFSET))(nullptr);
		}

		::System::Void PostDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULESSECTION_POSTDESERIALIZE_OFFSET))(nullptr);
		}

	};
}

