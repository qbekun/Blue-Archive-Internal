#pragma once
#include "../unitysdk.h"

namespace FlatData { class ScenarioCharacterAction; }

namespace FlatData
{
	inline static constexpr unsigned int ScenarioCharacterAction_TypeDefinitionIndex = 9601;

	class ScenarioCharacterAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ScenarioCharacterAction* Idle; // 0x0
		::FlatData::ScenarioCharacterAction* Shake; // 0x0
		::FlatData::ScenarioCharacterAction* Greeting; // 0x0
		::FlatData::ScenarioCharacterAction* FalldownLeft; // 0x0
		::FlatData::ScenarioCharacterAction* FalldownRight; // 0x0
		::FlatData::ScenarioCharacterAction* Stiff; // 0x0
		::FlatData::ScenarioCharacterAction* Hophop; // 0x0
		::FlatData::ScenarioCharacterAction* Jump; // 0x0

	};
}

