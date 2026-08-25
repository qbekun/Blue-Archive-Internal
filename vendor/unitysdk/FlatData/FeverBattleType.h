#pragma once
#include "../unitysdk.h"

namespace FlatData { class FeverBattleType; }

namespace FlatData
{
	inline static constexpr unsigned int FeverBattleType_TypeDefinitionIndex = 9460;

	class FeverBattleType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::FeverBattleType* Campaign; // 0x0
		::FlatData::FeverBattleType* Raid; // 0x0
		::FlatData::FeverBattleType* WeekDungeon; // 0x0
		::FlatData::FeverBattleType* Arena; // 0x0

	};
}

