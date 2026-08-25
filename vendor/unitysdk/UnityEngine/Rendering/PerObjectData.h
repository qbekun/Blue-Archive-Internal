#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class PerObjectData; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PerObjectData_TypeDefinitionIndex = 31557;

	class PerObjectData : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::PerObjectData* None; // 0x0
		::UnityEngine::Rendering::PerObjectData* LightProbe; // 0x0
		::UnityEngine::Rendering::PerObjectData* ReflectionProbes; // 0x0
		::UnityEngine::Rendering::PerObjectData* LightProbeProxyVolume; // 0x0
		::UnityEngine::Rendering::PerObjectData* Lightmaps; // 0x0
		::UnityEngine::Rendering::PerObjectData* LightData; // 0x0
		::UnityEngine::Rendering::PerObjectData* MotionVectors; // 0x0
		::UnityEngine::Rendering::PerObjectData* LightIndices; // 0x0
		::UnityEngine::Rendering::PerObjectData* ReflectionProbeData; // 0x0
		::UnityEngine::Rendering::PerObjectData* OcclusionProbe; // 0x0
		::UnityEngine::Rendering::PerObjectData* OcclusionProbeProxyVolume; // 0x0
		::UnityEngine::Rendering::PerObjectData* ShadowMask; // 0x0

	};
}

