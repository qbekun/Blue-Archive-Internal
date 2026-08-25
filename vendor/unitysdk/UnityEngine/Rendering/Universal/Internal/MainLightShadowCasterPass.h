#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class ScriptableRenderContext&; }
namespace UnityEngine::Rendering { class CullingResults&; }
namespace UnityEngine::Rendering::Universal { class LightData&; }
namespace UnityEngine::Rendering::Universal { class ShadowData&; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class VisibleLight; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0xA0C3860)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_RENDERMAINLIGHTCASCADESHADOWMAP_OFFSET UNITYSDK_OFFSET(0xA0C3940)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_SETUPFOREMPTYRENDERING_OFFSET UNITYSDK_OFFSET(0xA0C4990)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_SETUPMAINLIGHTSHADOWRECEIVERCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA0C4220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0C4A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0C4D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_SETEMPTYMAINLIGHTCASCADESHADOWMAP_OFFSET UNITYSDK_OFFSET(0xA0C4A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0C4E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0C51D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_CLEAR_OFFSET UNITYSDK_OFFSET(0xA0C5A00)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MainLightShadowCasterPass_TypeDefinitionIndex = 32878;

	class MainLightShadowCasterPass : public Il2CppObject
	{
	public:
		::System::Int32 k_MaxCascades; // 0x0
		::System::Int32 k_ShadowmapBufferBits; // 0x0
		::System::Single m_CascadeBorder; // 0xD8
		::System::Single m_MaxShadowDistanceSq; // 0xDC
		::System::Int32 m_ShadowCasterCascadesCount; // 0xE0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_MainLightShadowmap; // 0xE8
		::UnityEngine::RenderTexture* m_MainLightShadowmapTexture; // 0x118
		::Il2CppArray<::System::Object*>* m_MainLightShadowMatrices; // 0x120
		::Il2CppArray<::System::Object*>* m_CascadeSlices; // 0x128
		::Il2CppArray<::System::Object*>* m_CascadeSplitDistances; // 0x130
		::System::Boolean m_CreateEmptyShadowmap; // 0x138
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupSampler; // 0x140

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_CONFIGURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RenderMainLightCascadeShadowmap(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::UnityEngine::Rendering::CullingResults&* arg, ::UnityEngine::Rendering::Universal::LightData&* arg, ::UnityEngine::Rendering::Universal::ShadowData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::UnityEngine::Rendering::CullingResults&*, ::UnityEngine::Rendering::Universal::LightData&*, ::UnityEngine::Rendering::Universal::ShadowData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_RENDERMAINLIGHTCASCADESHADOWMAP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SetupForEmptyRendering(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_SETUPFOREMPTYRENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void SetupMainLightShadowReceiverConstants(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::VisibleLight* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::VisibleLight*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_SETUPMAINLIGHTSHADOWRECEIVERCONSTANTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmptyMainLightCascadeShadowmap(::UnityEngine::Rendering::ScriptableRenderContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_SETEMPTYMAINLIGHTCASCADESHADOWMAP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Setup(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_SETUP_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MAINLIGHTSHADOWCASTERPASS_CLEAR_OFFSET))(nullptr);
		}

	};
}

