#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E9A10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x98E9B20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_GET_ATTRIBUTEGROUPS_OFFSET UNITYSDK_OFFSET(0x98E9B30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_GET_SCHEMATYPES_OFFSET UNITYSDK_OFFSET(0x98E9B40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x98E9B50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x98E9B60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaRedefine_TypeDefinitionIndex = 28191;

	class XmlSchemaRedefine : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x68
		::System::Xml::Schema::XmlSchemaObjectTable* attributeGroups; // 0x70
		::System::Xml::Schema::XmlSchemaObjectTable* types; // 0x78
		::System::Xml::Schema::XmlSchemaObjectTable* groups; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Items()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_GET_ITEMS_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeGroups()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_GET_ATTRIBUTEGROUPS_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_SchemaTypes()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_GET_SCHEMATYPES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_Groups()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_GET_GROUPS_OFFSET))(nullptr);
		}

		::System::Void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnnotation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAREDEFINE_ADDANNOTATION_OFFSET))(arg, nullptr);
		}

	};
}

