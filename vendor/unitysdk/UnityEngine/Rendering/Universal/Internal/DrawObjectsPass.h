#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class RenderStateBlock; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering { class RenderQueueRange; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine::Rendering { class StencilState; }
namespace UnityEngine::Rendering::Universal { class URPProfileId; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0C0670)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0C0A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0C0AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA0C0BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0C0CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0C1340)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DrawObjectsPass_TypeDefinitionIndex = 32874;

	class DrawObjectsPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::FilteringSettings* m_FilteringSettings; // 0xD8
		::UnityEngine::Rendering::RenderStateBlock* m_RenderStateBlock; // 0xF0
		Il2CppObject* m_ShaderTagIdList; // 0x160
		::System::String* m_ProfilerTag; // 0x168
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x170
		::System::Boolean m_IsOpaque; // 0x178
		::System::Boolean m_UseDepthPriming; // 0x179
		::System::Int32 s_DrawObjectPassDataPropID; // 0x0

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Rendering::RenderQueueRange* arg, ::UnityEngine::LayerMask* arg, ::UnityEngine::Rendering::StencilState* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Rendering::RenderQueueRange*, ::UnityEngine::LayerMask*, ::UnityEngine::Rendering::StencilState*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Rendering::RenderQueueRange* arg, ::UnityEngine::LayerMask* arg, ::UnityEngine::Rendering::StencilState* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Rendering::RenderQueueRange*, ::UnityEngine::LayerMask*, ::UnityEngine::Rendering::StencilState*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::URPProfileId* arg, ::System::Boolean arg, ::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Rendering::RenderQueueRange* arg, ::UnityEngine::LayerMask* arg, ::UnityEngine::Rendering::StencilState* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::URPProfileId*, ::System::Boolean, ::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Rendering::RenderQueueRange*, ::UnityEngine::LayerMask*, ::UnityEngine::Rendering::StencilState*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOBJECTSPASS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

