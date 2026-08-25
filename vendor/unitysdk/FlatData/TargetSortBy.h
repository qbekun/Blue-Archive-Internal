#pragma once
#include "../unitysdk.h"

namespace FlatData { class TargetSortBy; }

namespace FlatData
{
	inline static constexpr unsigned int TargetSortBy_TypeDefinitionIndex = 9377;

	class TargetSortBy : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::TargetSortBy* DISTANCE; // 0x0
		::FlatData::TargetSortBy* HP; // 0x0
		::FlatData::TargetSortBy* DAMAGE_EFFICIENCY; // 0x0
		::FlatData::TargetSortBy* TARGETED_COUNT; // 0x0
		::FlatData::TargetSortBy* RANDOM; // 0x0
		::FlatData::TargetSortBy* FRONT_FORMATION; // 0x0

	};
}

