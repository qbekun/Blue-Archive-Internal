#pragma once
#include "../unitysdk.h"

namespace TMPro { class FontStyles; }

namespace TMPro
{
	inline static constexpr unsigned int FontStyles_TypeDefinitionIndex = 33740;

	class FontStyles : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TMPro::FontStyles* Normal; // 0x0
		::TMPro::FontStyles* Bold; // 0x0
		::TMPro::FontStyles* Italic; // 0x0
		::TMPro::FontStyles* Underline; // 0x0
		::TMPro::FontStyles* LowerCase; // 0x0
		::TMPro::FontStyles* UpperCase; // 0x0
		::TMPro::FontStyles* SmallCaps; // 0x0
		::TMPro::FontStyles* Strikethrough; // 0x0
		::TMPro::FontStyles* Superscript; // 0x0
		::TMPro::FontStyles* Subscript; // 0x0
		::TMPro::FontStyles* Highlight; // 0x0

	};
}

