#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Visual { class ScenarioDisplayOption; }

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int ScenarioDisplayOption_TypeDefinitionIndex = 21222;

	class ScenarioDisplayOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::Visual::ScenarioDisplayOption* All; // 0x0
		::MX::MinigameCCG::Visual::ScenarioDisplayOption* IntroOnly; // 0x0
		::MX::MinigameCCG::Visual::ScenarioDisplayOption* OutroOnly; // 0x0

	};
}

