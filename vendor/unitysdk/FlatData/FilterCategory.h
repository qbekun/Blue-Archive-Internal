#pragma once
#include "../unitysdk.h"

namespace FlatData { class FilterCategory; }

namespace FlatData
{
	inline static constexpr unsigned int FilterCategory_TypeDefinitionIndex = 9517;

	class FilterCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::FilterCategory* Character; // 0x0
		::FlatData::FilterCategory* Equipment; // 0x0
		::FlatData::FilterCategory* Item; // 0x0
		::FlatData::FilterCategory* Craft; // 0x0
		::FlatData::FilterCategory* ShiftCraft; // 0x0
		::FlatData::FilterCategory* Shop; // 0x0
		::FlatData::FilterCategory* MemoryLobby; // 0x0
		::FlatData::FilterCategory* Trophy; // 0x0
		::FlatData::FilterCategory* Emblem; // 0x0

	};
}

