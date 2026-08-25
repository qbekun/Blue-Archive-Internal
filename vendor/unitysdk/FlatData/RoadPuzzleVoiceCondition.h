#pragma once
#include "../unitysdk.h"

namespace FlatData { class RoadPuzzleVoiceCondition; }

namespace FlatData
{
	inline static constexpr unsigned int RoadPuzzleVoiceCondition_TypeDefinitionIndex = 9562;

	class RoadPuzzleVoiceCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::RoadPuzzleVoiceCondition* None; // 0x0
		::FlatData::RoadPuzzleVoiceCondition* TrainDepart; // 0x0
		::FlatData::RoadPuzzleVoiceCondition* RailConnectSuccess; // 0x0
		::FlatData::RoadPuzzleVoiceCondition* SaveSuccess; // 0x0

	};
}

