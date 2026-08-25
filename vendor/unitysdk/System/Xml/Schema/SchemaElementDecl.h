#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_.CTOR_OFFSET UNITYSDK_OFFSET(0x98ADAB0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_.CTOR_OFFSET UNITYSDK_OFFSET(0x98ADBD0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_.CTOR_OFFSET UNITYSDK_OFFSET(0x98ADD50)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CREATEANYTYPEELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x98ADE30)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM.XML.IDTDATTRIBUTELISTINFO.GET_HASNONCDATAATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98ADF30)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM.XML.IDTDATTRIBUTELISTINFO.LOOKUPATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98ADF40)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM.XML.IDTDATTRIBUTELISTINFO.LOOKUPDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98ADFF0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISIDDECLARED_OFFSET UNITYSDK_OFFSET(0x98AE000)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISIDDECLARED_OFFSET UNITYSDK_OFFSET(0x98AE010)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASNONCDATAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98AE020)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_HASNONCDATAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98AE030)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CLONE_OFFSET UNITYSDK_OFFSET(0x98AE040)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x98AE0A0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x98AE0B0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISNILLABLE_OFFSET UNITYSDK_OFFSET(0x98AE0C0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISNILLABLE_OFFSET UNITYSDK_OFFSET(0x98AE0D0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0x98AE0E0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_BLOCK_OFFSET UNITYSDK_OFFSET(0x98AE0F0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISNOTATIONDECLARED_OFFSET UNITYSDK_OFFSET(0x98AE100)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISNOTATIONDECLARED_OFFSET UNITYSDK_OFFSET(0x98AE110)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98AE120)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASREQUIREDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98AE130)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_CONTENTVALIDATOR_OFFSET UNITYSDK_OFFSET(0x98AE140)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_CONTENTVALIDATOR_OFFSET UNITYSDK_OFFSET(0x98AE150)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98AE160)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98AE170)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x98AE190)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x98AE1A0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x98AE1C0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x98AE1D0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_ADDATTDEF_OFFSET UNITYSDK_OFFSET(0x98AE1F0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GETATTDEF_OFFSET UNITYSDK_OFFSET(0x98AE350)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_DEFAULTATTDEFS_OFFSET UNITYSDK_OFFSET(0x98AE3C0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ATTDEFS_OFFSET UNITYSDK_OFFSET(0x98AE3D0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_PROHIBITEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98AE3E0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CHECKATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98AE3F0)
#define SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x98AE6F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaElementDecl_TypeDefinitionIndex = 28093;

	class SchemaElementDecl : public Il2CppObject
	{
	public:
		Il2CppObject* attdefs; // 0x60
		Il2CppObject* defaultAttdefs; // 0x68
		::System::Boolean isIdDeclared; // 0x70
		::System::Boolean hasNonCDataAttribute; // 0x71
		::System::Boolean isAbstract; // 0x72
		::System::Boolean isNillable; // 0x73
		::System::Boolean hasRequiredAttribute; // 0x74
		::System::Boolean isNotationDeclared; // 0x75
		Il2CppObject* prohibitedAttributes; // 0x78
		::System::Xml::Schema::ContentValidator* contentValidator; // 0x80
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0x88
		::System::Xml::Schema::XmlSchemaDerivationMethod* block; // 0x90
		::Il2CppArray<::System::Object*>* constraints; // 0x98
		::System::Xml::Schema::XmlSchemaElement* schemaElement; // 0xA0
		::System::Xml::Schema::SchemaElementDecl* Empty; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlQualifiedName* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Xml::Schema::SchemaElementDecl* CreateAnyTypeElementDecl()
		{
			return (return (::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CREATEANYTYPEELEMENTDECL_OFFSET))(nullptr);
		}

		::System::Boolean System.Xml.IDtdAttributeListInfo.get_HasNonCDataAttributes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM.XML.IDTDATTRIBUTELISTINFO.GET_HASNONCDATAATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Xml::IDtdAttributeInfo* System.Xml.IDtdAttributeListInfo.LookupAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::IDtdAttributeInfo*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM.XML.IDTDATTRIBUTELISTINFO.LOOKUPATTRIBUTE_OFFSET))(str, str, nullptr);
		}

		Il2CppObject* System.Xml.IDtdAttributeListInfo.LookupDefaultAttributes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SYSTEM.XML.IDTDATTRIBUTELISTINFO.LOOKUPDEFAULTATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsIdDeclared()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISIDDECLARED_OFFSET))(nullptr);
		}

		::System::Void set_IsIdDeclared(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISIDDECLARED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasNonCDataAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASNONCDATAATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_HasNonCDataAttribute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_HASNONCDATAATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaElementDecl* Clone()
		{
			return (return (::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAbstract()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISABSTRACT_OFFSET))(nullptr);
		}

		::System::Void set_IsAbstract(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISABSTRACT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNillable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISNILLABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsNillable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISNILLABLE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDerivationMethod* get_Block()
		{
			return (return (::System::Xml::Schema::XmlSchemaDerivationMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::Void set_Block(::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_BLOCK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNotationDeclared()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ISNOTATIONDECLARED_OFFSET))(nullptr);
		}

		::System::Void set_IsNotationDeclared(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ISNOTATIONDECLARED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasRequiredAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_HASREQUIREDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::ContentValidator* get_ContentValidator()
		{
			return (return (::System::Xml::Schema::ContentValidator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_CONTENTVALIDATOR_OFFSET))(nullptr);
		}

		::System::Void set_ContentValidator(::System::Xml::Schema::ContentValidator* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::ContentValidator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_CONTENTVALIDATOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute()
		{
			return (return (::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ANYATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_ANYATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Constraints()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_CONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Void set_Constraints(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_CONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaElement* get_SchemaElement()
		{
			return (return (::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_SCHEMAELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_SchemaElement(::System::Xml::Schema::XmlSchemaElement* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_SET_SCHEMAELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void AddAttDef(::System::Xml::Schema::SchemaAttDef* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaAttDef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_ADDATTDEF_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaAttDef* GetAttDef(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Xml::Schema::SchemaAttDef*(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GETATTDEF_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DefaultAttDefs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_DEFAULTATTDEFS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AttDefs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_ATTDEFS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProhibitedAttributes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_GET_PROHIBITEDATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Void CheckAttributes(::System::Collections::Hashtable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Collections::Hashtable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_CHECKATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMAELEMENTDECL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

