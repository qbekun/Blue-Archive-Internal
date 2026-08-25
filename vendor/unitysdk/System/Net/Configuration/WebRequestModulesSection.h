#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB4CE0)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB4D10)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_GET_WEBREQUESTMODULES_OFFSET UNITYSDK_OFFSET(0x9AB4D40)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_INITIALIZEDEFAULT_OFFSET UNITYSDK_OFFSET(0x9AB4D70)
#define SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9AB4DA0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WebRequestModulesSection_TypeDefinitionIndex = 30005;

	class WebRequestModulesSection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Net::Configuration::WebRequestModuleElementCollection* get_WebRequestModules()
		{
			return (return (::System::Net::Configuration::WebRequestModuleElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_GET_WEBREQUESTMODULES_OFFSET))(nullptr);
		}

		::System::Void InitializeDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_INITIALIZEDEFAULT_OFFSET))(nullptr);
		}

		::System::Void PostDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WEBREQUESTMODULESSECTION_POSTDESERIALIZE_OFFSET))(nullptr);
		}

	};
}

