#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexaTileMapConditionType; }

namespace MX::Campaign
{
	inline static constexpr unsigned int HexaTileMapConditionType_TypeDefinitionIndex = 14894;

	class HexaTileMapConditionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Campaign::HexaTileMapConditionType* PlayerTurnStart; // 0x0
		::MX::Campaign::HexaTileMapConditionType* EnemyTurnStart; // 0x0
		::MX::Campaign::HexaTileMapConditionType* UnitDead; // 0x0
		::MX::Campaign::HexaTileMapConditionType* PlayerArrivedInTileFirstTime; // 0x0

	};
}

