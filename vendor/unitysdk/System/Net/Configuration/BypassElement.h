#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB21C0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB21F0)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x9AB2220)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x9AB2250)
#define SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB2280)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int BypassElement_TypeDefinitionIndex = 29975;

	class BypassElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Address()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_GET_ADDRESS_OFFSET))(nullptr);
		}

		::System::Void set_Address(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_SET_ADDRESS_OFFSET))(str, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_BYPASSELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

