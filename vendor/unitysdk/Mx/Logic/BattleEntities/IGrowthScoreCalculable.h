#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class GrowthFactor; }

#define MX_LOGIC_BATTLEENTITIES_IGROWTHSCORECALCULABLE_GETGROWTHSTATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int IGrowthScoreCalculable_TypeDefinitionIndex = 13344;

	class IGrowthScoreCalculable : public Il2CppObject
	{
	public:
		::System::Int64 GetGrowthState(::FlatData::GrowthFactor* arg)
		{
			return ((::System::Int64(*)(::FlatData::GrowthFactor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IGROWTHSCORECALCULABLE_GETGROWTHSTATE_OFFSET))(arg, nullptr);
		}

	};
}

