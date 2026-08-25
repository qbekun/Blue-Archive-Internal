#pragma once
#include "../unitysdk.h"

namespace FlatData { class DialogCondition; }

namespace FlatData
{
	inline static constexpr unsigned int DialogCondition_TypeDefinitionIndex = 9606;

	class DialogCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::DialogCondition* Idle; // 0x0
		::FlatData::DialogCondition* Enter; // 0x0
		::FlatData::DialogCondition* Exit; // 0x0
		::FlatData::DialogCondition* Buy; // 0x0
		::FlatData::DialogCondition* SoldOut; // 0x0
		::FlatData::DialogCondition* BoxGachaNormal; // 0x0
		::FlatData::DialogCondition* BoxGachaPrize; // 0x0
		::FlatData::DialogCondition* Prize0; // 0x0
		::FlatData::DialogCondition* Prize1; // 0x0
		::FlatData::DialogCondition* Prize2; // 0x0
		::FlatData::DialogCondition* Prize3; // 0x0
		::FlatData::DialogCondition* Interaction; // 0x0
		::FlatData::DialogCondition* Luck0; // 0x0
		::FlatData::DialogCondition* Luck1; // 0x0
		::FlatData::DialogCondition* Luck2; // 0x0
		::FlatData::DialogCondition* Luck3; // 0x0
		::FlatData::DialogCondition* Luck4; // 0x0
		::FlatData::DialogCondition* Luck5; // 0x0
		::FlatData::DialogCondition* StoryOpen; // 0x0
		::FlatData::DialogCondition* CollectionOpen; // 0x0
		::FlatData::DialogCondition* BoxGachaFinish; // 0x0
		::FlatData::DialogCondition* FindTreasure; // 0x0
		::FlatData::DialogCondition* GetTreasure; // 0x0
		::FlatData::DialogCondition* RoundRenewal; // 0x0
		::FlatData::DialogCondition* MiniGameDreamMakerEnough01; // 0x0
		::FlatData::DialogCondition* MiniGameDreamMakerEnough02; // 0x0
		::FlatData::DialogCondition* MiniGameDreamMakerEnough03; // 0x0
		::FlatData::DialogCondition* MiniGameDreamMakerEnough04; // 0x0
		::FlatData::DialogCondition* MiniGameDreamMakerDefault; // 0x0
		::FlatData::DialogCondition* PassLevelUp; // 0x0
		::FlatData::DialogCondition* UnlockPassReward; // 0x0
		::FlatData::DialogCondition* ClueSearch; // 0x0
		::FlatData::DialogCondition* ClueRegistration; // 0x0
		::FlatData::DialogCondition* ClueCompletion; // 0x0

	};
}

