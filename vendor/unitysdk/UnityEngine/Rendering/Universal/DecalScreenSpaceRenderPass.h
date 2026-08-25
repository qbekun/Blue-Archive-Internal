#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class DecalDrawScreenSpaceSystem; }
namespace UnityEngine::Rendering::Universal { class DecalScreenSpaceSettings; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALSCREENSPACERENDERPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA046130)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALSCREENSPACERENDERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA046410)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALSCREENSPACERENDERPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA046820)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalScreenSpaceRenderPass_TypeDefinitionIndex = 32625;

	class DecalScreenSpaceRenderPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::FilteringSettings* m_FilteringSettings; // 0xD8
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0xF0
		Il2CppObject* m_ShaderTagIdList; // 0xF8
		::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* m_DrawSystem; // 0x100
		::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* m_Settings; // 0x108

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* arg, ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*, ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALSCREENSPACERENDERPASS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALSCREENSPACERENDERPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALSCREENSPACERENDERPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

	};
}

