#pragma once
#include "../unitysdk.h"

namespace FlatData { class ExternalBehavior; }

namespace FlatData
{
	inline static constexpr unsigned int ExternalBehavior_TypeDefinitionIndex = 9383;

	class ExternalBehavior : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ExternalBehavior* UseNextExSkill; // 0x0
		::FlatData::ExternalBehavior* ChangePhase; // 0x0
		::FlatData::ExternalBehavior* ChangeSection; // 0x0
		::FlatData::ExternalBehavior* AddActiveGauge; // 0x0
		::FlatData::ExternalBehavior* UseSelectExSkill; // 0x0
		::FlatData::ExternalBehavior* ClearNormalSkill; // 0x0
		::FlatData::ExternalBehavior* MoveLeft; // 0x0
		::FlatData::ExternalBehavior* MoveRight; // 0x0
		::FlatData::ExternalBehavior* AllUseSelectExSkill; // 0x0
		::FlatData::ExternalBehavior* ConnectCharacterToDummy; // 0x0
		::FlatData::ExternalBehavior* ConnectExSkillToParts; // 0x0
		::FlatData::ExternalBehavior* SetMaxHPToParts; // 0x0
		::FlatData::ExternalBehavior* AlivePartsUseExSkill; // 0x0
		::FlatData::ExternalBehavior* ActivatePart; // 0x0
		::FlatData::ExternalBehavior* AddGroggy; // 0x0
		::FlatData::ExternalBehavior* SelectTargetToUseSkillAlly; // 0x0
		::FlatData::ExternalBehavior* ForceChangePhase; // 0x0
		::FlatData::ExternalBehavior* ClearUseSkillEndGroupId; // 0x0
		::FlatData::ExternalBehavior* ChangePhaseKeepATG; // 0x0
		::FlatData::ExternalBehavior* ForceChangePhaseKeepATG; // 0x0

	};
}

