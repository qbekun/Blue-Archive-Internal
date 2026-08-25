#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionType; }

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition
{
	inline static constexpr unsigned int HexaConditionType_TypeDefinitionIndex = 14912;

	class HexaConditionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* None; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* StartCampaign; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* TurnBeginEnd; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* UnitDead; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* PlayerArrivedInTileFirstTime; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* AnyEnemyDead; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* EveryTurn; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* EnemyArrivedInTileFirstTime; // 0x0
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* SpecificEnemyArrivedInTileFirstTime; // 0x0

	};
}

