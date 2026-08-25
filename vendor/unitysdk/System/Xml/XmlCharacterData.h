#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLCHARACTERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9990FE0)
#define SYSTEM_XML_XMLCHARACTERDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9991240)
#define SYSTEM_XML_XMLCHARACTERDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9991260)
#define SYSTEM_XML_XMLCHARACTERDATA_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x9991280)
#define SYSTEM_XML_XMLCHARACTERDATA_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x99912A0)
#define SYSTEM_XML_XMLCHARACTERDATA_GET_DATA_OFFSET UNITYSDK_OFFSET(0x99912C0)
#define SYSTEM_XML_XMLCHARACTERDATA_SET_DATA_OFFSET UNITYSDK_OFFSET(0x9991320)
#define SYSTEM_XML_XMLCHARACTERDATA_CHECKONDATA_OFFSET UNITYSDK_OFFSET(0x99913F0)
#define SYSTEM_XML_XMLCHARACTERDATA_DECIDEXPNODETYPEFORTEXTNODES_OFFSET UNITYSDK_OFFSET(0x9991420)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCharacterData_TypeDefinitionIndex = 27754;

	class XmlCharacterData : public Il2CppObject
	{
	public:
		::System::String* data; // 0x20

		::System::Void .ctor(::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::String* get_InnerText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_GET_INNERTEXT_OFFSET))(nullptr);
		}

		::System::Void set_InnerText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_SET_INNERTEXT_OFFSET))(str, nullptr);
		}

		::System::String* get_Data()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_Data(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_SET_DATA_OFFSET))(str, nullptr);
		}

		::System::Boolean CheckOnData(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_CHECKONDATA_OFFSET))(str, nullptr);
		}

		::System::Boolean DecideXPNodeTypeForTextNodes(::System::Xml::XmlNode* arg, ::System::Xml::XPath::XPathNodeType&* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNode*, ::System::Xml::XPath::XPathNodeType&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_DECIDEXPNODETYPEFORTEXTNODES_OFFSET))(arg, arg, nullptr);
		}

	};
}

