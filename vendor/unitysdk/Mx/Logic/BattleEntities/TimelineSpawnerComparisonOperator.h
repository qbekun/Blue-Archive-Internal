#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class TimelineSpawnerComparisonOperator; }

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int TimelineSpawnerComparisonOperator_TypeDefinitionIndex = 13341;

	class TimelineSpawnerComparisonOperator : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::BattleEntities::TimelineSpawnerComparisonOperator* None; // 0x0
		::MX::Logic::BattleEntities::TimelineSpawnerComparisonOperator* Equal; // 0x0
		::MX::Logic::BattleEntities::TimelineSpawnerComparisonOperator* NotEqual; // 0x0
		::MX::Logic::BattleEntities::TimelineSpawnerComparisonOperator* Less; // 0x0
		::MX::Logic::BattleEntities::TimelineSpawnerComparisonOperator* LessOrEqual; // 0x0
		::MX::Logic::BattleEntities::TimelineSpawnerComparisonOperator* Greater; // 0x0
		::MX::Logic::BattleEntities::TimelineSpawnerComparisonOperator* GreaterOrEqual; // 0x0

	};
}

