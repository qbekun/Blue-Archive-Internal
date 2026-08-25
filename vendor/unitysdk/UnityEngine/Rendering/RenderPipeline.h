#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class RenderPipelineGlobalSettings; }

#define UNITYENGINE_RENDERING_RENDERPIPELINE_RENDER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_PROCESSRENDERREQUESTS_OFFSET UNITYSDK_OFFSET(0xA25E6A0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_BEGINCONTEXTRENDERING_OFFSET UNITYSDK_OFFSET(0xA25E6B0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_BEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0xA25E840)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_ENDCONTEXTRENDERING_OFFSET UNITYSDK_OFFSET(0xA25E9D0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_ENDCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0xA25EB60)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_RENDER_OFFSET UNITYSDK_OFFSET(0xA25ECF0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALRENDER_OFFSET UNITYSDK_OFFSET(0xA25ED60)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALRENDERWITHREQUESTS_OFFSET UNITYSDK_OFFSET(0xA25EDF0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA25EF10)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA25EF20)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA25EF30)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA25EFA0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_GET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0xA25EFB0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA25EFC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipeline_TypeDefinitionIndex = 31560;

	class RenderPipeline : public Il2CppObject
	{
	public:
		::System::Boolean _disposed_k__BackingField; // 0x10

		::System::Void Render(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_RENDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessRenderRequests(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_PROCESSRENDERREQUESTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_BEGINCONTEXTRENDERING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_BEGINCAMERARENDERING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_ENDCONTEXTRENDERING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_ENDCAMERARENDERING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Render(::UnityEngine::Rendering::ScriptableRenderContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_RENDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalRender(::UnityEngine::Rendering::ScriptableRenderContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALRENDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalRenderWithRequests(::UnityEngine::Rendering::ScriptableRenderContext* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALRENDERWITHREQUESTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderPipelineGlobalSettings* get_defaultSettings()
		{
			return (return (::UnityEngine::Rendering::RenderPipelineGlobalSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_GET_DEFAULTSETTINGS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_.CTOR_OFFSET))(nullptr);
		}

	};
}

