#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_SECTION_OFFSET UNITYSDK_OFFSET(0x9A92E20)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x9A92E70)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x9A92E80)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_EXPECT100CONTINUE_OFFSET UNITYSDK_OFFSET(0x9A92E90)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_EXPECT100CONTINUE_OFFSET UNITYSDK_OFFSET(0x9A92EA0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_CHECKCERTIFICATENAME_OFFSET UNITYSDK_OFFSET(0x9A92EB0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_CHECKCERTIFICATENAME_OFFSET UNITYSDK_OFFSET(0x9A92EC0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_DNSREFRESHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9A92ED0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_DNSREFRESHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9A92EE0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_ENABLEDNSROUNDROBIN_OFFSET UNITYSDK_OFFSET(0x9A92EF0)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_ENABLEDNSROUNDROBIN_OFFSET UNITYSDK_OFFSET(0x9A92F00)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x9A92F10)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x9A92F20)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_ENCRYPTIONPOLICY_OFFSET UNITYSDK_OFFSET(0x9A92F30)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_ENCRYPTIONPOLICY_OFFSET UNITYSDK_OFFSET(0x9A92F40)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_IPV6ENABLED_OFFSET UNITYSDK_OFFSET(0x9A92F50)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A92F60)
#define SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A92F80)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int SettingsSectionInternal_TypeDefinitionIndex = 29880;

	class SettingsSectionInternal : public Il2CppObject
	{
	public:
		::System::Net::Configuration::SettingsSectionInternal* instance; // 0x0
		::System::Boolean HttpListenerUnescapeRequestUrl; // 0x10
		::System::Net::Sockets::IPProtectionLevel* IPProtectionLevel; // 0x14
		::System::Boolean _UseNagleAlgorithm_k__BackingField; // 0x18
		::System::Boolean _Expect100Continue_k__BackingField; // 0x19
		::System::Boolean _CheckCertificateName_k__BackingField; // 0x1A
		::System::Int32 _DnsRefreshTimeout_k__BackingField; // 0x1C
		::System::Boolean _EnableDnsRoundRobin_k__BackingField; // 0x20
		::System::Boolean _CheckCertificateRevocationList_k__BackingField; // 0x21
		::System::Net::Security::EncryptionPolicy* _EncryptionPolicy_k__BackingField; // 0x24

		::System::Net::Configuration::SettingsSectionInternal* get_Section()
		{
			return (return (::System::Net::Configuration::SettingsSectionInternal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_SECTION_OFFSET))(nullptr);
		}

		::System::Boolean get_UseNagleAlgorithm()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_USENAGLEALGORITHM_OFFSET))(nullptr);
		}

		::System::Void set_UseNagleAlgorithm(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_USENAGLEALGORITHM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Expect100Continue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_EXPECT100CONTINUE_OFFSET))(nullptr);
		}

		::System::Void set_Expect100Continue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_EXPECT100CONTINUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CheckCertificateName()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_CHECKCERTIFICATENAME_OFFSET))(nullptr);
		}

		::System::Void set_CheckCertificateName(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_CHECKCERTIFICATENAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DnsRefreshTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_DNSREFRESHTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_DnsRefreshTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_DNSREFRESHTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EnableDnsRoundRobin()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_ENABLEDNSROUNDROBIN_OFFSET))(nullptr);
		}

		::System::Void set_EnableDnsRoundRobin(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_ENABLEDNSROUNDROBIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CheckCertificateRevocationList()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET))(nullptr);
		}

		::System::Void set_CheckCertificateRevocationList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET))(arg, nullptr);
		}

		::System::Net::Security::EncryptionPolicy* get_EncryptionPolicy()
		{
			return (return (::System::Net::Security::EncryptionPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_ENCRYPTIONPOLICY_OFFSET))(nullptr);
		}

		::System::Void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy* arg)
		{
			((::System::Void(*)(::System::Net::Security::EncryptionPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_SET_ENCRYPTIONPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Ipv6Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_GET_IPV6ENABLED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_SETTINGSSECTIONINTERNAL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

