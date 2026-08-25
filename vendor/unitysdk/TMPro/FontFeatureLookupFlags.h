#pragma once
#include "../unitysdk.h"

namespace TMPro { class FontFeatureLookupFlags; }

namespace TMPro
{
	inline static constexpr unsigned int FontFeatureLookupFlags_TypeDefinitionIndex = 33673;

	class FontFeatureLookupFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TMPro::FontFeatureLookupFlags* None; // 0x0
		::TMPro::FontFeatureLookupFlags* IgnoreLigatures; // 0x0
		::TMPro::FontFeatureLookupFlags* IgnoreSpacingAdjustments; // 0x0

	};
}

