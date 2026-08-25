#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class AntialiasingMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AntialiasingMode_TypeDefinitionIndex = 32770;

	class AntialiasingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::AntialiasingMode* None; // 0x0
		::UnityEngine::Rendering::Universal::AntialiasingMode* FastApproximateAntialiasing; // 0x0
		::UnityEngine::Rendering::Universal::AntialiasingMode* SubpixelMorphologicalAntiAliasing; // 0x0

	};
}

