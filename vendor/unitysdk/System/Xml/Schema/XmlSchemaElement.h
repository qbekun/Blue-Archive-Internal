#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x98E4C20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x98E4C30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0x98E4C40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_BLOCK_OFFSET UNITYSDK_OFFSET(0x98E4C50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x98E4C60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x98E4C70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_FINAL_OFFSET UNITYSDK_OFFSET(0x98E4C90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_FINAL_OFFSET UNITYSDK_OFFSET(0x98E4CA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x98E4CB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x98E4CC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_FORM_OFFSET UNITYSDK_OFFSET(0x98E4CE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_FORM_OFFSET UNITYSDK_OFFSET(0x98E4CF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98E4D00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x98E4D10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_ISNILLABLE_OFFSET UNITYSDK_OFFSET(0x98E4D30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ISNILLABLE_OFFSET UNITYSDK_OFFSET(0x98E4D40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_HASNILLABLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E4D50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_HASABSTRACTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E4D60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_REFNAME_OFFSET UNITYSDK_OFFSET(0x98E4D70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_REFNAME_OFFSET UNITYSDK_OFFSET(0x98E4D80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_SUBSTITUTIONGROUP_OFFSET UNITYSDK_OFFSET(0x98E4E30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_SUBSTITUTIONGROUP_OFFSET UNITYSDK_OFFSET(0x98E4E40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_SCHEMATYPENAME_OFFSET UNITYSDK_OFFSET(0x98E4EF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_SCHEMATYPENAME_OFFSET UNITYSDK_OFFSET(0x98E4F00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98E4FB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98E4FC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x98E4FE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E5060)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_ELEMENTSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98E5070)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_BLOCKRESOLVED_OFFSET UNITYSDK_OFFSET(0x98E5080)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_FINALRESOLVED_OFFSET UNITYSDK_OFFSET(0x98E5090)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E50A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x98E50C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SETBLOCKRESOLVED_OFFSET UNITYSDK_OFFSET(0x98E50E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SETFINALRESOLVED_OFFSET UNITYSDK_OFFSET(0x98E50F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_HASCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x98E5100)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_ISLOCALTYPEDERIVATIONCHECKED_OFFSET UNITYSDK_OFFSET(0x98E5130)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ISLOCALTYPEDERIVATIONCHECKED_OFFSET UNITYSDK_OFFSET(0x98E5140)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_ELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x98E5150)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x98E5160)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E5180)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E5190)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_NAMESTRING_OFFSET UNITYSDK_OFFSET(0x98E51B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_CLONE_OFFSET UNITYSDK_OFFSET(0x98E51E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_CLONE_OFFSET UNITYSDK_OFFSET(0x98DEB80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E51F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaElement_TypeDefinitionIndex = 28148;

	class XmlSchemaElement : public Il2CppObject
	{
	public:
		::System::Boolean isAbstract; // 0x78
		::System::Boolean hasAbstractAttribute; // 0x79
		::System::Boolean isNillable; // 0x7A
		::System::Boolean hasNillableAttribute; // 0x7B
		::System::Boolean isLocalTypeDerivationChecked; // 0x7C
		::System::Xml::Schema::XmlSchemaDerivationMethod* block; // 0x80
		::System::Xml::Schema::XmlSchemaDerivationMethod* final; // 0x84
		::System::Xml::Schema::XmlSchemaForm* form; // 0x88
		::System::String* defaultValue; // 0x90
		::System::String* fixedValue; // 0x98
		::System::String* name; // 0xA0
		::System::Xml::XmlQualifiedName* refName; // 0xA8
		::System::Xml::XmlQualifiedName* substitutionGroup; // 0xB0
		::System::Xml::XmlQualifiedName* typeName; // 0xB8
		::System::Xml::Schema::XmlSchemaType* type; // 0xC0
		::System::Xml::XmlQualifiedName* qualifiedName; // 0xC8
		::System::Xml::Schema::XmlSchemaType* elementType; // 0xD0
		::System::Xml::Schema::XmlSchemaDerivationMethod* blockResolved; // 0xD8
		::System::Xml::Schema::XmlSchemaDerivationMethod* finalResolved; // 0xDC
		::System::Xml::Schema::XmlSchemaObjectCollection* constraints; // 0xE0
		::System::Xml::Schema::SchemaElementDecl* elementDecl; // 0xE8

		::System::Boolean get_IsAbstract()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_ISABSTRACT_OFFSET))(nullptr);
		}

		::System::Void set_IsAbstract(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ISABSTRACT_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDerivationMethod* get_Block()
		{
			return (return (::System::Xml::Schema::XmlSchemaDerivationMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::Void set_Block(::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_BLOCK_OFFSET))(arg, nullptr);
		}

		::System::String* get_DefaultValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_DEFAULTVALUE_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDerivationMethod* get_Final()
		{
			return (return (::System::Xml::Schema::XmlSchemaDerivationMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_FINAL_OFFSET))(nullptr);
		}

		::System::Void set_Final(::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_FINAL_OFFSET))(arg, nullptr);
		}

		::System::String* get_FixedValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_FIXEDVALUE_OFFSET))(nullptr);
		}

		::System::Void set_FixedValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_FIXEDVALUE_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaForm* get_Form()
		{
			return (return (::System::Xml::Schema::XmlSchemaForm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_FORM_OFFSET))(nullptr);
		}

		::System::Void set_Form(::System::Xml::Schema::XmlSchemaForm* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaForm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_FORM_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsNillable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_ISNILLABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsNillable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ISNILLABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasNillableAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_HASNILLABLEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasAbstractAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_HASABSTRACTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Xml::XmlQualifiedName* get_RefName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_REFNAME_OFFSET))(nullptr);
		}

		::System::Void set_RefName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_REFNAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_SubstitutionGroup()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_SUBSTITUTIONGROUP_OFFSET))(nullptr);
		}

		::System::Void set_SubstitutionGroup(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_SUBSTITUTIONGROUP_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_SchemaTypeName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_SCHEMATYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_SchemaTypeName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_SCHEMATYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaType* get_SchemaType()
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_SCHEMATYPE_OFFSET))(nullptr);
		}

		::System::Void set_SchemaType(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_SCHEMATYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Constraints()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_CONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Xml::XmlQualifiedName* get_QualifiedName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_QUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaType* get_ElementSchemaType()
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_ELEMENTSCHEMATYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaDerivationMethod* get_BlockResolved()
		{
			return (return (::System::Xml::Schema::XmlSchemaDerivationMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_BLOCKRESOLVED_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaDerivationMethod* get_FinalResolved()
		{
			return (return (::System::Xml::Schema::XmlSchemaDerivationMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_FINALRESOLVED_OFFSET))(nullptr);
		}

		::System::Void SetQualifiedName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SETQUALIFIEDNAME_OFFSET))(arg, nullptr);
		}

		::System::Void SetElementType(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SETELEMENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBlockResolved(::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SETBLOCKRESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void SetFinalResolved(::System::Xml::Schema::XmlSchemaDerivationMethod* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDerivationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SETFINALRESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasConstraints()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_HASCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLocalTypeDerivationChecked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_ISLOCALTYPEDERIVATIONCHECKED_OFFSET))(nullptr);
		}

		::System::Void set_IsLocalTypeDerivationChecked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ISLOCALTYPEDERIVATIONCHECKED_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SchemaElementDecl* get_ElementDecl()
		{
			return (return (::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_ELEMENTDECL_OFFSET))(nullptr);
		}

		::System::Void set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SchemaElementDecl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_ELEMENTDECL_OFFSET))(arg, nullptr);
		}

		::System::String* get_NameAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_NAMEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_NameAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_SET_NAMEATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::String* get_NameString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_GET_NAMESTRING_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_CLONE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone(::System::Xml::Schema::XmlSchema* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

