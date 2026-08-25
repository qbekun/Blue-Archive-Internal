#pragma once
#include "../unitysdk.h"

namespace FlatData { class FurnitureCategory; }

namespace FlatData
{
	inline static constexpr unsigned int FurnitureCategory_TypeDefinitionIndex = 9353;

	class FurnitureCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::FurnitureCategory* Furnitures; // 0x0
		::FlatData::FurnitureCategory* Decorations; // 0x0
		::FlatData::FurnitureCategory* Interiors; // 0x0

	};
}

