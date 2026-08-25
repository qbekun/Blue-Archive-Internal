#pragma once
#include "../unitysdk.h"

namespace FlatData { class SkillPriorityCheckCondition; }

namespace FlatData
{
	inline static constexpr unsigned int SkillPriorityCheckCondition_TypeDefinitionIndex = 9400;

	class SkillPriorityCheckCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::SkillPriorityCheckCondition* None; // 0x0
		::FlatData::SkillPriorityCheckCondition* HPRateUnder; // 0x0
		::FlatData::SkillPriorityCheckCondition* DebuffCountOver; // 0x0
		::FlatData::SkillPriorityCheckCondition* BuffCountOver; // 0x0
		::FlatData::SkillPriorityCheckCondition* CrowdControlOver; // 0x0

	};
}

