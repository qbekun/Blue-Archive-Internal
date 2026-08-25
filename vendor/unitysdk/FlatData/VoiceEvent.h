#pragma once
#include "../unitysdk.h"

namespace FlatData { class VoiceEvent; }

namespace FlatData
{
	inline static constexpr unsigned int VoiceEvent_TypeDefinitionIndex = 9359;

	class VoiceEvent : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::VoiceEvent* OnTSA; // 0x0
		::FlatData::VoiceEvent* FormationPickUp; // 0x0
		::FlatData::VoiceEvent* CampaignResultDefeat; // 0x0
		::FlatData::VoiceEvent* CampaignResultVictory; // 0x0
		::FlatData::VoiceEvent* CharacterLevelUp; // 0x0
		::FlatData::VoiceEvent* CharacterTranscendence; // 0x0
		::FlatData::VoiceEvent* SkillLevelUp; // 0x0
		::FlatData::VoiceEvent* Formation; // 0x0
		::FlatData::VoiceEvent* CampaignCharacterSpawn; // 0x0
		::FlatData::VoiceEvent* BattleStartTimeline; // 0x0
		::FlatData::VoiceEvent* BattleVictoryTimeline; // 0x0
		::FlatData::VoiceEvent* CharacterFavor; // 0x0
		::FlatData::VoiceEvent* BattleMiss; // 0x0
		::FlatData::VoiceEvent* BattleBlock; // 0x0
		::FlatData::VoiceEvent* BattleCover; // 0x0
		::FlatData::VoiceEvent* BattleMove; // 0x0
		::FlatData::VoiceEvent* BattleMoveToForamtionBeacon; // 0x0
		::FlatData::VoiceEvent* MGS_GameStart; // 0x0
		::FlatData::VoiceEvent* MGS_CharacterSelect; // 0x0
		::FlatData::VoiceEvent* MGS_Attacking; // 0x0
		::FlatData::VoiceEvent* MGS_GeasGet; // 0x0
		::FlatData::VoiceEvent* EXSkill; // 0x0
		::FlatData::VoiceEvent* EXSkillLevel; // 0x0
		::FlatData::VoiceEvent* EXSkill2; // 0x0
		::FlatData::VoiceEvent* EXSkillLevel2; // 0x0
		::FlatData::VoiceEvent* EXSkill3; // 0x0
		::FlatData::VoiceEvent* EXSkillLevel3; // 0x0
		::FlatData::VoiceEvent* EXSkill4; // 0x0
		::FlatData::VoiceEvent* EXSkillLevel4; // 0x0
		::FlatData::VoiceEvent* PublicSkill01; // 0x0
		::FlatData::VoiceEvent* PublicSkill02; // 0x0
		::FlatData::VoiceEvent* InteractionPublicSkill01; // 0x0
		::FlatData::VoiceEvent* InteractionPublicSkill02; // 0x0
		::FlatData::VoiceEvent* FormationStyleChange; // 0x0
		::FlatData::VoiceEvent* BattleInteractionVictoryTimeline; // 0x0

	};
}

