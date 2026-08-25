#pragma once
#include "../unitysdk.h"

namespace FlatData { class NotificationEventReddot; }

namespace FlatData
{
	inline static constexpr unsigned int NotificationEventReddot_TypeDefinitionIndex = 9511;

	class NotificationEventReddot : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::NotificationEventReddot* StagePointReward; // 0x0
		::FlatData::NotificationEventReddot* MissionComplete; // 0x0
		::FlatData::NotificationEventReddot* MiniGameMissionComplete; // 0x0
		::FlatData::NotificationEventReddot* WorldRaidReward; // 0x0
		::FlatData::NotificationEventReddot* ConquestCalculateReward; // 0x0
		::FlatData::NotificationEventReddot* DiceRaceLapReward; // 0x0

	};
}

