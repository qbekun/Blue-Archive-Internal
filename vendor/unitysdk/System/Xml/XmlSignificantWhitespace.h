#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x999EF90)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99AB040)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x99AB070)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x99AB0A0)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x99AB0B0)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x99AB150)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x99AB1B0)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x99AB1D0)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_WRITETO_OFFSET UNITYSDK_OFFSET(0x99AB270)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x99AB2C0)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_XPNODETYPE_OFFSET UNITYSDK_OFFSET(0x99AB2D0)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x99AB300)
#define SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_PREVIOUSTEXT_OFFSET UNITYSDK_OFFSET(0x99AB310)

namespace System::Xml
{
	inline static constexpr unsigned int XmlSignificantWhitespace_TypeDefinitionIndex = 27783;

	class XmlSignificantWhitespace : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_PARENTNODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeType* get_XPNodeType()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_XPNODETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_ISTEXT_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_PreviousText()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSIGNIFICANTWHITESPACE_GET_PREVIOUSTEXT_OFFSET))(nullptr);
		}

	};
}

