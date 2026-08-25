#pragma once
#include "../unitysdk.h"

namespace FlatData { class FurnitureLocation; }

namespace FlatData
{
	inline static constexpr unsigned int FurnitureLocation_TypeDefinitionIndex = 9355;

	class FurnitureLocation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::FurnitureLocation* None; // 0x0
		::FlatData::FurnitureLocation* Inventory; // 0x0
		::FlatData::FurnitureLocation* Floor; // 0x0
		::FlatData::FurnitureLocation* WallLeft; // 0x0
		::FlatData::FurnitureLocation* WallRight; // 0x0

	};
}

