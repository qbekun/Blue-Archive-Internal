#pragma once
#include "../unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }

namespace FlatData
{
	inline static constexpr unsigned int ScenarioModeTypes_TypeDefinitionIndex = 9614;

	class ScenarioModeTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ScenarioModeTypes* None; // 0x0
		::FlatData::ScenarioModeTypes* Main; // 0x0
		::FlatData::ScenarioModeTypes* Sub; // 0x0
		::FlatData::ScenarioModeTypes* Replay; // 0x0
		::FlatData::ScenarioModeTypes* Mini; // 0x0
		::FlatData::ScenarioModeTypes* SpecialOperation; // 0x0
		::FlatData::ScenarioModeTypes* Prologue; // 0x0

	};
}

