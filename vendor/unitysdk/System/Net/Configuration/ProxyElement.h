#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB2C70)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_AUTODETECT_OFFSET UNITYSDK_OFFSET(0x9AB2CA0)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_AUTODETECT_OFFSET UNITYSDK_OFFSET(0x9AB2CD0)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_BYPASSONLOCAL_OFFSET UNITYSDK_OFFSET(0x9AB2D00)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_BYPASSONLOCAL_OFFSET UNITYSDK_OFFSET(0x9AB2D30)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB2D60)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_PROXYADDRESS_OFFSET UNITYSDK_OFFSET(0x9AB2D90)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_PROXYADDRESS_OFFSET UNITYSDK_OFFSET(0x9AB2DC0)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_SCRIPTLOCATION_OFFSET UNITYSDK_OFFSET(0x9AB2DF0)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_SCRIPTLOCATION_OFFSET UNITYSDK_OFFSET(0x9AB2E20)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_USESYSTEMDEFAULT_OFFSET UNITYSDK_OFFSET(0x9AB2E50)
#define SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_USESYSTEMDEFAULT_OFFSET UNITYSDK_OFFSET(0x9AB2E80)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ProxyElement_TypeDefinitionIndex = 29985;

	class ProxyElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_.CTOR_OFFSET))(nullptr);
		}

		AutoDetectValues* get_AutoDetect()
		{
			return (return (AutoDetectValues*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_AUTODETECT_OFFSET))(nullptr);
		}

		::System::Void set_AutoDetect(AutoDetectValues* arg)
		{
			((::System::Void(*)(AutoDetectValues*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_AUTODETECT_OFFSET))(arg, nullptr);
		}

		BypassOnLocalValues* get_BypassOnLocal()
		{
			return (return (BypassOnLocalValues*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_BYPASSONLOCAL_OFFSET))(nullptr);
		}

		::System::Void set_BypassOnLocal(BypassOnLocalValues* arg)
		{
			((::System::Void(*)(BypassOnLocalValues*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_BYPASSONLOCAL_OFFSET))(arg, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Uri* get_ProxyAddress()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_PROXYADDRESS_OFFSET))(nullptr);
		}

		::System::Void set_ProxyAddress(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_PROXYADDRESS_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_ScriptLocation()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_SCRIPTLOCATION_OFFSET))(nullptr);
		}

		::System::Void set_ScriptLocation(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_SCRIPTLOCATION_OFFSET))(arg, nullptr);
		}

		UseSystemDefaultValues* get_UseSystemDefault()
		{
			return (return (UseSystemDefaultValues*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_GET_USESYSTEMDEFAULT_OFFSET))(nullptr);
		}

		::System::Void set_UseSystemDefault(UseSystemDefaultValues* arg)
		{
			((::System::Void(*)(UseSystemDefaultValues*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_PROXYELEMENT_SET_USESYSTEMDEFAULT_OFFSET))(arg, nullptr);
		}

	};
}

