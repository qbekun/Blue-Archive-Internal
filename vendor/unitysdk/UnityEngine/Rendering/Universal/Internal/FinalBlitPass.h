#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FINALBLITPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0C14C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FINALBLITPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0C1540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FINALBLITPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0C15F0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FinalBlitPass_TypeDefinitionIndex = 32875;

	class FinalBlitPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RenderTargetIdentifier* m_Source; // 0xD8
		::UnityEngine::Material* m_BlitMaterial; // 0x100

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FINALBLITPASS_SETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FINALBLITPASS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FINALBLITPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

	};
}

