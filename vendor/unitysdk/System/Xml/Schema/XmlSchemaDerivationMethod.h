#pragma once
#include "../../../unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaDerivationMethod_TypeDefinitionIndex = 28146;

	class XmlSchemaDerivationMethod : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Xml::Schema::XmlSchemaDerivationMethod* Empty; // 0x0
		::System::Xml::Schema::XmlSchemaDerivationMethod* Substitution; // 0x0
		::System::Xml::Schema::XmlSchemaDerivationMethod* Extension; // 0x0
		::System::Xml::Schema::XmlSchemaDerivationMethod* Restriction; // 0x0
		::System::Xml::Schema::XmlSchemaDerivationMethod* List; // 0x0
		::System::Xml::Schema::XmlSchemaDerivationMethod* Union; // 0x0
		::System::Xml::Schema::XmlSchemaDerivationMethod* All; // 0x0
		::System::Xml::Schema::XmlSchemaDerivationMethod* None; // 0x0

	};
}

