#pragma once
#include "../unitysdk.h"

namespace FlatData { class BattleCalculationStat; }

namespace FlatData
{
	inline static constexpr unsigned int BattleCalculationStat_TypeDefinitionIndex = 9416;

	class BattleCalculationStat : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::BattleCalculationStat* FinalDamage; // 0x0
		::FlatData::BattleCalculationStat* FinalHeal; // 0x0
		::FlatData::BattleCalculationStat* FinalDamageRatio; // 0x0
		::FlatData::BattleCalculationStat* FinalDamageRatio2; // 0x0
		::FlatData::BattleCalculationStat* FinalCriticalRate; // 0x0

	};
}

