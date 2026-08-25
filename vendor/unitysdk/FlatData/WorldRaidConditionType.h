#pragma once
#include "../unitysdk.h"

namespace FlatData { class WorldRaidConditionType; }

namespace FlatData
{
	inline static constexpr unsigned int WorldRaidConditionType_TypeDefinitionIndex = 9522;

	class WorldRaidConditionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::WorldRaidConditionType* None; // 0x0
		::FlatData::WorldRaidConditionType* BossClear; // 0x0
		::FlatData::WorldRaidConditionType* EventScenarioClear; // 0x0
		::FlatData::WorldRaidConditionType* EventStageClear; // 0x0
		::FlatData::WorldRaidConditionType* MainScenarioClear; // 0x0
		::FlatData::WorldRaidConditionType* BossHprateUnder; // 0x0

	};
}

