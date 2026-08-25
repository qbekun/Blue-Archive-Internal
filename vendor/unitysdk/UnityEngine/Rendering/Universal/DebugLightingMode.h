#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugLightingMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugLightingMode_TypeDefinitionIndex = 38090;

	class DebugLightingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DebugLightingMode* None; // 0x0
		::UnityEngine::Rendering::Universal::DebugLightingMode* ShadowCascades; // 0x0
		::UnityEngine::Rendering::Universal::DebugLightingMode* LightingWithoutNormalMaps; // 0x0
		::UnityEngine::Rendering::Universal::DebugLightingMode* LightingWithNormalMaps; // 0x0
		::UnityEngine::Rendering::Universal::DebugLightingMode* Reflections; // 0x0
		::UnityEngine::Rendering::Universal::DebugLightingMode* ReflectionsWithSmoothness; // 0x0

	};
}

