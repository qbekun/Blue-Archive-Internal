#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class TargetSortOrder; }

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TargetSortOrder_TypeDefinitionIndex = 13262;

	class TargetSortOrder : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::BattleEntities::TargetSortOrder* None; // 0x0
		::MX::Logic::BattleEntities::TargetSortOrder* Highest; // 0x0
		::MX::Logic::BattleEntities::TargetSortOrder* Lowest; // 0x0
		::MX::Logic::BattleEntities::TargetSortOrder* Random; // 0x0
		::MX::Logic::BattleEntities::TargetSortOrder* CyclicRandom; // 0x0

	};
}

