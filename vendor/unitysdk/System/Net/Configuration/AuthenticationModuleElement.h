#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB1D70)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB1DA0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB1DD0)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9AB1E00)
#define SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9AB1E30)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int AuthenticationModuleElement_TypeDefinitionIndex = 29972;

	class AuthenticationModuleElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::String* get_Type()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_AUTHENTICATIONMODULEELEMENT_SET_TYPE_OFFSET))(str, nullptr);
		}

	};
}

