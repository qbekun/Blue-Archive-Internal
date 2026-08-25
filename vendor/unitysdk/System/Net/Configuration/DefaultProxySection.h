#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB29A0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_BYPASSLIST_OFFSET UNITYSDK_OFFSET(0x9AB29D0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AB2A00)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AB2A30)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x9AB2A60)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB2A90)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x9AB2AC0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9AB2AF0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9AB2B20)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9AB2B50)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_RESET_OFFSET UNITYSDK_OFFSET(0x9AB2B80)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int DefaultProxySection_TypeDefinitionIndex = 29980;

	class DefaultProxySection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Configuration::BypassElementCollection* get_BypassList()
		{
			return (return (::System::Net::Configuration::BypassElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_BYPASSLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_Enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Net::Configuration::ModuleElement* get_Module()
		{
			return (return (::System::Net::Configuration::ModuleElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_MODULE_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Net::Configuration::ProxyElement* get_Proxy()
		{
			return (return (::System::Net::Configuration::ProxyElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_PROXY_OFFSET))(nullptr);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_GET_USEDEFAULTCREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_SET_USEDEFAULTCREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Void PostDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_POSTDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* arg)
		{
			((::System::Void(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTION_RESET_OFFSET))(arg, nullptr);
		}

	};
}

