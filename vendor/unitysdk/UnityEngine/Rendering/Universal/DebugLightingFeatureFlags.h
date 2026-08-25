#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugLightingFeatureFlags; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugLightingFeatureFlags_TypeDefinitionIndex = 38091;

	class DebugLightingFeatureFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags* None; // 0x0
		::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags* GlobalIllumination; // 0x0
		::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags* MainLight; // 0x0
		::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags* AdditionalLights; // 0x0
		::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags* VertexLighting; // 0x0
		::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags* Emission; // 0x0
		::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags* AmbientOcclusion; // 0x0

	};
}

