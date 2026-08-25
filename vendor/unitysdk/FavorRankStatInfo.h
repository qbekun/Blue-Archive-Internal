#pragma once
#include "unitysdk.h"

namespace FlatData { class EquipmentOptionType; }

	inline static constexpr unsigned int FavorRankStatInfo_TypeDefinitionIndex = 4148;

	class FavorRankStatInfo : public Il2CppObject
	{
	public:
		::System::Int32 Order; // 0x10
		::System::Int64 Rank; // 0x18
		::System::Boolean Applied; // 0x20
		::FlatData::EquipmentOptionType* Option; // 0x24
		::System::Int64 Value; // 0x28

	};

