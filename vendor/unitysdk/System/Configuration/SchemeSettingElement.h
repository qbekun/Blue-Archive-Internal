#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6910)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_GENERICURIPARSEROPTIONS_OFFSET UNITYSDK_OFFSET(0x9AB6940)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9AB6970)
#define SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB69A0)

namespace System::Configuration
{
	inline static constexpr unsigned int SchemeSettingElement_TypeDefinitionIndex = 30037;

	class SchemeSettingElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::GenericUriParserOptions* get_GenericUriParserOptions()
		{
			return (return (::System::GenericUriParserOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_GENERICURIPARSEROPTIONS_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_NAME_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SCHEMESETTINGELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

