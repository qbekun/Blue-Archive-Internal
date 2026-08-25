#pragma once
#include "../unitysdk.h"

namespace FlatData { class EventNotifyType; }

namespace FlatData
{
	inline static constexpr unsigned int EventNotifyType_TypeDefinitionIndex = 9476;

	class EventNotifyType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EventNotifyType* RewardIncreaseEvent; // 0x0
		::FlatData::EventNotifyType* AccountExpIncreaseEvent; // 0x0
		::FlatData::EventNotifyType* RaidSeasonManager; // 0x0
		::FlatData::EventNotifyType* TimeAttackDungeonSeasonManage; // 0x0
		::FlatData::EventNotifyType* EliminateRaidSeasonManage; // 0x0
		::FlatData::EventNotifyType* MultiFloorRaidSeasonManage; // 0x0

	};
}

