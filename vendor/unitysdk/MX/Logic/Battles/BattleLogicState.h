#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class BattleLogicState; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleLogicState_TypeDefinitionIndex = 14054;

	class BattleLogicState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::BattleLogicState* None; // 0x0
		::MX::Logic::Battles::BattleLogicState* Preparing; // 0x0
		::MX::Logic::Battles::BattleLogicState* InProgress; // 0x0
		::MX::Logic::Battles::BattleLogicState* Finished; // 0x0
		::MX::Logic::Battles::BattleLogicState* Paused; // 0x0

	};
}

