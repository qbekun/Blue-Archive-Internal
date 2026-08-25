#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_REDEFINEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9884630)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int RedefineEntry_TypeDefinitionIndex = 28083;

	class RedefineEntry : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaRedefine* redefine; // 0x10
		::System::Xml::Schema::XmlSchema* schemaToUpdate; // 0x18

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaRedefine* arg, ::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaRedefine*, ::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_REDEFINEENTRY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

