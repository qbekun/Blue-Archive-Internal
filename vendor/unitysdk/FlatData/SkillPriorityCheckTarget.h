#pragma once
#include "../unitysdk.h"

namespace FlatData { class SkillPriorityCheckTarget; }

namespace FlatData
{
	inline static constexpr unsigned int SkillPriorityCheckTarget_TypeDefinitionIndex = 9401;

	class SkillPriorityCheckTarget : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::SkillPriorityCheckTarget* Ally; // 0x0
		::FlatData::SkillPriorityCheckTarget* Enemy; // 0x0
		::FlatData::SkillPriorityCheckTarget* All; // 0x0

	};
}

