#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ColorGradingMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ColorGradingMode_TypeDefinitionIndex = 32519;

	class ColorGradingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::ColorGradingMode* LowDynamicRange; // 0x0
		::UnityEngine::Rendering::Universal::ColorGradingMode* HighDynamicRange; // 0x0

	};
}

