#pragma once
#include "../unitysdk.h"

namespace FlatData { class MiniGameTBGThemaRewardType; }

namespace FlatData
{
	inline static constexpr unsigned int MiniGameTBGThemaRewardType_TypeDefinitionIndex = 9573;

	class MiniGameTBGThemaRewardType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::MiniGameTBGThemaRewardType* TreasureReward; // 0x0
		::FlatData::MiniGameTBGThemaRewardType* EmptyTreasureReward; // 0x0
		::FlatData::MiniGameTBGThemaRewardType* HiddenThemaTreasureReward; // 0x0

	};
}

