#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9997300)
#define SYSTEM_XML_XMLLOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x999B860)
#define SYSTEM_XML_XMLLOADER_LOADDOCSEQUENCE_OFFSET UNITYSDK_OFFSET(0x999BAE0)
#define SYSTEM_XML_XMLLOADER_READCURRENTNODE_OFFSET UNITYSDK_OFFSET(0x999C240)
#define SYSTEM_XML_XMLLOADER_LOADNODE_OFFSET UNITYSDK_OFFSET(0x999BB70)
#define SYSTEM_XML_XMLLOADER_LOADATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x999C3A0)
#define SYSTEM_XML_XMLLOADER_LOADDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x999CF70)
#define SYSTEM_XML_XMLLOADER_LOADATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x999D130)
#define SYSTEM_XML_XMLLOADER_LOADENTITYREFERENCENODE_OFFSET UNITYSDK_OFFSET(0x999C700)
#define SYSTEM_XML_XMLLOADER_LOADDECLARATIONNODE_OFFSET UNITYSDK_OFFSET(0x999CA60)
#define SYSTEM_XML_XMLLOADER_LOADDOCUMENTTYPENODE_OFFSET UNITYSDK_OFFSET(0x999CC80)
#define SYSTEM_XML_XMLLOADER_LOADNODEDIRECT_OFFSET UNITYSDK_OFFSET(0x999D4D0)
#define SYSTEM_XML_XMLLOADER_LOADATTRIBUTENODEDIRECT_OFFSET UNITYSDK_OFFSET(0x999EE40)
#define SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x9997CA0)
#define SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x999F180)
#define SYSTEM_XML_XMLLOADER_LOADDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x999DDC0)
#define SYSTEM_XML_XMLLOADER_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x999F5B0)
#define SYSTEM_XML_XMLLOADER_PARSEPARTIALCONTENT_OFFSET UNITYSDK_OFFSET(0x9997310)
#define SYSTEM_XML_XMLLOADER_LOADINNERXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x9999DF0)
#define SYSTEM_XML_XMLLOADER_LOADINNERXMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99A0820)
#define SYSTEM_XML_XMLLOADER_REMOVEDUPLICATENAMESPACE_OFFSET UNITYSDK_OFFSET(0x99A0500)
#define SYSTEM_XML_XMLLOADER_ENTITIZENAME_OFFSET UNITYSDK_OFFSET(0x99A0840)
#define SYSTEM_XML_XMLLOADER_EXPANDENTITY_OFFSET UNITYSDK_OFFSET(0x999A4B0)
#define SYSTEM_XML_XMLLOADER_EXPANDENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x999A980)
#define SYSTEM_XML_XMLLOADER_CREATEINNERXMLREADER_OFFSET UNITYSDK_OFFSET(0x99A0210)
#define SYSTEM_XML_XMLLOADER_PARSEXMLDECLARATIONVALUE_OFFSET UNITYSDK_OFFSET(0x999DB10)
#define SYSTEM_XML_XMLLOADER_UNEXPECTEDNODETYPE_OFFSET UNITYSDK_OFFSET(0x999CE80)

namespace System::Xml
{
	inline static constexpr unsigned int XmlLoader_TypeDefinitionIndex = 27768;

