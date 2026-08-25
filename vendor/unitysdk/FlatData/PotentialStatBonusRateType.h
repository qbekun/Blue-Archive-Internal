#pragma once
#include "../unitysdk.h"

namespace FlatData { class PotentialStatBonusRateType; }

namespace FlatData
{
	inline static constexpr unsigned int PotentialStatBonusRateType_TypeDefinitionIndex = 9435;

	class PotentialStatBonusRateType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::PotentialStatBonusRateType* None; // 0x0
		::FlatData::PotentialStatBonusRateType* MaxHP; // 0x0
		::FlatData::PotentialStatBonusRateType* AttackPower; // 0x0
		::FlatData::PotentialStatBonusRateType* HealPower; // 0x0

	};
}

