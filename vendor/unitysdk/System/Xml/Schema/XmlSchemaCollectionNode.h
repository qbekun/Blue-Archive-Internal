#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_SET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x98E1B20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x98E1B30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_SET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x98E1B40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_GET_SCHEMA_OFFSET UNITYSDK_OFFSET(0x98E1B50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_SET_SCHEMA_OFFSET UNITYSDK_OFFSET(0x98E1B60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E1970)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaCollectionNode_TypeDefinitionIndex = 28134;

	class XmlSchemaCollectionNode : public Il2CppObject
	{
	public:
		::System::String* namespaceUri; // 0x10
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0x18
		::System::Xml::Schema::XmlSchema* schema; // 0x20

		::System::Void set_NamespaceURI(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_SET_NAMESPACEURI_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::SchemaInfo* get_SchemaInfo()
		{
			return (return (::System::Xml::Schema::SchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_GET_SCHEMAINFO_OFFSET))(nullptr);
		}

		::System::Void set_SchemaInfo(::System::Xml::Schema::SchemaInfo* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_SET_SCHEMAINFO_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchema* get_Schema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_GET_SCHEMA_OFFSET))(nullptr);
		}

		::System::Void set_Schema(::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_SET_SCHEMA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTIONNODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

