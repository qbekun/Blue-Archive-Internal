#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLWHITESPACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x999F040)
#define SYSTEM_XML_XMLWHITESPACE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99AB840)
#define SYSTEM_XML_XMLWHITESPACE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x99AB870)
#define SYSTEM_XML_XMLWHITESPACE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x99AB8A0)
#define SYSTEM_XML_XMLWHITESPACE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x99AB8B0)
#define SYSTEM_XML_XMLWHITESPACE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x99AB950)
#define SYSTEM_XML_XMLWHITESPACE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x99AB970)
#define SYSTEM_XML_XMLWHITESPACE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x99ABA10)
#define SYSTEM_XML_XMLWHITESPACE_WRITETO_OFFSET UNITYSDK_OFFSET(0x99ABA70)
#define SYSTEM_XML_XMLWHITESPACE_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x99ABAC0)
#define SYSTEM_XML_XMLWHITESPACE_GET_XPNODETYPE_OFFSET UNITYSDK_OFFSET(0x99ABAD0)
#define SYSTEM_XML_XMLWHITESPACE_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x99ABB00)
#define SYSTEM_XML_XMLWHITESPACE_GET_PREVIOUSTEXT_OFFSET UNITYSDK_OFFSET(0x99ABB10)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWhitespace_TypeDefinitionIndex = 27786;

	class XmlWhitespace : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_PARENTNODE_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeType* get_XPNodeType()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_XPNODETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_ISTEXT_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_PreviousText()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWHITESPACE_GET_PREVIOUSTEXT_OFFSET))(nullptr);
		}

	};
}

