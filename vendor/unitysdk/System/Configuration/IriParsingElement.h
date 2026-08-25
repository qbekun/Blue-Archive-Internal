#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6570)
#define SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AB65A0)
#define SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9AB65D0)
#define SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB6600)

namespace System::Configuration
{
	inline static constexpr unsigned int IriParsingElement_TypeDefinitionIndex = 30031;

	class IriParsingElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_Enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IRIPARSINGELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

