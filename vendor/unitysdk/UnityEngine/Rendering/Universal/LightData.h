#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightData_TypeDefinitionIndex = 32799;

	class LightData : public Il2CppObject
	{
	public:
		::System::Int32 mainLightIndex; // 0x10
		::System::Int32 additionalLightsCount; // 0x14
		::System::Int32 maxPerObjectAdditionalLightsCount; // 0x18
		Il2CppObject* visibleLights; // 0x20
		Il2CppObject* originalIndices; // 0x30
		::System::Boolean shadeAdditionalLightsPerVertex; // 0x40
		::System::Boolean supportsMixedLighting; // 0x41
		::System::Boolean reflectionProbeBoxProjection; // 0x42
		::System::Boolean reflectionProbeBlending; // 0x43
		::System::Boolean supportsLightLayers; // 0x44
		::System::Boolean supportsAdditionalLights; // 0x45

	};
}

