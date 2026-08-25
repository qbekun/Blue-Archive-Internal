#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_MODULEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB2BB0)
#define SYSTEM_NET_CONFIGURATION_MODULEELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB2BE0)
#define SYSTEM_NET_CONFIGURATION_MODULEELEMENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9AB2C10)
#define SYSTEM_NET_CONFIGURATION_MODULEELEMENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9AB2C40)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int ModuleElement_TypeDefinitionIndex = 29981;

	class ModuleElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MODULEELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MODULEELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::String* get_Type()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MODULEELEMENT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_MODULEELEMENT_SET_TYPE_OFFSET))(str, nullptr);
		}

	};
}

