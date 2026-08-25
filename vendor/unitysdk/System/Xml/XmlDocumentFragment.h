#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x99970E0)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9997180)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x99971B0)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x99971E0)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x99971F0)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x9997200)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x9997280)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x9997570)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x99975F0)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x9997600)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x9997610)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x9997620)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_CANINSERTAFTER_OFFSET UNITYSDK_OFFSET(0x9997680)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_CANINSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x99976E0)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x9997740)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x9997760)
#define SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_XPNODETYPE_OFFSET UNITYSDK_OFFSET(0x9997B20)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDocumentFragment_TypeDefinitionIndex = 27760;

	class XmlDocumentFragment : public Il2CppObject
	{
	public:
		::System::Xml::XmlLinkedNode* lastChild; // 0x18

		::System::Void .ctor(::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_PARENTNODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlDocument* get_OwnerDocument()
		{
			return (return (::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_OWNERDOCUMENT_OFFSET))(nullptr);
		}

		::System::Void set_InnerXml(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_SET_INNERXML_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsContainer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_ISCONTAINER_OFFSET))(nullptr);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return (return (::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_LASTNODE_OFFSET))(nullptr);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlLinkedNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_SET_LASTNODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_ISVALIDCHILDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanInsertAfter(::System::Xml::XmlNode* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_CANINSERTAFTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanInsertBefore(::System::Xml::XmlNode* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_CANINSERTBEFORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeType* get_XPNodeType()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTFRAGMENT_GET_XPNODETYPE_OFFSET))(nullptr);
		}

	};
}

