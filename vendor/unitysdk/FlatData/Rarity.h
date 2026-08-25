#pragma once
#include "../unitysdk.h"

namespace FlatData { class Rarity; }

namespace FlatData
{
	inline static constexpr unsigned int Rarity_TypeDefinitionIndex = 9587;

	class Rarity : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::Rarity* N; // 0x0
		::FlatData::Rarity* R; // 0x0
		::FlatData::Rarity* SR; // 0x0
		::FlatData::Rarity* SSR; // 0x0

	};
}

