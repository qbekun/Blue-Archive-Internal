#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData; }
namespace UnityEngine::Rendering { class ScriptableCullingParameters&; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SWAPCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0xA048400)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUP_OFFSET UNITYSDK_OFFSET(0xA048480)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA048500)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA049620)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUPLIGHTS_OFFSET UNITYSDK_OFFSET(0xA049680)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUPCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0xA049700)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_GETCAMERACOLORFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0xA049780)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_FINISHRENDERING_OFFSET UNITYSDK_OFFSET(0xA0497D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRenderer_TypeDefinitionIndex = 32629;

	class ForwardRenderer : public Il2CppObject
	{
	public:
		::System::String* k_ErrorMessage; // 0x0

		::System::Void SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SWAPCOLORBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::ForwardRendererData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ForwardRendererData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUPLIGHTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupCullingParameters(::UnityEngine::Rendering::ScriptableCullingParameters&* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_SETUPCULLINGPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_GETCAMERACOLORFRONTBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRendering(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERER_FINISHRENDERING_OFFSET))(arg, nullptr);
		}

	};
}

