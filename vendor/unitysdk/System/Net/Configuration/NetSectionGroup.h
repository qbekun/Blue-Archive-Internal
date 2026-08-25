#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB3DB0)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_AUTHENTICATIONMODULES_OFFSET UNITYSDK_OFFSET(0x9AB3DE0)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_CONNECTIONMANAGEMENT_OFFSET UNITYSDK_OFFSET(0x9AB3E10)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_DEFAULTPROXY_OFFSET UNITYSDK_OFFSET(0x9AB3E40)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_MAILSETTINGS_OFFSET UNITYSDK_OFFSET(0x9AB3E70)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_REQUESTCACHING_OFFSET UNITYSDK_OFFSET(0x9AB3EA0)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x9AB3ED0)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_WEBREQUESTMODULES_OFFSET UNITYSDK_OFFSET(0x9AB3F00)
#define SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GETSECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9AB3F30)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int NetSectionGroup_TypeDefinitionIndex = 29996;

	class NetSectionGroup : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Configuration::AuthenticationModulesSection* get_AuthenticationModules()
		{
			return (return (::System::Net::Configuration::AuthenticationModulesSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_AUTHENTICATIONMODULES_OFFSET))(nullptr);
		}

		::System::Net::Configuration::ConnectionManagementSection* get_ConnectionManagement()
		{
			return (return (::System::Net::Configuration::ConnectionManagementSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_CONNECTIONMANAGEMENT_OFFSET))(nullptr);
		}

		::System::Net::Configuration::DefaultProxySection* get_DefaultProxy()
		{
			return (return (::System::Net::Configuration::DefaultProxySection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_DEFAULTPROXY_OFFSET))(nullptr);
		}

		::System::Net::Configuration::MailSettingsSectionGroup* get_MailSettings()
		{
			return (return (::System::Net::Configuration::MailSettingsSectionGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_MAILSETTINGS_OFFSET))(nullptr);
		}

		::System::Net::Configuration::RequestCachingSection* get_RequestCaching()
		{
			return (return (::System::Net::Configuration::RequestCachingSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_REQUESTCACHING_OFFSET))(nullptr);
		}

		::System::Net::Configuration::SettingsSection* get_Settings()
		{
			return (return (::System::Net::Configuration::SettingsSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_SETTINGS_OFFSET))(nullptr);
		}

		::System::Net::Configuration::WebRequestModulesSection* get_WebRequestModules()
		{
			return (return (::System::Net::Configuration::WebRequestModulesSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GET_WEBREQUESTMODULES_OFFSET))(nullptr);
		}

		::System::Net::Configuration::NetSectionGroup* GetSectionGroup(::System::Configuration::Configuration* arg)
		{
			return (return (::System::Net::Configuration::NetSectionGroup*(*)(::System::Configuration::Configuration*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_NETSECTIONGROUP_GETSECTIONGROUP_OFFSET))(arg, nullptr);
		}

	};
}

