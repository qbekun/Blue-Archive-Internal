#pragma once
#include "../unitysdk.h"

namespace FlatData { class CraftSlotIndex; }

namespace FlatData
{
	inline static constexpr unsigned int CraftSlotIndex_TypeDefinitionIndex = 9484;

	class CraftSlotIndex : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::CraftSlotIndex* Slot00; // 0x0
		::FlatData::CraftSlotIndex* Slot01; // 0x0
		::FlatData::CraftSlotIndex* Slot02; // 0x0
		::FlatData::CraftSlotIndex* Max; // 0x0

	};
}

