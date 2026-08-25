#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestConditionType; }

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestConditionType_TypeDefinitionIndex = 14861;

	class ConquestConditionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionType* None; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionType* TileFriendlyTerritory; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionType* StepTileComplete; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionType* StepBossDead; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionType* StepOpen; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionType* DeadUnitLeader; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionType* TileUniqueId; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionType* UnitOpen; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionType* StepObjectComplete; // 0x0

	};
}

