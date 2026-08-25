#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Actions { class NormalAttackAnimationFrameKey; }

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int NormalAttackAnimationFrameKey_TypeDefinitionIndex = 13021;

	class NormalAttackAnimationFrameKey : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Actions::NormalAttackAnimationFrameKey* None; // 0x0
		::MX::Logic::Actions::NormalAttackAnimationFrameKey* AttackEnterDuration; // 0x0
		::MX::Logic::Actions::NormalAttackAnimationFrameKey* AttackStartDuration; // 0x0
		::MX::Logic::Actions::NormalAttackAnimationFrameKey* AttackEndDuration; // 0x0
		::MX::Logic::Actions::NormalAttackAnimationFrameKey* AttackBurstRoundOverDelay; // 0x0
		::MX::Logic::Actions::NormalAttackAnimationFrameKey* AttackIngDuration; // 0x0
		::MX::Logic::Actions::NormalAttackAnimationFrameKey* AttackReloadDuration; // 0x0
		::MX::Logic::Actions::NormalAttackAnimationFrameKey* AttackReadyStartDuration; // 0x0
		::MX::Logic::Actions::NormalAttackAnimationFrameKey* AttackReadyEndDuration; // 0x0

	};
}

