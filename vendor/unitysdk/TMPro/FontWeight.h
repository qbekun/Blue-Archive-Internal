#pragma once
#include "../unitysdk.h"

namespace TMPro { class FontWeight; }

namespace TMPro
{
	inline static constexpr unsigned int FontWeight_TypeDefinitionIndex = 33741;

	class FontWeight : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TMPro::FontWeight* Thin; // 0x0
		::TMPro::FontWeight* ExtraLight; // 0x0
		::TMPro::FontWeight* Light; // 0x0
		::TMPro::FontWeight* Regular; // 0x0
		::TMPro::FontWeight* Medium; // 0x0
		::TMPro::FontWeight* SemiBold; // 0x0
		::TMPro::FontWeight* Bold; // 0x0
		::TMPro::FontWeight* Heavy; // 0x0
		::TMPro::FontWeight* Black; // 0x0

	};
}