	class XmlLoader : public Il2CppObject
	{
	public:
		::System::Xml::XmlDocument* doc; // 0x10
		::System::Xml::XmlReader* reader; // 0x18
		::System::Boolean preserveWhitespace; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Load(::System::Xml::XmlDocument* arg, ::System::Xml::XmlReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlDocument*, ::System::Xml::XmlReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void LoadDocSequence(::System::Xml::XmlDocument* arg)
		{
			((::System::Void(*)(::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDOCSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* ReadCurrentNode(::System::Xml::XmlDocument* arg, ::System::Xml::XmlReader* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlDocument*, ::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_READCURRENTNODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlNode* LoadNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADNODE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlAttribute* LoadAttributeNode()
		{
			return (return (::System::Xml::XmlAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADATTRIBUTENODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlAttribute* LoadDefaultAttribute()
		{
			return (return (::System::Xml::XmlAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void LoadAttributeValue(::System::Xml::XmlNode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADATTRIBUTEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlEntityReference* LoadEntityReferenceNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlEntityReference*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADENTITYREFERENCENODE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlDeclaration* LoadDeclarationNode()
		{
			return (return (::System::Xml::XmlDeclaration*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDECLARATIONNODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlDocumentType* LoadDocumentTypeNode()
		{
			return (return (::System::Xml::XmlDocumentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDOCUMENTTYPENODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* LoadNodeDirect()
		{
			return (return (::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADNODEDIRECT_OFFSET))(nullptr);
		}

		::System::Xml::XmlAttribute* LoadAttributeNodeDirect()
		{
			return (return (::System::Xml::XmlAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADATTRIBUTENODEDIRECT_OFFSET))(nullptr);
		}

		::System::Void ParseDocumentType(::System::Xml::XmlDocumentType* arg)
		{
			((::System::Void(*)(::System::Xml::XmlDocumentType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void ParseDocumentType(::System::Xml::XmlDocumentType* arg, ::System::Boolean arg, ::System::Xml::XmlResolver* arg)
		{
			((::System::Void(*)(::System::Xml::XmlDocumentType*, ::System::Boolean, ::System::Xml::XmlResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void LoadDocumentType(::System::Xml::IDtdInfo* arg, ::System::Xml::XmlDocumentType* arg)
		{
			((::System::Void(*)(::System::Xml::IDtdInfo*, ::System::Xml::XmlDocumentType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDOCUMENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlParserContext* GetContext(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlParserContext*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_GETCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNamespaceManager* ParsePartialContent(::System::Xml::XmlNode* arg, ::System::String* str, ::System::Xml::XmlNodeType* arg)
		{
			return (return (::System::Xml::XmlNamespaceManager*(*)(::System::Xml::XmlNode*, ::System::String*, ::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEPARTIALCONTENT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void LoadInnerXmlElement(::System::Xml::XmlElement* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlElement*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADINNERXMLELEMENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void LoadInnerXmlAttribute(::System::Xml::XmlAttribute* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlAttribute*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADINNERXMLATTRIBUTE_OFFSET))(arg, str, nullptr);
		}

		::System::Void RemoveDuplicateNamespace(::System::Xml::XmlElement* arg, ::System::Xml::XmlNamespaceManager* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::XmlElement*, ::System::Xml::XmlNamespaceManager*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_REMOVEDUPLICATENAMESPACE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* EntitizeName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_ENTITIZENAME_OFFSET))(str, nullptr);
		}

		::System::Void ExpandEntity(::System::Xml::XmlEntity* arg)
		{
			((::System::Void(*)(::System::Xml::XmlEntity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_EXPANDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void ExpandEntityReference(::System::Xml::XmlEntityReference* arg)
		{
			((::System::Void(*)(::System::Xml::XmlEntityReference*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_EXPANDENTITYREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlReader* CreateInnerXmlReader(::System::String* str, ::System::Xml::XmlNodeType* arg, ::System::Xml::XmlParserContext* arg, ::System::Xml::XmlDocument* arg)
		{
			return (return (::System::Xml::XmlReader*(*)(::System::String*, ::System::Xml::XmlNodeType*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_CREATEINNERXMLREADER_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void ParseXmlDeclarationValue(::System::String* str, ::System::String&* arg, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String&*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEXMLDECLARATIONVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Exception* UnexpectedNodeType(::System::Xml::XmlNodeType* arg)
		{
			return (return (::System::Exception*(*)(::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_UNEXPECTEDNODETYPE_OFFSET))(arg, nullptr);
		}

	};
}

