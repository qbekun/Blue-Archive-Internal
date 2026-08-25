#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneState; }

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int BattleSceneState_TypeDefinitionIndex = 20305;

	class BattleSceneState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Visual::Battles::BattleSceneState* None; // 0x0
		::MX::Visual::Battles::BattleSceneState* Preparing; // 0x0
		::MX::Visual::Battles::BattleSceneState* InBattle; // 0x0
		::MX::Visual::Battles::BattleSceneState* Ending; // 0x0
		::MX::Visual::Battles::BattleSceneState* ShowResult; // 0x0
		::MX::Visual::Battles::BattleSceneState* Paused; // 0x0
		::MX::Visual::Battles::BattleSceneState* SkillTargetSelect; // 0x0
		::MX::Visual::Battles::BattleSceneState* ShowTargetPopup; // 0x0
		::MX::Visual::Battles::BattleSceneState* AskContinue; // 0x0
		::MX::Visual::Battles::BattleSceneState* ShowUltimate; // 0x0
		::MX::Visual::Battles::BattleSceneState* Replicate; // 0x0
		::MX::Visual::Battles::BattleSceneState* WaitPeer; // 0x0
		::MX::Visual::Battles::BattleSceneState* WaitSyncTurn; // 0x0

	};
}

