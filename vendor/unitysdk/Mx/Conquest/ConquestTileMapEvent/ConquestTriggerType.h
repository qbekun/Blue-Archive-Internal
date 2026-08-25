#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestTriggerType; }

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestTriggerType_TypeDefinitionIndex = 14882;

	class ConquestTriggerType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* None; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* TileConquer; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* TileUpgrade; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* MapEnter; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* SyncState; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* AcquireCalculateReward; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* UnexpectedEvent; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* MassErosion; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* MassErosionEnd; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* TileErosion; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* TileErosionEnd; // 0x0

	};
}

