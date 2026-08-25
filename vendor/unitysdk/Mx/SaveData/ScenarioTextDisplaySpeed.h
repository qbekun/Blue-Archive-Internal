#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class ScenarioTextDisplaySpeed; }

namespace MX::SaveData
{
	inline static constexpr unsigned int ScenarioTextDisplaySpeed_TypeDefinitionIndex = 20036;

	class ScenarioTextDisplaySpeed : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::ScenarioTextDisplaySpeed* Slow; // 0x0
		::MX::SaveData::ScenarioTextDisplaySpeed* Default; // 0x0
		::MX::SaveData::ScenarioTextDisplaySpeed* Fast; // 0x0
		::MX::SaveData::ScenarioTextDisplaySpeed* Instant; // 0x0

	};
}

