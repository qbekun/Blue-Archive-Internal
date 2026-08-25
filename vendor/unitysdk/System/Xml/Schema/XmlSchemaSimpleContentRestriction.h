#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_GET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x98F3260)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_SET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x98F3270)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x98F3320)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_SET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x98F3330)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_GET_FACETS_OFFSET UNITYSDK_OFFSET(0x98F3340)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98F3350)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_GET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98F3360)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_SET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98F3370)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_SETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98F3380)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F3390)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleContentRestriction_TypeDefinitionIndex = 28196;

	class XmlSchemaSimpleContentRestriction : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* baseTypeName; // 0x50
		::System::Xml::Schema::XmlSchemaSimpleType* baseType; // 0x58
		::System::Xml::Schema::XmlSchemaObjectCollection* facets; // 0x60
		::System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0x68
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0x70

		::System::Xml::XmlQualifiedName* get_BaseTypeName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_GET_BASETYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_BaseTypeName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_SET_BASETYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_BaseType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_GET_BASETYPE_OFFSET))(nullptr);
		}

		::System::Void set_BaseType(::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_SET_BASETYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Facets()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_GET_FACETS_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute()
		{
			return (return (::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_GET_ANYATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_SET_ANYATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_SETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTRESTRICTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

