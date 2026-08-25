#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB4200)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_HTTPLISTENER_OFFSET UNITYSDK_OFFSET(0x9AB4230)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_HTTPWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x9AB4260)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_IPV6_OFFSET UNITYSDK_OFFSET(0x9AB4290)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_PERFORMANCECOUNTERS_OFFSET UNITYSDK_OFFSET(0x9AB42C0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB42F0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_SERVICEPOINTMANAGER_OFFSET UNITYSDK_OFFSET(0x9AB4320)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_SOCKET_OFFSET UNITYSDK_OFFSET(0x9AB4350)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_WEBPROXYSCRIPT_OFFSET UNITYSDK_OFFSET(0x9AB4380)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_WEBUTILITY_OFFSET UNITYSDK_OFFSET(0x9AB43B0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_WINDOWSAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x9AB43E0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SettingsSection_TypeDefinitionIndex = 29998;

	class SettingsSection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Configuration::HttpListenerElement* get_HttpListener()
		{
			return (return (::System::Net::Configuration::HttpListenerElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_HTTPLISTENER_OFFSET))(nullptr);
		}

		::System::Net::Configuration::HttpWebRequestElement* get_HttpWebRequest()
		{
			return (return (::System::Net::Configuration::HttpWebRequestElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_HTTPWEBREQUEST_OFFSET))(nullptr);
		}

		::System::Net::Configuration::Ipv6Element* get_Ipv6()
		{
			return (return (::System::Net::Configuration::Ipv6Element*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_IPV6_OFFSET))(nullptr);
		}

		::System::Net::Configuration::PerformanceCountersElement* get_PerformanceCounters()
		{
			return (return (::System::Net::Configuration::PerformanceCountersElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_PERFORMANCECOUNTERS_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Net::Configuration::ServicePointManagerElement* get_ServicePointManager()
		{
			return (return (::System::Net::Configuration::ServicePointManagerElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_SERVICEPOINTMANAGER_OFFSET))(nullptr);
		}

		::System::Net::Configuration::SocketElement* get_Socket()
		{
			return (return (::System::Net::Configuration::SocketElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_SOCKET_OFFSET))(nullptr);
		}

		::System::Net::Configuration::WebProxyScriptElement* get_WebProxyScript()
		{
			return (return (::System::Net::Configuration::WebProxyScriptElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_WEBPROXYSCRIPT_OFFSET))(nullptr);
		}

		::System::Net::Configuration::WebUtilityElement* get_WebUtility()
		{
			return (return (::System::Net::Configuration::WebUtilityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_WEBUTILITY_OFFSET))(nullptr);
		}

		::System::Net::Configuration::WindowsAuthenticationElement* get_WindowsAuthentication()
		{
			return (return (::System::Net::Configuration::WindowsAuthenticationElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTION_GET_WINDOWSAUTHENTICATION_OFFSET))(nullptr);
		}

	};
}

