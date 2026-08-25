#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroSummaryDetailFlag; }

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int HeroSummaryDetailFlag_TypeDefinitionIndex = 13292;

	class HeroSummaryDetailFlag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* None; // 0x0
		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* BattleProperty; // 0x0
		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* BattleStatistics; // 0x0
		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* NumericLogs; // 0x0
		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* StatSnapshot; // 0x0
		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* Default; // 0x0
		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* All; // 0x0

	};
}

