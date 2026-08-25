#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x998E260)
#define SYSTEM_XML_XMLATTRIBUTE_GET_LOCALNAMEHASH_OFFSET UNITYSDK_OFFSET(0x998E450)
#define SYSTEM_XML_XMLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x998E470)
#define SYSTEM_XML_XMLATTRIBUTE_GET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x998E5D0)
#define SYSTEM_XML_XMLATTRIBUTE_SET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x998E5E0)
#define SYSTEM_XML_XMLATTRIBUTE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x998E5F0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x998E6C0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x998E6D0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x998E6F0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x998E710)
#define SYSTEM_XML_XMLATTRIBUTE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x998E730)
#define SYSTEM_XML_XMLATTRIBUTE_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x998E750)
#define SYSTEM_XML_XMLATTRIBUTE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x998E7F0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x998E800)
#define SYSTEM_XML_XMLATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x998E820)
#define SYSTEM_XML_XMLATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x998E840)
#define SYSTEM_XML_XMLATTRIBUTE_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x998E860)
#define SYSTEM_XML_XMLATTRIBUTE_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x998E870)
#define SYSTEM_XML_XMLATTRIBUTE_PREPAREOWNERELEMENTINELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x998E930)
#define SYSTEM_XML_XMLATTRIBUTE_RESETOWNERELEMENTINELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x998E9E0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x998EBF0)
#define SYSTEM_XML_XMLATTRIBUTE_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x998EC00)
#define SYSTEM_XML_XMLATTRIBUTE_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x998EE50)
#define SYSTEM_XML_XMLATTRIBUTE_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x998EE60)
#define SYSTEM_XML_XMLATTRIBUTE_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x998EE70)
#define SYSTEM_XML_XMLATTRIBUTE_GET_SPECIFIED_OFFSET UNITYSDK_OFFSET(0x998EE80)
#define SYSTEM_XML_XMLATTRIBUTE_INSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x998EE90)
#define SYSTEM_XML_XMLATTRIBUTE_INSERTAFTER_OFFSET UNITYSDK_OFFSET(0x998EF60)
#define SYSTEM_XML_XMLATTRIBUTE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x998F030)
#define SYSTEM_XML_XMLATTRIBUTE_PREPENDCHILD_OFFSET UNITYSDK_OFFSET(0x998F100)
#define SYSTEM_XML_XMLATTRIBUTE_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x998F1D0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_OWNERELEMENT_OFFSET UNITYSDK_OFFSET(0x998F2A0)
#define SYSTEM_XML_XMLATTRIBUTE_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x998F310)
#define SYSTEM_XML_XMLATTRIBUTE_WRITETO_OFFSET UNITYSDK_OFFSET(0x998F390)
#define SYSTEM_XML_XMLATTRIBUTE_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x998F440)
#define SYSTEM_XML_XMLATTRIBUTE_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x998F4B0)
#define SYSTEM_XML_XMLATTRIBUTE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x998F540)
#define SYSTEM_XML_XMLATTRIBUTE_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x998F550)
#define SYSTEM_XML_XMLATTRIBUTE_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x998F5B0)
#define SYSTEM_XML_XMLATTRIBUTE_GET_XPNODETYPE_OFFSET UNITYSDK_OFFSET(0x998F640)
#define SYSTEM_XML_XMLATTRIBUTE_GET_XPLOCALNAME_OFFSET UNITYSDK_OFFSET(0x998F680)
#define SYSTEM_XML_XMLATTRIBUTE_GET_ISNAMESPACE_OFFSET UNITYSDK_OFFSET(0x99885D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAttribute_TypeDefinitionIndex = 27751;

	class XmlAttribute : public Il2CppObject
	{
	public:
		::System::Xml::XmlName* name; // 0x18
		::System::Xml::XmlLinkedNode* lastChild; // 0x20

		::System::Void .ctor(::System::Xml::XmlName* arg, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::Xml::XmlName*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_LocalNameHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_LOCALNAMEHASH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_.CTOR_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Xml::XmlName* get_XmlName()
		{
			return (return (::System::Xml::XmlName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_XMLNAME_OFFSET))(nullptr);
		}

		::System::Void set_XmlName(::System::Xml::XmlName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SET_XMLNAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_PARENTNODE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_NamespaceURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::Void set_Prefix(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SET_PREFIX_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlDocument* get_OwnerDocument()
		{
			return (return (::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_OWNERDOCUMENT_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return (return (::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_SCHEMAINFO_OFFSET))(nullptr);
		}

		::System::Void set_InnerText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SET_INNERTEXT_OFFSET))(str, nullptr);
		}

		::System::Boolean PrepareOwnerElementInElementIdAttrMap()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_PREPAREOWNERELEMENTINELEMENTIDATTRMAP_OFFSET))(nullptr);
		}

		::System::Void ResetOwnerElementInElementIdAttrMap(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_RESETOWNERELEMENTINELEMENTIDATTRMAP_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsContainer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_ISCONTAINER_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* arg, ::System::Xml::XmlDocument* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_APPENDCHILDFORLOAD_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return (return (::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_LASTNODE_OFFSET))(nullptr);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlLinkedNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SET_LASTNODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_ISVALIDCHILDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Specified()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_SPECIFIED_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* InsertBefore(::System::Xml::XmlNode* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_INSERTBEFORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlNode* InsertAfter(::System::Xml::XmlNode* arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_INSERTAFTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_REMOVECHILD_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* PrependChild(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_PREPENDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_APPENDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlElement* get_OwnerElement()
		{
			return (return (::System::Xml::XmlElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_OWNERELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_InnerXml(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SET_INNERXML_OFFSET))(str, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

		::System::String* get_BaseURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_BASEURI_OFFSET))(nullptr);
		}

		::System::Void SetParent(::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_SETPARENT_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlSpace* get_XmlSpace()
		{
			return (return (::System::Xml::XmlSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_XMLSPACE_OFFSET))(nullptr);
		}

		::System::String* get_XmlLang()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_XMLLANG_OFFSET))(nullptr);
		}

		::System::Xml::XPath::XPathNodeType* get_XPNodeType()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_XPNODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_XPLocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_XPLOCALNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNamespace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTE_GET_ISNAMESPACE_OFFSET))(nullptr);
		}

	};
}

