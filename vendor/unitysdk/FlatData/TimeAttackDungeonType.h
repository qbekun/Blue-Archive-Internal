#pragma once
#include "../unitysdk.h"

namespace FlatData { class TimeAttackDungeonType; }

namespace FlatData
{
	inline static constexpr unsigned int TimeAttackDungeonType_TypeDefinitionIndex = 9473;

	class TimeAttackDungeonType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::TimeAttackDungeonType* None; // 0x0
		::FlatData::TimeAttackDungeonType* Defense; // 0x0
		::FlatData::TimeAttackDungeonType* Shooting; // 0x0
		::FlatData::TimeAttackDungeonType* Destruction; // 0x0
		::FlatData::TimeAttackDungeonType* Escort; // 0x0

	};
}

