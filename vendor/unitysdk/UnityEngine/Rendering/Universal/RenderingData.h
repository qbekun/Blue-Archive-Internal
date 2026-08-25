#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class CullingResults; }
namespace UnityEngine::Rendering::Universal { class CameraData; }
namespace UnityEngine::Rendering::Universal { class LightData; }
namespace UnityEngine::Rendering::Universal { class ShadowData; }
namespace UnityEngine::Rendering::Universal { class PostProcessingData; }
namespace UnityEngine::Rendering { class PerObjectData; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RenderingData_TypeDefinitionIndex = 32798;

	class RenderingData : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::CullingResults* cullResults; // 0x10
		::UnityEngine::Rendering::Universal::CameraData* cameraData; // 0x20
		::UnityEngine::Rendering::Universal::LightData* lightData; // 0x190
		::UnityEngine::Rendering::Universal::ShadowData* shadowData; // 0x1C8
		::UnityEngine::Rendering::Universal::PostProcessingData* postProcessingData; // 0x218
		::System::Boolean supportsDynamicBatching; // 0x224
		::UnityEngine::Rendering::PerObjectData* perObjectData; // 0x228
		::System::Boolean postProcessingEnabled; // 0x22C

	};
}

