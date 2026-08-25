#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLCDATASECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9990FB0)
#define SYSTEM_XML_XMLCDATASECTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9991010)
#define SYSTEM_XML_XMLCDATASECTION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x9991040)
#define SYSTEM_XML_XMLCDATASECTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9991070)
#define SYSTEM_XML_XMLCDATASECTION_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x9991080)
#define SYSTEM_XML_XMLCDATASECTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x9991120)
#define SYSTEM_XML_XMLCDATASECTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x9991180)
#define SYSTEM_XML_XMLCDATASECTION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x99911D0)
#define SYSTEM_XML_XMLCDATASECTION_GET_XPNODETYPE_OFFSET UNITYSDK_OFFSET(0x99911E0)
#define SYSTEM_XML_XMLCDATASECTION_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x99911F0)
#define SYSTEM_XML_XMLCDATASECTION_GET_PREVIOUSTEXT_OFFSET UNITYSDK_OFFSET(0x9991200)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCDataSection_TypeDefinitionIndex = 27753;

	class XmlCDataSection : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_PARENTNODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeType* get_XPNodeType()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_XPNODETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_ISTEXT_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_PreviousText()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCDATASECTION_GET_PREVIOUSTEXT_OFFSET))(nullptr);
		}

	};
}

