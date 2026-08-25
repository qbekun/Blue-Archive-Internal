#pragma once
#include "../unitysdk.h"

namespace FlatData { class ScenarioCharacterBehaviors; }

namespace FlatData
{
	inline static constexpr unsigned int ScenarioCharacterBehaviors_TypeDefinitionIndex = 9602;

	class ScenarioCharacterBehaviors : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ScenarioCharacterBehaviors* None; // 0x0
		::FlatData::ScenarioCharacterBehaviors* Appear; // 0x0
		::FlatData::ScenarioCharacterBehaviors* Disappear; // 0x0
		::FlatData::ScenarioCharacterBehaviors* AppearToLeft; // 0x0
		::FlatData::ScenarioCharacterBehaviors* ApperToRight; // 0x0
		::FlatData::ScenarioCharacterBehaviors* DisappearToLeft; // 0x0
		::FlatData::ScenarioCharacterBehaviors* DisappearToRight; // 0x0
		::FlatData::ScenarioCharacterBehaviors* MoveToTarget; // 0x0

	};
}

