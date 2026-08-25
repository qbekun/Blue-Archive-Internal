#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_PARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9882990)
#define SYSTEM_XML_SCHEMA_PARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x9882A80)
#define SYSTEM_XML_SCHEMA_PARSER_STARTPARSING_OFFSET UNITYSDK_OFFSET(0x9882AF0)
#define SYSTEM_XML_SCHEMA_PARSER_CHECKSCHEMAROOT_OFFSET UNITYSDK_OFFSET(0x9883810)
#define SYSTEM_XML_SCHEMA_PARSER_FINISHPARSING_OFFSET UNITYSDK_OFFSET(0x98838F0)
#define SYSTEM_XML_SCHEMA_PARSER_GET_XMLSCHEMA_OFFSET UNITYSDK_OFFSET(0x9883900)
#define SYSTEM_XML_SCHEMA_PARSER_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x9883910)
#define SYSTEM_XML_SCHEMA_PARSER_GET_XDRSCHEMA_OFFSET UNITYSDK_OFFSET(0x9883920)
#define SYSTEM_XML_SCHEMA_PARSER_PARSEREADERNODE_OFFSET UNITYSDK_OFFSET(0x9882F90)
#define SYSTEM_XML_SCHEMA_PARSER_PROCESSAPPINFODOCMARKUP_OFFSET UNITYSDK_OFFSET(0x9883930)
#define SYSTEM_XML_SCHEMA_PARSER_LOADELEMENTNODE_OFFSET UNITYSDK_OFFSET(0x9883C00)
#define SYSTEM_XML_SCHEMA_PARSER_CREATEXMLNSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98842B0)
#define SYSTEM_XML_SCHEMA_PARSER_LOADATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x9884090)
#define SYSTEM_XML_SCHEMA_PARSER_LOADENTITYREFERENCEINATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98843E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Parser_TypeDefinitionIndex = 28081;

	class Parser : public Il2CppObject
	{
	public:
		::System::Xml::Schema::SchemaType* schemaType; // 0x10
		::System::Xml::XmlNameTable* nameTable; // 0x18
		::System::Xml::Schema::SchemaNames* schemaNames; // 0x20
		::System::Xml::Schema::ValidationEventHandler* eventHandler; // 0x28
		::System::Xml::XmlNamespaceManager* namespaceManager; // 0x30
		::System::Xml::XmlReader* reader; // 0x38
		::System::Xml::PositionInfo* positionInfo; // 0x40
		::System::Boolean isProcessNamespaces; // 0x48
		::System::Int32 schemaXmlDepth; // 0x4C
		::System::Int32 markupDepth; // 0x50
		::System::Xml::Schema::SchemaBuilder* builder; // 0x58
		::System::Xml::Schema::XmlSchema* schema; // 0x60
		::System::Xml::Schema::SchemaInfo* xdrSchema; // 0x68
		::System::Xml::XmlResolver* xmlResolver; // 0x70
		::System::Xml::XmlDocument* dummyDocument; // 0x78
		::System::Boolean processMarkup; // 0x80
		::System::Xml::XmlNode* parentNode; // 0x88
		::System::Xml::XmlNamespaceManager* annotationNSManager; // 0x90
		::System::String* xmlns; // 0x98
		::System::Xml::XmlCharType* xmlCharType; // 0xA0

		::System::Void .ctor(::System::Xml::Schema::SchemaType* arg, ::System::Xml::XmlNameTable* arg, ::System::Xml::Schema::SchemaNames* arg, ::System::Xml::Schema::ValidationEventHandler* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaType*, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::SchemaType* Parse(::System::Xml::XmlReader* arg, ::System::String* str)
		{
			return (return (::System::Xml::Schema::SchemaType*(*)(::System::Xml::XmlReader*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_PARSE_OFFSET))(arg, str, nullptr);
		}

		::System::Void StartParsing(::System::Xml::XmlReader* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlReader*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_STARTPARSING_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean CheckSchemaRoot(::System::Xml::Schema::SchemaType* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::SchemaType*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_CHECKSCHEMAROOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::SchemaType* FinishParsing()
		{
			return (return (::System::Xml::Schema::SchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_FINISHPARSING_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchema* get_XmlSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_GET_XMLSCHEMA_OFFSET))(nullptr);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* arg)
		{
			((::System::Void(*)(::System::Xml::XmlResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_SET_XMLRESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaInfo* get_XdrSchema()
		{
			return (return (::System::Xml::Schema::SchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_GET_XDRSCHEMA_OFFSET))(nullptr);
		}

		::System::Boolean ParseReaderNode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_PARSEREADERNODE_OFFSET))(nullptr);
		}

		::System::Void ProcessAppInfoDocMarkup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_PROCESSAPPINFODOCMARKUP_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlElement* LoadElementNode(::System::Boolean arg)
		{
			return (return (::System::Xml::XmlElement*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_LOADELEMENTNODE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlAttribute* CreateXmlNsAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_CREATEXMLNSATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		::System::Xml::XmlAttribute* LoadAttributeNode()
		{
			return (return (::System::Xml::XmlAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_LOADATTRIBUTENODE_OFFSET))(nullptr);
		}

		::System::Xml::XmlEntityReference* LoadEntityReferenceInAttribute()
		{
			return (return (::System::Xml::XmlEntityReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARSER_LOADENTITYREFERENCEINATTRIBUTE_OFFSET))(nullptr);
		}

	};
}

