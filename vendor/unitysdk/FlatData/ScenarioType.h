#pragma once
#include "../unitysdk.h"

namespace FlatData { class ScenarioType; }

namespace FlatData
{
	inline static constexpr unsigned int ScenarioType_TypeDefinitionIndex = 9599;

	class ScenarioType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ScenarioType* None; // 0x0
		::FlatData::ScenarioType* Title; // 0x0
		::FlatData::ScenarioType* Place; // 0x0

	};
}

