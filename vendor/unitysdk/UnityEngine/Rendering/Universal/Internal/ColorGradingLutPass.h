#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering::Universal { class PostProcessData; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle&; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0BA500)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0BBC30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS_ONFINISHCAMERASTACKRENDERING_OFFSET UNITYSDK_OFFSET(0xA0BBF50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0BBFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS__.CTOR_G__LOAD|6_0_OFFSET UNITYSDK_OFFSET(0xA0BBE10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA0BC000)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ColorGradingLutPass_TypeDefinitionIndex = 32867;

	class ColorGradingLutPass : public Il2CppObject
	{
	public:
		::UnityEngine::Material* m_LutBuilderLdr; // 0xD8
		::UnityEngine::Material* m_LutBuilderHdr; // 0xE0
		::UnityEngine::Experimental::Rendering::GraphicsFormat* m_HdrLutFormat; // 0xE8
		::UnityEngine::Experimental::Rendering::GraphicsFormat* m_LdrLutFormat; // 0xEC
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_InternalLut; // 0xF0
		::System::Boolean m_AllowColorGradingACESHDR; // 0x120

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Rendering::Universal::PostProcessData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Rendering::Universal::PostProcessData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnFinishCameraStackRendering(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS_ONFINISHCAMERASTACKRENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::RenderTargetHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS_SETUP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* _.ctor_g__Load|6_0(::UnityEngine::Shader* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS__.CTOR_G__LOAD|6_0_OFFSET))(arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COLORGRADINGLUTPASS_CLEANUP_OFFSET))(nullptr);
		}

	};
}

