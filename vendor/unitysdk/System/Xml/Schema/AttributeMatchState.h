#pragma once
#include "../../../unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int AttributeMatchState_TypeDefinitionIndex = 28095;

	class AttributeMatchState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Xml::Schema::AttributeMatchState* AttributeFound; // 0x0
		::System::Xml::Schema::AttributeMatchState* AnyIdAttributeFound; // 0x0
		::System::Xml::Schema::AttributeMatchState* UndeclaredElementAndAttribute; // 0x0
		::System::Xml::Schema::AttributeMatchState* UndeclaredAttribute; // 0x0
		::System::Xml::Schema::AttributeMatchState* AnyAttributeLax; // 0x0
		::System::Xml::Schema::AttributeMatchState* AnyAttributeSkip; // 0x0
		::System::Xml::Schema::AttributeMatchState* ProhibitedAnyAttribute; // 0x0
		::System::Xml::Schema::AttributeMatchState* ProhibitedAttribute; // 0x0
		::System::Xml::Schema::AttributeMatchState* AttributeNameMismatch; // 0x0
		::System::Xml::Schema::AttributeMatchState* ValidateAttributeInvalidCall; // 0x0

	};
}

