#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98E65C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x98E65D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_SELECTOR_OFFSET UNITYSDK_OFFSET(0x98E65E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SET_SELECTOR_OFFSET UNITYSDK_OFFSET(0x98E65F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_FIELDS_OFFSET UNITYSDK_OFFSET(0x98E6600)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E6610)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E6620)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_COMPILEDCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x98E6630)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SET_COMPILEDCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x98E6640)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6650)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6660)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E6670)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaIdentityConstraint_TypeDefinitionIndex = 28170;

	class XmlSchemaIdentityConstraint : public Il2CppObject
	{
	public:
		::System::String* name; // 0x50
		::System::Xml::Schema::XmlSchemaXPath* selector; // 0x58
		::System::Xml::Schema::XmlSchemaObjectCollection* fields; // 0x60
		::System::Xml::XmlQualifiedName* qualifiedName; // 0x68
		::System::Xml::Schema::CompiledIdentityConstraint* compiledConstraint; // 0x70

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaXPath* get_Selector()
		{
			return (return (::System::Xml::Schema::XmlSchemaXPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_SELECTOR_OFFSET))(nullptr);
		}

		::System::Void set_Selector(::System::Xml::Schema::XmlSchemaXPath* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaXPath*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SET_SELECTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Fields()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_FIELDS_OFFSET))(nullptr);
		}

		::System::Xml::XmlQualifiedName* get_QualifiedName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_QUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Void SetQualifiedName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SETQUALIFIEDNAME_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::CompiledIdentityConstraint* get_CompiledConstraint()
		{
			return (return (::System::Xml::Schema::CompiledIdentityConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_COMPILEDCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Void set_CompiledConstraint(::System::Xml::Schema::CompiledIdentityConstraint* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::CompiledIdentityConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SET_COMPILEDCONSTRAINT_OFFSET))(arg, nullptr);
		}

		::System::String* get_NameAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_GET_NAMEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_NameAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_SET_NAMEATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAIDENTITYCONSTRAINT_.CTOR_OFFSET))(nullptr);
		}

	};
}

