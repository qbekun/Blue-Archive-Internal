#pragma once
#include "../unitysdk.h"

namespace FlatData { class EventContentDiceRaceNodeType; }

namespace FlatData
{
	inline static constexpr unsigned int EventContentDiceRaceNodeType_TypeDefinitionIndex = 9478;

	class EventContentDiceRaceNodeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EventContentDiceRaceNodeType* StartNode; // 0x0
		::FlatData::EventContentDiceRaceNodeType* RewardNode; // 0x0
		::FlatData::EventContentDiceRaceNodeType* MoveForwardNode; // 0x0
		::FlatData::EventContentDiceRaceNodeType* SpecialRewardNode; // 0x0

	};
}

