#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class MotionBlurMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MotionBlurMode_TypeDefinitionIndex = 32680;

	class MotionBlurMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::MotionBlurMode* CameraOnly; // 0x0
		::UnityEngine::Rendering::Universal::MotionBlurMode* CameraAndObjects; // 0x0

	};
}

