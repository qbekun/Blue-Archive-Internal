#pragma once
#include "../unitysdk.h"

namespace TMPro { class ColorMode; }

namespace TMPro
{
	inline static constexpr unsigned int ColorMode_TypeDefinitionIndex = 33635;

	class ColorMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TMPro::ColorMode* Single; // 0x0
		::TMPro::ColorMode* HorizontalGradient; // 0x0
		::TMPro::ColorMode* VerticalGradient; // 0x0
		::TMPro::ColorMode* FourCornersGradient; // 0x0

	};
}

