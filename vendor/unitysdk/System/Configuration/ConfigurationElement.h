#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9627DD0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_DESERIALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x9627E00)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_INITIALIZEDEFAULT_OFFSET UNITYSDK_OFFSET(0x9627E30)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x9627E60)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_POSTDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9627E90)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x9627EC0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x9627EF0)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_SERIALIZETOXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x9627F20)
#define SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_UNMERGE_OFFSET UNITYSDK_OFFSET(0x9627F50)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationElement_TypeDefinitionIndex = 38063;

	class ConfigurationElement : public Il2CppObject
	{
	public:
		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void DeserializeElement(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_DESERIALIZEELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_INITIALIZEDEFAULT_OFFSET))(nullptr);
		}

		::System::Boolean IsModified()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_ISMODIFIED_OFFSET))(nullptr);
		}

		::System::Void PostDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_POSTDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* arg)
		{
			((::System::Void(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void ResetModified()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_RESETMODIFIED_OFFSET))(nullptr);
		}

		::System::Boolean SerializeToXmlElement(::System::Xml::XmlWriter* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlWriter*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_SERIALIZETOXMLELEMENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void Unmerge(::System::Configuration::ConfigurationElement* arg, ::System::Configuration::ConfigurationElement* arg, ::System::Configuration::ConfigurationSaveMode* arg)
		{
			((::System::Void(*)(::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationSaveMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGURATIONELEMENT_UNMERGE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

