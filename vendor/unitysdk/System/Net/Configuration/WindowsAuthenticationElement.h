#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_WINDOWSAUTHENTICATIONELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB4C20)
#define SYSTEM_NET_CONFIGURATION_WINDOWSAUTHENTICATIONELEMENT_GET_DEFAULTCREDENTIALSHANDLECACHESIZE_OFFSET UNITYSDK_OFFSET(0x9AB4C50)
#define SYSTEM_NET_CONFIGURATION_WINDOWSAUTHENTICATIONELEMENT_SET_DEFAULTCREDENTIALSHANDLECACHESIZE_OFFSET UNITYSDK_OFFSET(0x9AB4C80)
#define SYSTEM_NET_CONFIGURATION_WINDOWSAUTHENTICATIONELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB4CB0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int WindowsAuthenticationElement_TypeDefinitionIndex = 30004;

	class WindowsAuthenticationElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WINDOWSAUTHENTICATIONELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultCredentialsHandleCacheSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WINDOWSAUTHENTICATIONELEMENT_GET_DEFAULTCREDENTIALSHANDLECACHESIZE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultCredentialsHandleCacheSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WINDOWSAUTHENTICATIONELEMENT_SET_DEFAULTCREDENTIALSHANDLECACHESIZE_OFFSET))(arg, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_WINDOWSAUTHENTICATIONELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

