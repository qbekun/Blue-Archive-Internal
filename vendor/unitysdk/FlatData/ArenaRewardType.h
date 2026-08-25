#pragma once
#include "../unitysdk.h"

namespace FlatData { class ArenaRewardType; }

namespace FlatData
{
	inline static constexpr unsigned int ArenaRewardType_TypeDefinitionIndex = 9503;

	class ArenaRewardType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ArenaRewardType* None; // 0x0
		::FlatData::ArenaRewardType* Time; // 0x0
		::FlatData::ArenaRewardType* Daily; // 0x0
		::FlatData::ArenaRewardType* SeasonRecord; // 0x0
		::FlatData::ArenaRewardType* OverallRecord; // 0x0
		::FlatData::ArenaRewardType* SeasonClose; // 0x0
		::FlatData::ArenaRewardType* AttackVictory; // 0x0
		::FlatData::ArenaRewardType* DefenseVictory; // 0x0
		::FlatData::ArenaRewardType* RankIcon; // 0x0

	};
}

