#pragma once
#include "../unitysdk.h"

namespace FlatData { class EchelonSlot; }

namespace FlatData
{
	inline static constexpr unsigned int EchelonSlot_TypeDefinitionIndex = 9421;

	class EchelonSlot : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EchelonSlot* None; // 0x0
		::FlatData::EchelonSlot* StrikerEchelon; // 0x0
		::FlatData::EchelonSlot* SpecialEchelon; // 0x0

	};
}

