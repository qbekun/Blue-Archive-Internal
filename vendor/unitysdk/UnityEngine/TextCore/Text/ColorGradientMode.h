#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class ColorGradientMode; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int ColorGradientMode_TypeDefinitionIndex = 35583;

	class ColorGradientMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::Text::ColorGradientMode* Single; // 0x0
		::UnityEngine::TextCore::Text::ColorGradientMode* HorizontalGradient; // 0x0
		::UnityEngine::TextCore::Text::ColorGradientMode* VerticalGradient; // 0x0
		::UnityEngine::TextCore::Text::ColorGradientMode* FourCornersGradient; // 0x0

	};
}

