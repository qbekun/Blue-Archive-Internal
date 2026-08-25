#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class CameraOverrideOption; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CameraOverrideOption_TypeDefinitionIndex = 32768;

	class CameraOverrideOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::CameraOverrideOption* Off; // 0x0
		::UnityEngine::Rendering::Universal::CameraOverrideOption* On; // 0x0
		::UnityEngine::Rendering::Universal::CameraOverrideOption* UsePipelineSettings; // 0x0

	};
}

