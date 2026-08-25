#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB3660)
#define SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AB3690)
#define SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AB36C0)
#define SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB36F0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int Ipv6Element_TypeDefinitionIndex = 29991;

	class Ipv6Element : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_Enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_IPV6ELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

