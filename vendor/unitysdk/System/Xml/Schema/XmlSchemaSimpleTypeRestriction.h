#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_GET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x98F38C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_SET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x98F38D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x98F3980)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_SET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x98F3990)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_GET_FACETS_OFFSET UNITYSDK_OFFSET(0x98F39A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_CLONE_OFFSET UNITYSDK_OFFSET(0x98F39B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F3A50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleTypeRestriction_TypeDefinitionIndex = 28200;

	class XmlSchemaSimpleTypeRestriction : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* baseTypeName; // 0x50
		::System::Xml::Schema::XmlSchemaSimpleType* baseType; // 0x58
		::System::Xml::Schema::XmlSchemaObjectCollection* facets; // 0x60

		::System::Xml::XmlQualifiedName* get_BaseTypeName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_GET_BASETYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_BaseTypeName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_SET_BASETYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_BaseType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_GET_BASETYPE_OFFSET))(nullptr);
		}

		::System::Void set_BaseType(::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_SET_BASETYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Facets()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_GET_FACETS_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPERESTRICTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

