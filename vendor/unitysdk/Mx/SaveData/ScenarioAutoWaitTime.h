#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class ScenarioAutoWaitTime; }

namespace MX::SaveData
{
	inline static constexpr unsigned int ScenarioAutoWaitTime_TypeDefinitionIndex = 20037;

	class ScenarioAutoWaitTime : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::ScenarioAutoWaitTime* Long; // 0x0
		::MX::SaveData::ScenarioAutoWaitTime* Default; // 0x0
		::MX::SaveData::ScenarioAutoWaitTime* Short; // 0x0
		::MX::SaveData::ScenarioAutoWaitTime* VeryShort; // 0x0

	};
}

