#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ColorGradingMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PostProcessingData_TypeDefinitionIndex = 32806;

	class PostProcessingData : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::ColorGradingMode* gradingMode; // 0x10
		::System::Int32 lutSize; // 0x14
		::System::Boolean useFastSRGBLinearConversion; // 0x18

	};
}

