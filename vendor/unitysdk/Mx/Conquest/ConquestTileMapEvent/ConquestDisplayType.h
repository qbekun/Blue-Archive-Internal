#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayType; }

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestDisplayType_TypeDefinitionIndex = 14874;

	class ConquestDisplayType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* None; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* TileConquered; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* TileUpgraded; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* UnexpectedEvent; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* BossOpen; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* PropAnimation; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* PropAnimationAndBlock; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* PropAnimationHoldAndPlay; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* Operator; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* StepComplete; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* MassErosion; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* Erosion; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* ErosionRemove; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* CheckTileErosion; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* StepOpen; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* BossClear; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* HideConquestUI; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* ShowConquestUI; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* HideHexaUI; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* ShowHexaUI; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* StepObjectComplete; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* CameraSetting; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* PlayMapEnterScenario; // 0x0
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayType* ShowTileConquerReward; // 0x0

	};
}

