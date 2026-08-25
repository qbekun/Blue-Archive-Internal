#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9997FC0)
#define SYSTEM_XML_XMLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9998120)
#define SYSTEM_XML_XMLELEMENT_GET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x9998170)
#define SYSTEM_XML_XMLELEMENT_SET_XMLNAME_OFFSET UNITYSDK_OFFSET(0x9998180)
#define SYSTEM_XML_XMLELEMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x9998190)
#define SYSTEM_XML_XMLELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9998890)
#define SYSTEM_XML_XMLELEMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x9998AE0)
#define SYSTEM_XML_XMLELEMENT_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x9998B00)
#define SYSTEM_XML_XMLELEMENT_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x9998B20)
#define SYSTEM_XML_XMLELEMENT_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x9998B40)
#define SYSTEM_XML_XMLELEMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x9998BF0)
#define SYSTEM_XML_XMLELEMENT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x9998C00)
#define SYSTEM_XML_XMLELEMENT_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x9998C10)
#define SYSTEM_XML_XMLELEMENT_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x9998C30)
#define SYSTEM_XML_XMLELEMENT_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x9998C40)
#define SYSTEM_XML_XMLELEMENT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x99987E0)
#define SYSTEM_XML_XMLELEMENT_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x99987F0)
#define SYSTEM_XML_XMLELEMENT_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x9998E90)
#define SYSTEM_XML_XMLELEMENT_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x9998EA0)
#define SYSTEM_XML_XMLELEMENT_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x9998EB0)
#define SYSTEM_XML_XMLELEMENT_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9998ED0)
#define SYSTEM_XML_XMLELEMENT_GET_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9999060)
#define SYSTEM_XML_XMLELEMENT_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9999090)
#define SYSTEM_XML_XMLELEMENT_SETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9999110)
#define SYSTEM_XML_XMLELEMENT_GETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x99991D0)
#define SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x9999230)
#define SYSTEM_XML_XMLELEMENT_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9999350)
#define SYSTEM_XML_XMLELEMENT_SETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99993E0)
#define SYSTEM_XML_XMLELEMENT_GETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x99994F0)
#define SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x9999560)
#define SYSTEM_XML_XMLELEMENT_HASATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9999630)
#define SYSTEM_XML_XMLELEMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x9999650)
#define SYSTEM_XML_XMLELEMENT_WRITEELEMENTTO_OFFSET UNITYSDK_OFFSET(0x9999750)
#define SYSTEM_XML_XMLELEMENT_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x99999F0)
#define SYSTEM_XML_XMLELEMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x9999B20)
#define SYSTEM_XML_XMLELEMENT_REMOVEALLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9999B90)
#define SYSTEM_XML_XMLELEMENT_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x9999BD0)
#define SYSTEM_XML_XMLELEMENT_REMOVEALLCHILDREN_OFFSET UNITYSDK_OFFSET(0x9998E20)
#define SYSTEM_XML_XMLELEMENT_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x9999CD0)
#define SYSTEM_XML_XMLELEMENT_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x9999CE0)
#define SYSTEM_XML_XMLELEMENT_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x9999E60)
#define SYSTEM_XML_XMLELEMENT_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x9999F80)
#define SYSTEM_XML_XMLELEMENT_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x999A0A0)
#define SYSTEM_XML_XMLELEMENT_SETPARENT_OFFSET UNITYSDK_OFFSET(0x999A0E0)
#define SYSTEM_XML_XMLELEMENT_GET_XPNODETYPE_OFFSET UNITYSDK_OFFSET(0x999A0F0)
#define SYSTEM_XML_XMLELEMENT_GET_XPLOCALNAME_OFFSET UNITYSDK_OFFSET(0x999A100)

namespace System::Xml
{
	inline static constexpr unsigned int XmlElement_TypeDefinitionIndex = 27762;

	class XmlElement : public Il2CppObject
	{
	public:
		::System::Xml::XmlName* name; // 0x20
		::System::Xml::XmlAttributeCollection* attributes; // 0x28
		::System::Xml::XmlLinkedNode* lastChild; // 0x30

		::System::Void .ctor(::System::Xml::XmlName* arg, ::System::Boolean arg, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::Xml::XmlName*, ::System::Boolean, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_.CTOR_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Xml::XmlName* get_XmlName()
		{
			return (return (::System::Xml::XmlName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_XMLNAME_OFFSET))(nullptr);
		}

		::System::Void set_XmlName(::System::Xml::XmlName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_XMLNAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_CLONENODE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_NamespaceURI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_NAMESPACEURI_OFFSET))(nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::Void set_Prefix(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_PREFIX_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_PARENTNODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlDocument* get_OwnerDocument()
		{
			return (return (::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_OWNERDOCUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsContainer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_ISCONTAINER_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* arg, ::System::Xml::XmlDocument* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_APPENDCHILDFORLOAD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void set_IsEmpty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_ISEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return (return (::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_LASTNODE_OFFSET))(nullptr);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlLinkedNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_LASTNODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_ISVALIDCHILDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlAttributeCollection* get_Attributes()
		{
			return (return (::System::Xml::XmlAttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean get_HasAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_HASATTRIBUTES_OFFSET))(nullptr);
		}

		::System::String* GetAttribute(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GETATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void SetAttribute(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		::System::Xml::XmlAttribute* GetAttributeNode(::System::String* str)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GETATTRIBUTENODE_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlAttribute* SetAttributeNode(::System::Xml::XmlAttribute* arg)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::Xml::XmlAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_OFFSET))(arg, nullptr);
		}

		::System::String* GetAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GETATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		::System::String* SetAttribute(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETATTRIBUTE_OFFSET))(str, str, str, nullptr);
		}

		::System::Xml::XmlAttribute* GetAttributeNode(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GETATTRIBUTENODE_OFFSET))(str, str, nullptr);
		}

		::System::Xml::XmlAttribute* SetAttributeNode(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETATTRIBUTENODE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean HasAttribute(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_HASATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteElementTo(::System::Xml::XmlWriter* arg, ::System::Xml::XmlElement* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::System::Xml::XmlElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITEELEMENTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteStartElement(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITESTARTELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_WRITECONTENTTO_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAllAttributes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_REMOVEALLATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Void RemoveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_REMOVEALL_OFFSET))(nullptr);
		}

		::System::Void RemoveAllChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_REMOVEALLCHILDREN_OFFSET))(nullptr);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return (return (::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_SCHEMAINFO_OFFSET))(nullptr);
		}

		::System::Void set_InnerXml(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_INNERXML_OFFSET))(str, nullptr);
		}

		::System::String* get_InnerText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_INNERTEXT_OFFSET))(nullptr);
		}

		::System::Void set_InnerText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SET_INNERTEXT_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlNode* get_NextSibling()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_NEXTSIBLING_OFFSET))(nullptr);
		}

		::System::Void SetParent(::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_SETPARENT_OFFSET))(arg, nullptr);
		}

		::System::Xml::XPath::XPathNodeType* get_XPNodeType()
		{
			return (return (::System::Xml::XPath::XPathNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_XPNODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_XPLocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENT_GET_XPLOCALNAME_OFFSET))(nullptr);
		}

	};
}

