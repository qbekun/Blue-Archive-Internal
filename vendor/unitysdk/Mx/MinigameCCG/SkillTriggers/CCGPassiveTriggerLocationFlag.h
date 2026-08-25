#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::SkillTriggers { class CCGPassiveTriggerLocationFlag; }

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int CCGPassiveTriggerLocationFlag_TypeDefinitionIndex = 20891;

	class CCGPassiveTriggerLocationFlag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::SkillTriggers::CCGPassiveTriggerLocationFlag* None; // 0x0
		::MX::MinigameCCG::SkillTriggers::CCGPassiveTriggerLocationFlag* OnBattlefield; // 0x0
		::MX::MinigameCCG::SkillTriggers::CCGPassiveTriggerLocationFlag* OnHand; // 0x0

	};
}

