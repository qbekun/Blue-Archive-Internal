#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x98E0250)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x98E0260)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x98E0270)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x98E0280)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_FORM_OFFSET UNITYSDK_OFFSET(0x98E0290)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_FORM_OFFSET UNITYSDK_OFFSET(0x98E02A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98E02B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x98E02C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_REFNAME_OFFSET UNITYSDK_OFFSET(0x98E02D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_REFNAME_OFFSET UNITYSDK_OFFSET(0x98E02E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_SCHEMATYPENAME_OFFSET UNITYSDK_OFFSET(0x98E0390)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_SCHEMATYPENAME_OFFSET UNITYSDK_OFFSET(0x98E03A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98E0450)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98E0460)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_USE_OFFSET UNITYSDK_OFFSET(0x98E0480)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_USE_OFFSET UNITYSDK_OFFSET(0x98E0490)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E04A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_ATTRIBUTESCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98E04B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x98E04C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E04E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SETATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x98E04F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_ATTDEF_OFFSET UNITYSDK_OFFSET(0x98E0510)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_ATTDEF_OFFSET UNITYSDK_OFFSET(0x98E0520)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E0540)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E0550)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_CLONE_OFFSET UNITYSDK_OFFSET(0x98E0560)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E0660)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAttribute_TypeDefinitionIndex = 28129;

	class XmlSchemaAttribute : public Il2CppObject
	{
	public:
		::System::String* defaultValue; // 0x50
		::System::String* fixedValue; // 0x58
		::System::String* name; // 0x60
		::System::Xml::Schema::XmlSchemaForm* form; // 0x68
		::System::Xml::Schema::XmlSchemaUse* use; // 0x6C
		::System::Xml::XmlQualifiedName* refName; // 0x70
		::System::Xml::XmlQualifiedName* typeName; // 0x78
		::System::Xml::XmlQualifiedName* qualifiedName; // 0x80
		::System::Xml::Schema::XmlSchemaSimpleType* type; // 0x88
		::System::Xml::Schema::XmlSchemaSimpleType* attributeType; // 0x90
		::System::Xml::Schema::SchemaAttDef* attDef; // 0x98

		::System::String* get_DefaultValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_DEFAULTVALUE_OFFSET))(str, nullptr);
		}

		::System::String* get_FixedValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_FIXEDVALUE_OFFSET))(nullptr);
		}

		::System::Void set_FixedValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_FIXEDVALUE_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaForm* get_Form()
		{
			return (return (::System::Xml::Schema::XmlSchemaForm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_FORM_OFFSET))(nullptr);
		}

		::System::Void set_Form(::System::Xml::Schema::XmlSchemaForm* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaForm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_FORM_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_RefName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_REFNAME_OFFSET))(nullptr);
		}

		::System::Void set_RefName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_REFNAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_SchemaTypeName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_SCHEMATYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_SchemaTypeName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_SCHEMATYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_SchemaType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_SCHEMATYPE_OFFSET))(nullptr);
		}

		::System::Void set_SchemaType(::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_SCHEMATYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaUse* get_Use()
		{
			return (return (::System::Xml::Schema::XmlSchemaUse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_USE_OFFSET))(nullptr);
		}

		::System::Void set_Use(::System::Xml::Schema::XmlSchemaUse* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaUse*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_USE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_QualifiedName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_QUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_AttributeSchemaType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_ATTRIBUTESCHEMATYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* get_Datatype()
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_DATATYPE_OFFSET))(nullptr);
		}

		::System::Void SetQualifiedName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SETQUALIFIEDNAME_OFFSET))(arg, nullptr);
		}

		::System::Void SetAttributeType(::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SETATTRIBUTETYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaAttDef* get_AttDef()
		{
			return (return (::System::Xml::Schema::SchemaAttDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_ATTDEF_OFFSET))(nullptr);
		}

		::System::Void set_AttDef(::System::Xml::Schema::SchemaAttDef* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaAttDef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_ATTDEF_OFFSET))(arg, nullptr);
		}

		::System::String* get_NameAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_GET_NAMEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_NameAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_SET_NAMEATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

