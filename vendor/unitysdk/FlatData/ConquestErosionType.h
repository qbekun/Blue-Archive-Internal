#pragma once
#include "../unitysdk.h"

namespace FlatData { class ConquestErosionType; }

namespace FlatData
{
	inline static constexpr unsigned int ConquestErosionType_TypeDefinitionIndex = 9450;

	class ConquestErosionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ConquestErosionType* None; // 0x0
		::FlatData::ConquestErosionType* IndividualErosion; // 0x0
		::FlatData::ConquestErosionType* MassErosion; // 0x0

	};
}

