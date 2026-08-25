#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillApplyType; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int SkillApplyType_TypeDefinitionIndex = 14584;

	class SkillApplyType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::SkillApplyType* None; // 0x0
		::MX::Logic::Skills::SkillApplyType* Direct; // 0x0
		::MX::Logic::Skills::SkillApplyType* Hitscan; // 0x0
		::MX::Logic::Skills::SkillApplyType* AlwaysBlocked; // 0x0

	};
}

