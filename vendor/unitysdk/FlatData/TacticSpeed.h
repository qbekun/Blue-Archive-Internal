#pragma once
#include "../unitysdk.h"

namespace FlatData { class TacticSpeed; }

namespace FlatData
{
	inline static constexpr unsigned int TacticSpeed_TypeDefinitionIndex = 9413;

	class TacticSpeed : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::TacticSpeed* None; // 0x0
		::FlatData::TacticSpeed* Slow; // 0x0
		::FlatData::TacticSpeed* Normal; // 0x0
		::FlatData::TacticSpeed* Fast; // 0x0

	};
}

