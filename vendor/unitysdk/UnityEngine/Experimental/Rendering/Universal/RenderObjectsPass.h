#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal { class RenderQueueType; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class RenderStateBlock; }
namespace UnityEngine::Rendering { class CompareFunction; }
namespace UnityEngine::Rendering { class StencilOp; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering::Universal { class URPProfileId; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_GET_OVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0x9FF7360)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SET_OVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0x9FF7370)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_GET_OVERRIDEMATERIALPASSINDEX_OFFSET UNITYSDK_OFFSET(0x9FF7390)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SET_OVERRIDEMATERIALPASSINDEX_OFFSET UNITYSDK_OFFSET(0x9FF73A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SETDETPHSTATE_OFFSET UNITYSDK_OFFSET(0x9FF73B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SETSTENCILSTATE_OFFSET UNITYSDK_OFFSET(0x9FF7420)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF7510)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF7C40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9FF7D40)

namespace UnityEngine::Experimental::Rendering::Universal
{
	inline static constexpr unsigned int RenderObjectsPass_TypeDefinitionIndex = 32423;

	class RenderObjectsPass : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::RenderQueueType* renderQueueType; // 0xD8
		::UnityEngine::Rendering::FilteringSettings* m_FilteringSettings; // 0xDC
		CustomCameraSettings* m_CameraSettings; // 0xF8
		::System::String* m_ProfilerTag; // 0x100
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x108
		::UnityEngine::Material* _overrideMaterial_k__BackingField; // 0x110
		::System::Int32 _overrideMaterialPassIndex_k__BackingField; // 0x118
		Il2CppObject* m_ShaderTagIdList; // 0x120
		::UnityEngine::Rendering::RenderStateBlock* m_RenderStateBlock; // 0x128

		::UnityEngine::Material* get_overrideMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_GET_OVERRIDEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_overrideMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SET_OVERRIDEMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_overrideMaterialPassIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_GET_OVERRIDEMATERIALPASSINDEX_OFFSET))(nullptr);
		}

		::System::Void set_overrideMaterialPassIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SET_OVERRIDEMATERIALPASSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void SetDetphState(::System::Boolean arg, ::UnityEngine::Rendering::CompareFunction* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::Rendering::CompareFunction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SETDETPHSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetStencilState(::System::Int32 arg, ::UnityEngine::Rendering::CompareFunction* arg, ::UnityEngine::Rendering::StencilOp* arg, ::UnityEngine::Rendering::StencilOp* arg, ::UnityEngine::Rendering::StencilOp* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::CompareFunction*, ::UnityEngine::Rendering::StencilOp*, ::UnityEngine::Rendering::StencilOp*, ::UnityEngine::Rendering::StencilOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SETSTENCILSTATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType* arg, ::System::Int32 arg, CustomCameraSettings* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Rendering::Universal::RenderPassEvent*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType*, ::System::Int32, CustomCameraSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::URPProfileId* arg, ::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType* arg, ::System::Int32 arg, CustomCameraSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::URPProfileId*, ::UnityEngine::Rendering::Universal::RenderPassEvent*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType*, ::System::Int32, CustomCameraSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

	};
}

