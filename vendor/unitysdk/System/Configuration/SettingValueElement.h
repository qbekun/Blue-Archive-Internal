#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5FC0)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB5FF0)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_GET_VALUEXML_OFFSET UNITYSDK_OFFSET(0x9AB6020)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_SET_VALUEXML_OFFSET UNITYSDK_OFFSET(0x9AB6050)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_DESERIALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB6080)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x9AB60B0)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x9AB60E0)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_RESETMODIFIED_OFFSET UNITYSDK_OFFSET(0x9AB6110)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_SERIALIZETOXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x9AB6140)
#define SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_UNMERGE_OFFSET UNITYSDK_OFFSET(0x9AB6170)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingValueElement_TypeDefinitionIndex = 30022;

	class SettingValueElement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Configuration::ConfigurationPropertyCollection* get_Properties()
		{
			return (return (::System::Configuration::ConfigurationPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_ValueXml()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_GET_VALUEXML_OFFSET))(nullptr);
		}

		::System::Void set_ValueXml(::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_SET_VALUEXML_OFFSET))(arg, nullptr);
		}

		::System::Void DeserializeElement(::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_DESERIALIZEELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsModified()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_ISMODIFIED_OFFSET))(nullptr);
		}

		::System::Void Reset(::System::Configuration::ConfigurationElement* arg)
		{
			((::System::Void(*)(::System::Configuration::ConfigurationElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void ResetModified()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_RESETMODIFIED_OFFSET))(nullptr);
		}

		::System::Boolean SerializeToXmlElement(::System::Xml::XmlWriter* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlWriter*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_SERIALIZETOXMLELEMENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void Unmerge(::System::Configuration::ConfigurationElement* arg, ::System::Configuration::ConfigurationElement* arg, ::System::Configuration::ConfigurationSaveMode* arg)
		{
			((::System::Void(*)(::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationSaveMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGVALUEELEMENT_UNMERGE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

