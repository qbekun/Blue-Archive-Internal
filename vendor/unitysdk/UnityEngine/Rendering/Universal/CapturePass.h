#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA066560)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA066910)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0669B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA066A40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CapturePass_TypeDefinitionIndex = 32710;

	class CapturePass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_CameraColorHandle; // 0xD8
		::System::String* m_ProfilerTag; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x0

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAPTUREPASS_SETUP_OFFSET))(arg, nullptr);
		}

	};
}

