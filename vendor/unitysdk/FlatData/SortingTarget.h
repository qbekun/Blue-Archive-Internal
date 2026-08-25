#pragma once
#include "../unitysdk.h"

namespace FlatData { class SortingTarget; }

namespace FlatData
{
	inline static constexpr unsigned int SortingTarget_TypeDefinitionIndex = 9590;

	class SortingTarget : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::SortingTarget* None; // 0x0
		::FlatData::SortingTarget* Rarity; // 0x0
		::FlatData::SortingTarget* Level; // 0x0
		::FlatData::SortingTarget* StarGrade; // 0x0
		::FlatData::SortingTarget* Tier; // 0x0

	};
}

