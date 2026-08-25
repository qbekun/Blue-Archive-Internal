#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x9A0A750)
#define SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_GET_SELECTOR_OFFSET UNITYSDK_OFFSET(0x9A0A760)
#define SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_GET_FIELDS_OFFSET UNITYSDK_OFFSET(0x9A0A770)
#define SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0A780)
#define SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0A810)
#define SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A0ADB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int CompiledIdentityConstraint_TypeDefinitionIndex = 27960;

	class CompiledIdentityConstraint : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* name; // 0x10
		ConstraintRole* role; // 0x18
		::System::Xml::Schema::Asttree* selector; // 0x20
		::Il2CppArray<::System::Object*>* fields; // 0x28
		::System::Xml::XmlQualifiedName* refer; // 0x30
		::System::Xml::Schema::CompiledIdentityConstraint* Empty; // 0x0

		ConstraintRole* get_Role()
		{
			return (return (ConstraintRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_GET_ROLE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::Asttree* get_Selector()
		{
			return (return (::System::Xml::Schema::Asttree*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_GET_SELECTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Fields()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_GET_FIELDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaIdentityConstraint* arg, ::System::Xml::XmlNamespaceManager* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*, ::System::Xml::XmlNamespaceManager*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILEDIDENTITYCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

