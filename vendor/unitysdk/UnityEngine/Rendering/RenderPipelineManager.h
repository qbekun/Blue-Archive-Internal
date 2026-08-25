#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderPipelineAsset; }
namespace UnityEngine::Rendering { class RenderPipeline; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GET_CURRENTPIPELINE_OFFSET UNITYSDK_OFFSET(0xA25F8A0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_SET_CURRENTPIPELINE_OFFSET UNITYSDK_OFFSET(0xA25F8F0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ADD_BEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0xA25F9E0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_REMOVE_BEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0xA25FAD0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ADD_ENDCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0xA25FBC0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_REMOVE_ENDCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0xA25FCB0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_BEGINCONTEXTRENDERING_OFFSET UNITYSDK_OFFSET(0xA25E700)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_BEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0xA25E930)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ENDCONTEXTRENDERING_OFFSET UNITYSDK_OFFSET(0xA25EA20)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ENDCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0xA25EC50)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ONACTIVERENDERPIPELINETYPECHANGED_OFFSET UNITYSDK_OFFSET(0xA25FDA0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_HANDLERENDERPIPELINECHANGE_OFFSET UNITYSDK_OFFSET(0xA25FE30)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_CLEANUPRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0xA25F3E0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GETCURRENTPIPELINEASSETTYPE_OFFSET UNITYSDK_OFFSET(0xA25FEE0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_DORENDERLOOP_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA25FF30)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_PREPARERENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0xA25F760)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ISPIPELINEREQUIRECREATION_OFFSET UNITYSDK_OFFSET(0xA2603F0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2605C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipelineManager_TypeDefinitionIndex = 31563;

	class RenderPipelineManager : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RenderPipelineAsset* s_CurrentPipelineAsset; // 0x0
		Il2CppObject* s_Cameras; // 0x8
		::System::String* s_currentPipelineType; // 0x10
		::UnityEngine::Rendering::RenderPipeline* s_currentPipeline; // 0x18
		Il2CppObject* beginContextRendering; // 0x20
		Il2CppObject* endContextRendering; // 0x28
		Il2CppObject* beginFrameRendering; // 0x30
		Il2CppObject* beginCameraRendering; // 0x38
		Il2CppObject* endFrameRendering; // 0x40
		Il2CppObject* endCameraRendering; // 0x48
		::System::Action* activeRenderPipelineTypeChanged; // 0x50
		::System::Action* activeRenderPipelineCreated; // 0x58
		::System::Action* activeRenderPipelineDisposed; // 0x60

		::UnityEngine::Rendering::RenderPipeline* get_currentPipeline()
		{
			return (return (::UnityEngine::Rendering::RenderPipeline*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GET_CURRENTPIPELINE_OFFSET))(nullptr);
		}

		::System::Void set_currentPipeline(::UnityEngine::Rendering::RenderPipeline* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderPipeline*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_SET_CURRENTPIPELINE_OFFSET))(arg, nullptr);
		}

		::System::Void add_beginCameraRendering(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ADD_BEGINCAMERARENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_beginCameraRendering(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_REMOVE_BEGINCAMERARENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void add_endCameraRendering(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ADD_ENDCAMERARENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_endCameraRendering(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_REMOVE_ENDCAMERARENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void BeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_BEGINCONTEXTRENDERING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_BEGINCAMERARENDERING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ENDCONTEXTRENDERING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ENDCAMERARENDERING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnActiveRenderPipelineTypeChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ONACTIVERENDERPIPELINETYPECHANGED_OFFSET))(nullptr);
		}

		::System::Void HandleRenderPipelineChange(::UnityEngine::Rendering::RenderPipelineAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_HANDLERENDERPIPELINECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void CleanupRenderPipeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_CLEANUPRENDERPIPELINE_OFFSET))(nullptr);
		}

		::System::String* GetCurrentPipelineAssetType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GETCURRENTPIPELINEASSETTYPE_OFFSET))(nullptr);
		}

		::System::Void DoRenderLoop_Internal(::UnityEngine::Rendering::RenderPipelineAsset* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_DORENDERLOOP_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PrepareRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_PREPARERENDERPIPELINE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPipelineRequireCreation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ISPIPELINEREQUIRECREATION_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

