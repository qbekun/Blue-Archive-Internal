#pragma once
#include "../unitysdk.h"

namespace FlatData { class ScenarioEffectDepth; }

namespace FlatData
{
	inline static constexpr unsigned int ScenarioEffectDepth_TypeDefinitionIndex = 9617;

	class ScenarioEffectDepth : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ScenarioEffectDepth* None; // 0x0
		::FlatData::ScenarioEffectDepth* AboveBg; // 0x0
		::FlatData::ScenarioEffectDepth* AboveCharacter; // 0x0
		::FlatData::ScenarioEffectDepth* AboveAll; // 0x0

	};
}

