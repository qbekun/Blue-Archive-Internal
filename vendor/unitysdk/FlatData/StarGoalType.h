#pragma once
#include "../unitysdk.h"

namespace FlatData { class StarGoalType; }

namespace FlatData
{
	inline static constexpr unsigned int StarGoalType_TypeDefinitionIndex = 9456;

	class StarGoalType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::StarGoalType* None; // 0x0
		::FlatData::StarGoalType* AllAlive; // 0x0
		::FlatData::StarGoalType* Clear; // 0x0
		::FlatData::StarGoalType* GetBoxes; // 0x0
		::FlatData::StarGoalType* ClearTimeInSec; // 0x0
		::FlatData::StarGoalType* AllyBaseDamage; // 0x0

	};
}

