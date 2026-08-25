#pragma once
#include "../../../unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ValidatorState_TypeDefinitionIndex = 28209;

	class ValidatorState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Xml::Schema::ValidatorState* None; // 0x0
		::System::Xml::Schema::ValidatorState* Start; // 0x0
		::System::Xml::Schema::ValidatorState* TopLevelAttribute; // 0x0
		::System::Xml::Schema::ValidatorState* TopLevelTextOrWS; // 0x0
		::System::Xml::Schema::ValidatorState* Element; // 0x0
		::System::Xml::Schema::ValidatorState* Attribute; // 0x0
		::System::Xml::Schema::ValidatorState* EndOfAttributes; // 0x0
		::System::Xml::Schema::ValidatorState* Text; // 0x0
		::System::Xml::Schema::ValidatorState* Whitespace; // 0x0
		::System::Xml::Schema::ValidatorState* EndElement; // 0x0
		::System::Xml::Schema::ValidatorState* SkipToEndElement; // 0x0
		::System::Xml::Schema::ValidatorState* Finish; // 0x0

	};
}

