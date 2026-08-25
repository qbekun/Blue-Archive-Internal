#pragma once
#include "../unitysdk.h"

namespace FlatData { class FieldConditionClass; }

namespace FlatData
{
	inline static constexpr unsigned int FieldConditionClass_TypeDefinitionIndex = 9528;

	class FieldConditionClass : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::FieldConditionClass* AndOr; // 0x0
		::FlatData::FieldConditionClass* OrAnd; // 0x0
		::FlatData::FieldConditionClass* Multi; // 0x0

	};
}

