#pragma once
#include "../../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class RectInt; }
namespace UnityEngine::Rendering { class StencilState; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine { class Bounds&; }
namespace UnityEngine { class RectInt&; }
namespace UnityEngine::Rendering { class StencilState&; }

#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_ADD_GRAPHICSRESOURCESRECREATE_OFFSET UNITYSDK_OFFSET(0xA450DB0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_REMOVE_GRAPHICSRESOURCESRECREATE_OFFSET UNITYSDK_OFFSET(0xA450EA0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_ADD_ENGINEUPDATE_OFFSET UNITYSDK_OFFSET(0xA450F90)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_REMOVE_ENGINEUPDATE_OFFSET UNITYSDK_OFFSET(0xA451070)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_ADD_FLUSHPENDINGRESOURCES_OFFSET UNITYSDK_OFFSET(0xA451150)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_REMOVE_FLUSHPENDINGRESOURCES_OFFSET UNITYSDK_OFFSET(0xA451230)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_ADD_REGISTERINTERMEDIATERENDERERS_OFFSET UNITYSDK_OFFSET(0xA451310)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_REMOVE_REGISTERINTERMEDIATERENDERERS_OFFSET UNITYSDK_OFFSET(0xA451400)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_ADD_RENDERNODEEXECUTE_OFFSET UNITYSDK_OFFSET(0xA4514F0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_REMOVE_RENDERNODEEXECUTE_OFFSET UNITYSDK_OFFSET(0xA4515E0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEGRAPHICSRESOURCESRECREATE_OFFSET UNITYSDK_OFFSET(0xA4516D0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEENGINEUPDATE_OFFSET UNITYSDK_OFFSET(0xA451760)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEFLUSHPENDINGRESOURCES_OFFSET UNITYSDK_OFFSET(0xA451810)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEREGISTERINTERMEDIATERENDERERS_OFFSET UNITYSDK_OFFSET(0xA4518A0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISERENDERNODEADD_OFFSET UNITYSDK_OFFSET(0xA451930)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISERENDERNODEEXECUTE_OFFSET UNITYSDK_OFFSET(0xA4519C0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISERENDERNODECLEANUP_OFFSET UNITYSDK_OFFSET(0xA451A50)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_ALLOCATEBUFFER_OFFSET UNITYSDK_OFFSET(0xA451AE0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_FREEBUFFER_OFFSET UNITYSDK_OFFSET(0xA451B30)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_UPDATEBUFFERRANGES_OFFSET UNITYSDK_OFFSET(0xA451B70)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0xA451BC0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_GETVERTEXDECLARATION_OFFSET UNITYSDK_OFFSET(0xA451C10)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_REGISTERINTERMEDIATERENDERER_OFFSET UNITYSDK_OFFSET(0xA451C50)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_DRAWRANGES_OFFSET UNITYSDK_OFFSET(0xA451D40)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0xA451D90)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETSCISSORRECT_OFFSET UNITYSDK_OFFSET(0xA451DD0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_DISABLESCISSOR_OFFSET UNITYSDK_OFFSET(0xA451EA0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_CREATESTENCILSTATE_OFFSET UNITYSDK_OFFSET(0xA451EE0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETSTENCILSTATE_OFFSET UNITYSDK_OFFSET(0xA451FB0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_HASMAPPEDBUFFERRANGE_OFFSET UNITYSDK_OFFSET(0xA451FF0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_INSERTCPUFENCE_OFFSET UNITYSDK_OFFSET(0xA452030)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_CPUFENCEPASSED_OFFSET UNITYSDK_OFFSET(0xA452070)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_WAITFORCPUFENCEPASSED_OFFSET UNITYSDK_OFFSET(0xA4520B0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_SYNCRENDERTHREAD_OFFSET UNITYSDK_OFFSET(0xA4520F0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_GETACTIVEVIEWPORT_OFFSET UNITYSDK_OFFSET(0xA452130)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_PROFILEDRAWCHAINBEGIN_OFFSET UNITYSDK_OFFSET(0xA452200)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_PROFILEDRAWCHAINEND_OFFSET UNITYSDK_OFFSET(0xA452240)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_NOTIFYOFUIREVENTS_OFFSET UNITYSDK_OFFSET(0xA452280)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_GETUNITYPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0xA4522C0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4523B0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_REGISTERINTERMEDIATERENDERER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA451CF0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETSCISSORRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA451E60)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_CREATESTENCILSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA451F70)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_GETACTIVEVIEWPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA4521C0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_GETUNITYPROJECTIONMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA452370)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int Utility_TypeDefinitionIndex = 37373;

