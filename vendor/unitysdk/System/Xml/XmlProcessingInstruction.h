#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x999F0F0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99AAC50)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x99AACB0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x99AACD0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x99AACE0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_DATA_OFFSET UNITYSDK_OFFSET(0x99AADB0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x99AAE80)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x99AAE90)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x99AAF60)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x99AAF70)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x99AAFC0)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x99AB000)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_XPLOCALNAME_OFFSET UNITYSDK_OFFSET(0x99AB010)
#define SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_XPNODETYPE_OFFSET UNITYSDK_OFFSET(0x99AB030)

namespace System::Xml
{
	inline static constexpr unsigned int XmlProcessingInstruction_TypeDefinitionIndex = 27782;

	class XmlProcessingInstruction : public Il2CppObject
	{
	public:
		::System::String* target; // 0x20
		::System::String* data; // 0x28

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void set_Data(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_DATA_OFFSET))(str, nullptr);
		}

		::System::String* get_InnerText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_INNERTEXT_OFFSET))(nullptr);
		}

		::System::Void set_InnerText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_SET_INNERTEXT_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

		::System::String* get_XPLocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_XPLOCALNAME_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeType* get_XPNodeType()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLPROCESSINGINSTRUCTION_GET_XPNODETYPE_OFFSET))(nullptr);
		}

	};
}

