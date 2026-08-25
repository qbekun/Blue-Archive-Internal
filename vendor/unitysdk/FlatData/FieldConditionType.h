#pragma once
#include "../unitysdk.h"

namespace FlatData { class FieldConditionType; }

namespace FlatData
{
	inline static constexpr unsigned int FieldConditionType_TypeDefinitionIndex = 9526;

	class FieldConditionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::FieldConditionType* Invalid; // 0x0
		::FlatData::FieldConditionType* Interaction; // 0x0
		::FlatData::FieldConditionType* QuestInProgress; // 0x0
		::FlatData::FieldConditionType* QuestClear; // 0x0
		::FlatData::FieldConditionType* Date; // 0x0
		::FlatData::FieldConditionType* StageClear; // 0x0
		::FlatData::FieldConditionType* HasKeyword; // 0x0
		::FlatData::FieldConditionType* HasEvidence; // 0x0
		::FlatData::FieldConditionType* OpenDate; // 0x0
		::FlatData::FieldConditionType* OpenDateAfter; // 0x0
		::FlatData::FieldConditionType* Scenario; // 0x0
		::FlatData::FieldConditionType* Timeline; // 0x0

	};
}

