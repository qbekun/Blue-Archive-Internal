#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x999D4C0)
#define SYSTEM_XML_XMLTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x999D4B0)
#define SYSTEM_XML_XMLTEXT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x99AB350)
#define SYSTEM_XML_XMLTEXT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x99AB380)
#define SYSTEM_XML_XMLTEXT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x99AB3B0)
#define SYSTEM_XML_XMLTEXT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x99AB3C0)
#define SYSTEM_XML_XMLTEXT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x99AB460)
#define SYSTEM_XML_XMLTEXT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x99AB4C0)
#define SYSTEM_XML_XMLTEXT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x99AB4E0)
#define SYSTEM_XML_XMLTEXT_WRITETO_OFFSET UNITYSDK_OFFSET(0x99AB590)
#define SYSTEM_XML_XMLTEXT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x99AB5E0)
#define SYSTEM_XML_XMLTEXT_GET_XPNODETYPE_OFFSET UNITYSDK_OFFSET(0x99AB5F0)
#define SYSTEM_XML_XMLTEXT_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x99AB600)
#define SYSTEM_XML_XMLTEXT_GET_PREVIOUSTEXT_OFFSET UNITYSDK_OFFSET(0x99AB610)

namespace System::Xml
{
	inline static constexpr unsigned int XmlText_TypeDefinitionIndex = 27784;

	class XmlText : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_PARENTNODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeType* get_XPNodeType()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_XPNODETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_ISTEXT_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_PreviousText()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_PREVIOUSTEXT_OFFSET))(nullptr);
		}

	};
}

