#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine::Rendering { class ScriptableCullingParameters&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class SortingSettings&; }
namespace UnityEngine::Rendering { class DrawingSettings&; }
namespace UnityEngine::Rendering { class FilteringSettings&; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ComputeQueueType; }
namespace UnityEngine::Rendering::RendererUtils { class RendererList; }
namespace UnityEngine::Rendering::RendererUtils { class RendererListStatus; }
namespace UnityEngine::Rendering { class CullingResults; }
namespace UnityEngine::Rendering { class RenderStateBlock&; }
namespace UnityEngine::Rendering { class ShadowDrawingSettings&; }
namespace UnityEngine::Rendering::RendererUtils { class RendererListDesc; }
namespace UnityEngine::Rendering { class ScriptableRenderContext&; }
namespace UnityEngine::Rendering { class ShaderTagId&; }
namespace UnityEngine::Rendering::RendererUtils { class RendererList&; }

#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA260E60)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA260EB0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA260F00)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA260F40)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_OFFSET UNITYSDK_OFFSET(0xA260F80)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INITIALIZESORTSETTINGS_OFFSET UNITYSDK_OFFSET(0xA261070)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2610B0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMITFORRENDERPASSVALIDATION_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA261180)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERAS_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA261250)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA261340)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA261460)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA261530)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFERASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA261600)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2616F0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSKYBOX_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2617E0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2618B0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWWIREOVERLAY_IMPL_OFFSET UNITYSDK_OFFSET(0xA261980)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATERENDERERLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA261A50)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPARERENDERERLISTSASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA261BA0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_QUERYRENDERERLISTSTATUS_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA261C70)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2602D0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_OFFSET UNITYSDK_OFFSET(0xA261D40)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_OFFSET UNITYSDK_OFFSET(0xA261E40)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_OFFSET UNITYSDK_OFFSET(0xA261F50)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_OFFSET UNITYSDK_OFFSET(0xA262050)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_OFFSET UNITYSDK_OFFSET(0xA2620E0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_OFFSET UNITYSDK_OFFSET(0xA262170)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMITFORRENDERPASSVALIDATION_OFFSET UNITYSDK_OFFSET(0xA262240)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERAS_OFFSET UNITYSDK_OFFSET(0xA2602E0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_OFFSET UNITYSDK_OFFSET(0xA262310)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_OFFSET UNITYSDK_OFFSET(0xA262470)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_OFFSET UNITYSDK_OFFSET(0xA2625E0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_OFFSET UNITYSDK_OFFSET(0xA262990)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0xA262A60)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0xA262BF0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA262D90)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA262EF0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSKYBOX_OFFSET UNITYSDK_OFFSET(0xA262FE0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2630C0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWWIREOVERLAY_OFFSET UNITYSDK_OFFSET(0xA263190)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CULL_OFFSET UNITYSDK_OFFSET(0xA263270)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA263370)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2633D0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2634A0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATERENDERERLIST_OFFSET UNITYSDK_OFFSET(0xA2634B0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPARERENDERERLISTSASYNC_OFFSET UNITYSDK_OFFSET(0xA263860)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_QUERYRENDERERLISTSTATUS_OFFSET UNITYSDK_OFFSET(0xA263940)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA263A30)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA261020)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA261140)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMITFORRENDERPASSVALIDATION_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA261210)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERAS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2612F0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA261410)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2614F0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2615C0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFERASYNC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2616A0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA261790)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSKYBOX_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA261870)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA261940)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWWIREOVERLAY_IMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA261A10)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATERENDERERLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA261B50)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPARERENDERERLISTSASYNC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA261C30)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_QUERYRENDERERLISTSTATUS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA261D00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ScriptableRenderContext_TypeDefinitionIndex = 31568;

	class ScriptableRenderContext : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ShaderTagId* kRenderTypeTag; // 0x0
		::System::Int32 m_Ptr; // 0x10

		::System::Void BeginRenderPass_Internal(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BeginSubPass_Internal(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndSubPass_Internal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void EndRenderPass_Internal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_Cull(::UnityEngine::Rendering::ScriptableCullingParameters&* arg, ::UnityEngine::Rendering::ScriptableRenderContext* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&*, ::UnityEngine::Rendering::ScriptableRenderContext*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeSortSettings(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::SortingSettings&* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::SortingSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INITIALIZESORTSETTINGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Submit_Internal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean SubmitForRenderPassValidation_Internal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMITFORRENDERPASSVALIDATION_INTERNAL_OFFSET))(nullptr);
		}

		::System::Void GetCameras_Internal(::System::Type* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERAS_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawRenderers_Internal(::System::Int32 arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::ShaderTagId* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::ShaderTagId*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawShadows_Internal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteCommandBuffer_Internal(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteCommandBufferAsync_Internal(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::ComputeQueueType* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ComputeQueueType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFERASYNC_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupCameraProperties_Internal(::UnityEngine::Camera* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawSkybox_Internal(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSKYBOX_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeOnRenderObjectCallback_Internal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_OFFSET))(nullptr);
		}

		::System::Void DrawWireOverlay_Impl(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWWIREOVERLAY_IMPL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RendererUtils::RendererList* CreateRendererList_Internal(::System::Int32 arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::ShaderTagId* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::RendererUtils::RendererList*(*)(::System::Int32, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::ShaderTagId*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATERENDERERLIST_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void PrepareRendererListsAsync_Internal(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPARERENDERERLISTSASYNC_INTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RendererUtils::RendererListStatus* QueryRendererListStatus_Internal(::UnityEngine::Rendering::RendererUtils::RendererList* arg)
		{
			return (return (::UnityEngine::Rendering::RendererUtils::RendererListStatus*(*)(::UnityEngine::Rendering::RendererUtils::RendererList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_QUERYRENDERERLISTSTATUS_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void BeginRenderPass(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINRENDERPASS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BeginSubPass(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BeginSubPass(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_BEGINSUBPASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndSubPass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDSUBPASS_OFFSET))(nullptr);
		}

		::System::Void EndRenderPass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_ENDRENDERPASS_OFFSET))(nullptr);
		}

		::System::Void Submit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_OFFSET))(nullptr);
		}

		::System::Boolean SubmitForRenderPassValidation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMITFORRENDERPASSVALIDATION_OFFSET))(nullptr);
		}

		::System::Void GetCameras(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERAS_OFFSET))(arg, nullptr);
		}

		::System::Void DrawRenderers(::UnityEngine::Rendering::CullingResults* arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CullingResults*, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::FilteringSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawRenderers(::UnityEngine::Rendering::CullingResults* arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::RenderStateBlock&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CullingResults*, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::RenderStateBlock&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawRenderers(::UnityEngine::Rendering::CullingResults* arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::ShaderTagId* arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CullingResults*, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::ShaderTagId*, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawShadows(::UnityEngine::Rendering::ShadowDrawingSettings&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ShadowDrawingSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteCommandBufferAsync(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::ComputeQueueType* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ComputeQueueType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFERASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupCameraProperties(::UnityEngine::Camera* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupCameraProperties(::UnityEngine::Camera* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawSkybox(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSKYBOX_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeOnRenderObjectCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_OFFSET))(nullptr);
		}

		::System::Void DrawWireOverlay(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWWIREOVERLAY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::CullingResults* Cull(::UnityEngine::Rendering::ScriptableCullingParameters&* arg)
		{
			return (return (::UnityEngine::Rendering::CullingResults*(*)(::UnityEngine::Rendering::ScriptableCullingParameters&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CULL_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::ScriptableRenderContext* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETHASHCODE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RendererUtils::RendererList* CreateRendererList(::UnityEngine::Rendering::RendererUtils::RendererListDesc* arg)
		{
			return (return (::UnityEngine::Rendering::RendererUtils::RendererList*(*)(::UnityEngine::Rendering::RendererUtils::RendererListDesc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATERENDERERLIST_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareRendererListsAsync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPARERENDERERLISTSASYNC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RendererUtils::RendererListStatus* QueryRendererListStatus(::UnityEngine::Rendering::RendererUtils::RendererList* arg)
		{
			return (return (::UnityEngine::Rendering::RendererUtils::RendererListStatus*(*)(::UnityEngine::Rendering::RendererUtils::RendererList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_QUERYRENDERERLISTSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_Cull_Injected(::UnityEngine::Rendering::ScriptableCullingParameters&* arg, ::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&*, ::UnityEngine::Rendering::ScriptableRenderContext&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INTERNAL_CULL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Submit_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMIT_INTERNAL_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean SubmitForRenderPassValidation_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SUBMITFORRENDERPASSVALIDATION_INTERNAL_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetCameras_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::System::Type* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERAS_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawRenderers_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::System::Int32 arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::ShaderTagId&* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::System::Int32, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::ShaderTagId&*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWRENDERERS_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawShadows_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSHADOWS_INTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExecuteCommandBuffer_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExecuteCommandBufferAsync_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::ComputeQueueType* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ComputeQueueType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFERASYNC_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetupCameraProperties_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::UnityEngine::Camera* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::UnityEngine::Camera*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_SETUPCAMERAPROPERTIES_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawSkybox_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWSKYBOX_INTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeOnRenderObjectCallback_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INVOKEONRENDEROBJECTCALLBACK_INTERNAL_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void DrawWireOverlay_Impl_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_DRAWWIREOVERLAY_IMPL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateRendererList_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::System::Int32 arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::ShaderTagId&* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::RendererUtils::RendererList&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::System::Int32, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::ShaderTagId&*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RendererUtils::RendererList&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_CREATERENDERERLIST_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void PrepareRendererListsAsync_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_PREPARERENDERERLISTSASYNC_INTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RendererUtils::RendererListStatus* QueryRendererListStatus_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext&* arg, ::UnityEngine::Rendering::RendererUtils::RendererList&* arg)
		{
			return (return (::UnityEngine::Rendering::RendererUtils::RendererListStatus*(*)(::UnityEngine::Rendering::ScriptableRenderContext&*, ::UnityEngine::Rendering::RendererUtils::RendererList&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_QUERYRENDERERLISTSTATUS_INTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

