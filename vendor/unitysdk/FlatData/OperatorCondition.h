#pragma once
#include "../unitysdk.h"

namespace FlatData { class OperatorCondition; }

namespace FlatData
{
	inline static constexpr unsigned int OperatorCondition_TypeDefinitionIndex = 9403;

	class OperatorCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::OperatorCondition* None; // 0x0
		::FlatData::OperatorCondition* StrategyStart; // 0x0
		::FlatData::OperatorCondition* StrategyVictory; // 0x0
		::FlatData::OperatorCondition* StrategyDefeat; // 0x0
		::FlatData::OperatorCondition* AdventureCombatStart; // 0x0
		::FlatData::OperatorCondition* AdventureCombatVictory; // 0x0
		::FlatData::OperatorCondition* AdventureCombatDefeat; // 0x0
		::FlatData::OperatorCondition* ArenaCombatStart; // 0x0
		::FlatData::OperatorCondition* ArenaCombatVictory; // 0x0
		::FlatData::OperatorCondition* ArenaCombatDefeat; // 0x0
		::FlatData::OperatorCondition* WeekDungeonCombatStart; // 0x0
		::FlatData::OperatorCondition* WeekDungeonCombatVictory; // 0x0
		::FlatData::OperatorCondition* WeekDungeonCombatDefeat; // 0x0
		::FlatData::OperatorCondition* SchoolDungeonCombatStart; // 0x0
		::FlatData::OperatorCondition* SchoolDungeonCombatVictory; // 0x0
		::FlatData::OperatorCondition* SchoolDungeonCombatDefeat; // 0x0
		::FlatData::OperatorCondition* StrategyWarpUnitFromHideTile; // 0x0
		::FlatData::OperatorCondition* TimeAttackDungeonStart; // 0x0
		::FlatData::OperatorCondition* TimeAttackDungeonVictory; // 0x0
		::FlatData::OperatorCondition* TimeAttackDungeonDefeat; // 0x0
		::FlatData::OperatorCondition* WorldRaidBossSpawn; // 0x0
		::FlatData::OperatorCondition* WorldRaidBossKill; // 0x0
		::FlatData::OperatorCondition* WorldRaidBossDamaged; // 0x0
		::FlatData::OperatorCondition* WorldRaidScenarioBattle; // 0x0
		::FlatData::OperatorCondition* MinigameTBGThemaOpen; // 0x0
		::FlatData::OperatorCondition* MinigameTBGThemaComeback; // 0x0
		::FlatData::OperatorCondition* MinigameTBGAllyRevive; // 0x0
		::FlatData::OperatorCondition* MinigameTBGItemUse; // 0x0

	};
}

