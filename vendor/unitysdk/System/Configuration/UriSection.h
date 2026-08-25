#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_URISECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6F90)
#define SYSTEM_CONFIGURATION_URISECTION_GET_IDN_OFFSET UNITYSDK_OFFSET(0x9AB6FC0)
#define SYSTEM_CONFIGURATION_URISECTION_GET_IRIPARSING_OFFSET UNITYSDK_OFFSET(0x9AB6FF0)
#define SYSTEM_CONFIGURATION_URISECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB7020)
#define SYSTEM_CONFIGURATION_URISECTION_GET_SCHEMESETTINGS_OFFSET UNITYSDK_OFFSET(0x9AB7050)

namespace System::Configuration
{
	inline static constexpr unsigned int UriSection_TypeDefinitionIndex = 30052;

	class UriSection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_URISECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::IdnElement* get_Idn()
		{
			return (return (::System::Configuration::IdnElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_URISECTION_GET_IDN_OFFSET))(nullptr);
		}

		::System::Configuration::IriParsingElement* get_IriParsing()
		{
			return (return (::System::Configuration::IriParsingElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_URISECTION_GET_IRIPARSING_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_URISECTION_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Configuration::SchemeSettingElementCollection* get_SchemeSettings()
		{
			return (return (::System::Configuration::SchemeSettingElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_URISECTION_GET_SCHEMESETTINGS_OFFSET))(nullptr);
		}

	};
}

