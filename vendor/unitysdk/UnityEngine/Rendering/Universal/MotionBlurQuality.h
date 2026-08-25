#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class MotionBlurQuality; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MotionBlurQuality_TypeDefinitionIndex = 32681;

	class MotionBlurQuality : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::MotionBlurQuality* Low; // 0x0
		::UnityEngine::Rendering::Universal::MotionBlurQuality* Medium; // 0x0
		::UnityEngine::Rendering::Universal::MotionBlurQuality* High; // 0x0

	};
}

