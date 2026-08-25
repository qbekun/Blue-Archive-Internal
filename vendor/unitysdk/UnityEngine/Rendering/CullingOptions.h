#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CullingOptions; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullingOptions_TypeDefinitionIndex = 31544;

	class CullingOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::CullingOptions* None; // 0x0
		::UnityEngine::Rendering::CullingOptions* ForceEvenIfCameraIsNotActive; // 0x0
		::UnityEngine::Rendering::CullingOptions* OcclusionCull; // 0x0
		::UnityEngine::Rendering::CullingOptions* NeedsLighting; // 0x0
		::UnityEngine::Rendering::CullingOptions* NeedsReflectionProbes; // 0x0
		::UnityEngine::Rendering::CullingOptions* Stereo; // 0x0
		::UnityEngine::Rendering::CullingOptions* DisablePerObjectCulling; // 0x0
		::UnityEngine::Rendering::CullingOptions* ShadowCasters; // 0x0

	};
}