	class Utility : public Il2CppObject
	{
	public:
		Il2CppObject* GraphicsResourcesRecreate; // 0x0
		::System::Action* EngineUpdate; // 0x8
		::System::Action* FlushPendingResources; // 0x10
		Il2CppObject* RegisterIntermediateRenderers; // 0x18
		Il2CppObject* RenderNodeAdd; // 0x20
		Il2CppObject* RenderNodeExecute; // 0x28
		Il2CppObject* RenderNodeCleanup; // 0x30
		::Unity::Profiling::ProfilerMarker* s_MarkerRaiseEngineUpdate; // 0x38

		::System::Void SetVectorArray(::UnityEngine::MaterialPropertyBlock* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETVECTORARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void add_GraphicsResourcesRecreate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_ADD_GRAPHICSRESOURCESRECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_GraphicsResourcesRecreate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_REMOVE_GRAPHICSRESOURCESRECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void add_EngineUpdate(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_ADD_ENGINEUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_EngineUpdate(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_REMOVE_ENGINEUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void add_FlushPendingResources(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_ADD_FLUSHPENDINGRESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void remove_FlushPendingResources(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_REMOVE_FLUSHPENDINGRESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void add_RegisterIntermediateRenderers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_ADD_REGISTERINTERMEDIATERENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void remove_RegisterIntermediateRenderers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_REMOVE_REGISTERINTERMEDIATERENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void add_RenderNodeExecute(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_ADD_RENDERNODEEXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_RenderNodeExecute(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_REMOVE_RENDERNODEEXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseGraphicsResourcesRecreate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEGRAPHICSRESOURCESRECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseEngineUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEENGINEUPDATE_OFFSET))(nullptr);
		}

		::System::Void RaiseFlushPendingResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEFLUSHPENDINGRESOURCES_OFFSET))(nullptr);
		}

		::System::Void RaiseRegisterIntermediateRenderers(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEREGISTERINTERMEDIATERENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseRenderNodeAdd(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISERENDERNODEADD_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseRenderNodeExecute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISERENDERNODEEXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseRenderNodeCleanup(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISERENDERNODECLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Int32 AllocateBuffer(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_ALLOCATEBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FreeBuffer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_FREEBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateBufferRanges(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_UPDATEBUFFERRANGES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetVectorArray(::UnityEngine::MaterialPropertyBlock* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETVECTORARRAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetVertexDeclaration(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_GETVERTEXDECLARATION_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterIntermediateRenderer(::UnityEngine::Camera* arg, ::UnityEngine::Material* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Bounds* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::UInt64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Material*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Bounds*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_REGISTERINTERMEDIATERENDERER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawRanges(::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object**, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_DRAWRANGES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETPROPERTYBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void SetScissorRect(::UnityEngine::RectInt* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETSCISSORRECT_OFFSET))(arg, nullptr);
		}

		::System::Void DisableScissor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_DISABLESCISSOR_OFFSET))(nullptr);
		}

		::System::Int32 CreateStencilState(::UnityEngine::Rendering::StencilState* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::StencilState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_CREATESTENCILSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetStencilState(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETSTENCILSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasMappedBufferRange()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_HASMAPPEDBUFFERRANGE_OFFSET))(nullptr);
		}

		::System::UInt32 InsertCPUFence()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_INSERTCPUFENCE_OFFSET))(nullptr);
		}

		::System::Boolean CPUFencePassed(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_CPUFENCEPASSED_OFFSET))(arg, nullptr);
		}

		::System::Void WaitForCPUFencePassed(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_WAITFORCPUFENCEPASSED_OFFSET))(arg, nullptr);
		}

		::System::Void SyncRenderThread()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_SYNCRENDERTHREAD_OFFSET))(nullptr);
		}

		::UnityEngine::RectInt* GetActiveViewport()
		{
			return (return (::UnityEngine::RectInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_GETACTIVEVIEWPORT_OFFSET))(nullptr);
		}

		::System::Void ProfileDrawChainBegin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_PROFILEDRAWCHAINBEGIN_OFFSET))(nullptr);
		}

		::System::Void ProfileDrawChainEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_PROFILEDRAWCHAINEND_OFFSET))(nullptr);
		}

		::System::Void NotifyOfUIREvents(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_NOTIFYOFUIREVENTS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* GetUnityProjectionMatrix()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_GETUNITYPROJECTIONMATRIX_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterIntermediateRenderer_Injected(::UnityEngine::Camera* arg, ::UnityEngine::Material* arg, ::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Bounds&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::UInt64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Material*, ::UnityEngine::Matrix4x4&*, ::UnityEngine::Bounds&*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_REGISTERINTERMEDIATERENDERER_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetScissorRect_Injected(::UnityEngine::RectInt&* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_SETSCISSORRECT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Int32 CreateStencilState_Injected(::UnityEngine::Rendering::StencilState&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::StencilState&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_CREATESTENCILSTATE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetActiveViewport_Injected(::UnityEngine::RectInt&* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_GETACTIVEVIEWPORT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetUnityProjectionMatrix_Injected(::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_GETUNITYPROJECTIONMATRIX_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

