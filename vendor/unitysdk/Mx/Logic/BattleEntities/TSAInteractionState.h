#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class TSAInteractionState; }

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TSAInteractionState_TypeDefinitionIndex = 13142;

	class TSAInteractionState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::BattleEntities::TSAInteractionState* NotInteracting; // 0x0
		::MX::Logic::BattleEntities::TSAInteractionState* Interacting; // 0x0
		::MX::Logic::BattleEntities::TSAInteractionState* TSADying; // 0x0

	};
}

