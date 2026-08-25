#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLCOMMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9991900)
#define SYSTEM_XML_XMLCOMMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9991930)
#define SYSTEM_XML_XMLCOMMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x9991960)
#define SYSTEM_XML_XMLCOMMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9991990)
#define SYSTEM_XML_XMLCOMMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x99919A0)
#define SYSTEM_XML_XMLCOMMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x9991A00)
#define SYSTEM_XML_XMLCOMMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x9991A50)
#define SYSTEM_XML_XMLCOMMENT_GET_XPNODETYPE_OFFSET UNITYSDK_OFFSET(0x9991A60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlComment_TypeDefinitionIndex = 27757;

	class XmlComment : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeType* get_XPNodeType()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_GET_XPNODETYPE_OFFSET))(nullptr);
		}

	};
}

