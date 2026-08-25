#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandType_TypeDefinitionIndex = 14837;

	class ConquestCommandType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* None; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* PropAnimation; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* Operator; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* TileConquer; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* TileUpgrade; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* BossOpen; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* StepComplete; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* MassErosion; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* Erosion; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* ErosionRemove; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* StepOpen; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* BossClear; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* HideConquestUI; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* ShowConquestUI; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* HideHexaUI; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* ShowHexaUI; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* StepObjectComplete; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* CameraSetting; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* PropAnimationHold; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* CheckTileErosion; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* PlayMapEnterScenario; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* UnexpectedEvent; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* TileConquerReward; // 0x0

	};
}

