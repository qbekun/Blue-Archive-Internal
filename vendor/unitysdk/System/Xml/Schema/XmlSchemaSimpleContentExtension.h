#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_GET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x98F30B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_SET_BASETYPENAME_OFFSET UNITYSDK_OFFSET(0x98F30C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98F3170)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_GET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98F3180)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_SET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98F3190)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_SETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98F31A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F31B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleContentExtension_TypeDefinitionIndex = 28195;

	class XmlSchemaSimpleContentExtension : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0x50
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0x58
		::System::Xml::XmlQualifiedName* baseTypeName; // 0x60

		::System::Xml::XmlQualifiedName* get_BaseTypeName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_GET_BASETYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_BaseTypeName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_SET_BASETYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute()
		{
			return (return (::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_GET_ANYATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_SET_ANYATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_SETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENTEXTENSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

