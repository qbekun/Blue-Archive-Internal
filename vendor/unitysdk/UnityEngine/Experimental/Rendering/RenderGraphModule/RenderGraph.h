#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphResourceRegistry; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphObjectPool; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphDebugParams; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphLogger; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphDefaultResources; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphContext; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphDebugData; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureHandle; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureDesc&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureHandle&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureDesc; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RendererListHandle; }
namespace UnityEngine::Rendering::RendererUtils { class RendererListDesc&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferHandle; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferDesc&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferHandle&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferDesc; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphBuilder; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphExecution; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphParameters&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphPass; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9F91170)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9F91180)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_REQUIREDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x9F911A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_SET_REQUIREDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x9F911F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_DEFAULTRESOURCES_OFFSET UNITYSDK_OFFSET(0x9F91240)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F91250)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9F91880)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x9F91960)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UNREGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x9F91990)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETREGISTEREDRENDERGRAPHS_OFFSET UNITYSDK_OFFSET(0x9F91A20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x9F91A70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x9F91AE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_IMPORTTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F91BB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_IMPORTBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x9F91BE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x9F91C30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATESHAREDTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F91C70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RELEASESHAREDTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F91D00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x9F91D90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTUREIFINVALID_OFFSET UNITYSDK_OFFSET(0x9F91E60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETTEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x9F91EF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATERENDERERLIST_OFFSET UNITYSDK_OFFSET(0x9F91F20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_IMPORTCOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F91F40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATECOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F91F60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATECOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F91F90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETCOMPUTEBUFFERDESC_OFFSET UNITYSDK_OFFSET(0x9F91FF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADDRENDERPASS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADDRENDERPASS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RECORDANDEXECUTE_OFFSET UNITYSDK_OFFSET(0x9F92020)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9F8FF60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_BEGINPROFILINGSAMPLER_OFFSET UNITYSDK_OFFSET(0x9F92880)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ENDPROFILINGSAMPLER_OFFSET UNITYSDK_OFFSET(0x9F92AF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETCOMPILEDPASSINFOS_OFFSET UNITYSDK_OFFSET(0x9F92D60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEARCOMPILEDGRAPH_OFFSET UNITYSDK_OFFSET(0x9F92D70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_INVALIDATECONTEXT_OFFSET UNITYSDK_OFFSET(0x9F93010)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ONPASSADDED_OFFSET UNITYSDK_OFFSET(0x9F93080)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADD_ONGRAPHREGISTERED_OFFSET UNITYSDK_OFFSET(0x9F930F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REMOVE_ONGRAPHREGISTERED_OFFSET UNITYSDK_OFFSET(0x9F931D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADD_ONGRAPHUNREGISTERED_OFFSET UNITYSDK_OFFSET(0x9F932B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REMOVE_ONGRAPHUNREGISTERED_OFFSET UNITYSDK_OFFSET(0x9F93390)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADD_ONEXECUTIONREGISTERED_OFFSET UNITYSDK_OFFSET(0x9F93470)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REMOVE_ONEXECUTIONREGISTERED_OFFSET UNITYSDK_OFFSET(0x9F93550)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADD_ONEXECUTIONUNREGISTERED_OFFSET UNITYSDK_OFFSET(0x9F93630)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REMOVE_ONEXECUTIONUNREGISTERED_OFFSET UNITYSDK_OFFSET(0x9F93710)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_INITRESOURCEINFOSDATA_OFFSET UNITYSDK_OFFSET(0x9F937F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_INITIALIZECOMPILATIONDATA_OFFSET UNITYSDK_OFFSET(0x9F93890)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_COUNTREFERENCES_OFFSET UNITYSDK_OFFSET(0x9F939F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CULLUNUSEDPASSES_OFFSET UNITYSDK_OFFSET(0x9F942F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UPDATEPASSSYNCHRONIZATION_OFFSET UNITYSDK_OFFSET(0x9F94DE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UPDATERESOURCESYNCHRONIZATION_OFFSET UNITYSDK_OFFSET(0x9F94E00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETLATESTPRODUCERINDEX_OFFSET UNITYSDK_OFFSET(0x9F94F20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETLATESTVALIDREADINDEX_OFFSET UNITYSDK_OFFSET(0x9F950B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETFIRSTVALIDWRITEINDEX_OFFSET UNITYSDK_OFFSET(0x9F95180)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETLATESTVALIDWRITEINDEX_OFFSET UNITYSDK_OFFSET(0x9F95250)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATERENDERERLISTS_OFFSET UNITYSDK_OFFSET(0x9F95320)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UPDATERESOURCEALLOCATIONANDSYNCHRONIZATION_OFFSET UNITYSDK_OFFSET(0x9F95410)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ARERENDERERLISTSEMPTY_OFFSET UNITYSDK_OFFSET(0x9F95E00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_TRYCULLPASSATINDEX_OFFSET UNITYSDK_OFFSET(0x9F96060)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CULLRENDERERLISTS_OFFSET UNITYSDK_OFFSET(0x9F96150)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_COMPILERENDERGRAPH_OFFSET UNITYSDK_OFFSET(0x9F92590)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_COMPILEPASSIMMEDIATLY_OFFSET UNITYSDK_OFFSET(0x9F96380)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_EXECUTEPASSIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x9F930C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_EXECUTECOMPILEDPASS_OFFSET UNITYSDK_OFFSET(0x9F96E30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_EXECUTERENDERGRAPH_OFFSET UNITYSDK_OFFSET(0x9F926F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_PRERENDERPASSSETRENDERTARGETS_OFFSET UNITYSDK_OFFSET(0x9F97D10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_PRERENDERPASSEXECUTE_OFFSET UNITYSDK_OFFSET(0x9F97640)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_POSTRENDERPASSEXECUTE_OFFSET UNITYSDK_OFFSET(0x9F97A20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEARRENDERPASSES_OFFSET UNITYSDK_OFFSET(0x9F92E50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RELEASEIMMEDIATEMODERESOURCES_OFFSET UNITYSDK_OFFSET(0x9F98220)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGFRAMEINFORMATION_OFFSET UNITYSDK_OFFSET(0x9F92390)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGRENDERERLISTSCREATION_OFFSET UNITYSDK_OFFSET(0x9F96260)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGRENDERPASSBEGIN_OFFSET UNITYSDK_OFFSET(0x9F97270)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGCULLEDPASSES_OFFSET UNITYSDK_OFFSET(0x9F94990)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETDEFAULTPROFILINGSAMPLER_OFFSET UNITYSDK_OFFSET(0x9F98420)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UPDATEIMPORTEDRESOURCELIFETIME_OFFSET UNITYSDK_OFFSET(0x9F98500)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GENERATEDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x9F986E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEANUPDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x9F99E80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F9A090)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraph_TypeDefinitionIndex = 33845;

	class RenderGraph : public Il2CppObject
	{
	public:
		::System::Int32 kMaxMRTCount; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* m_RenderGraphPool; // 0x18
		Il2CppObject* m_RenderPasses; // 0x20
		Il2CppObject* m_RendererLists; // 0x28
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* m_DebugParameters; // 0x30
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_FrameInformationLogger; // 0x38
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* m_DefaultResources; // 0x40
		Il2CppObject* m_DefaultProfilingSamplers; // 0x48
		::System::Boolean m_ExecutionExceptionWasRaised; // 0x50
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* m_RenderGraphContext; // 0x58
		::UnityEngine::Rendering::CommandBuffer* m_PreviousCommandBuffer; // 0x60
		::System::Int32 m_CurrentImmediatePassIndex; // 0x68
		::Il2CppArray<::System::Object*>* m_ImmediateModeResourceList; // 0x70
		::Il2CppArray<::System::Object*>* m_CompiledResourcesInfos; // 0x78
		Il2CppObject* m_CompiledPassInfos; // 0x80
		Il2CppObject* m_CullingStack; // 0x88
		::System::Int32 m_ExecutionCount; // 0x90
		::System::Int32 m_CurrentFrameIndex; // 0x94
		::System::Boolean m_HasRenderGraphBegun; // 0x98
		::System::String* m_CurrentExecutionName; // 0xA0
		::System::Boolean m_RendererListCulling; // 0xA8
		Il2CppObject* m_DebugData; // 0xB0
		Il2CppObject* s_RegisteredGraphs; // 0x8
		::System::String* _name_k__BackingField; // 0xB8
		::System::Boolean _requireDebugData_k__BackingField; // 0x10
		OnGraphRegisteredDelegate* onGraphRegistered; // 0x18
		OnGraphRegisteredDelegate* onGraphUnregistered; // 0x20
		OnExecutionRegisteredDelegate* onExecutionRegistered; // 0x28
		OnExecutionRegisteredDelegate* onExecutionUnregistered; // 0x30

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_requireDebugData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_REQUIREDEBUGDATA_OFFSET))(nullptr);
		}

		::System::Void set_requireDebugData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_SET_REQUIREDEBUGDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* get_defaultResources()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GET_DEFAULTRESOURCES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void RegisterDebug(Panel* arg)
		{
			((::System::Void(*)(Panel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REGISTERDEBUG_OFFSET))(arg, nullptr);
		}

		::System::Void UnRegisterDebug()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UNREGISTERDEBUG_OFFSET))(nullptr);
		}

		Il2CppObject* GetRegisteredRenderGraphs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETREGISTEREDRENDERGRAPHS_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData* GetDebugData(::System::String* str)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETDEBUGDATA_OFFSET))(str, nullptr);
		}

		::System::Void EndFrame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ENDFRAME_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* ImportTexture(::UnityEngine::Rendering::RTHandle* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_IMPORTTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_IMPORTBACKBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* CreateTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* CreateSharedTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATESHAREDTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseSharedTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RELEASESHAREDTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* CreateTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateTextureIfInvalid(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATETEXTUREIFINVALID_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc* GetTextureDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETTEXTUREDESC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle* CreateRendererList(::UnityEngine::Rendering::RendererUtils::RendererListDesc&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle*(*)(::UnityEngine::Rendering::RendererUtils::RendererListDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATERENDERERLIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* ImportComputeBuffer(::UnityEngine::ComputeBuffer* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle*(*)(::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_IMPORTCOMPUTEBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* CreateComputeBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATECOMPUTEBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* CreateComputeBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATECOMPUTEBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc* GetComputeBufferDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETCOMPUTEBUFFERDESC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder* AddRenderPass(::System::String* str, Il2CppObject&* arg, ::UnityEngine::Rendering::ProfilingSampler* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder*(*)(::System::String*, Il2CppObject&*, ::UnityEngine::Rendering::ProfilingSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADDRENDERPASS_OFFSET))(str, arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder* AddRenderPass(::System::String* str, Il2CppObject&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder*(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADDRENDERPASS_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution* RecordAndExecute(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RECORDANDEXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void BeginProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ProfilingSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_BEGINPROFILINGSAMPLER_OFFSET))(arg, nullptr);
		}

		::System::Void EndProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ProfilingSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ENDPROFILINGSAMPLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCompiledPassInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETCOMPILEDPASSINFOS_OFFSET))(nullptr);
		}

		::System::Void ClearCompiledGraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEARCOMPILEDGRAPH_OFFSET))(nullptr);
		}

		::System::Void InvalidateContext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_INVALIDATECONTEXT_OFFSET))(nullptr);
		}

		::System::Void OnPassAdded(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ONPASSADDED_OFFSET))(arg, nullptr);
		}

		::System::Void add_onGraphRegistered(OnGraphRegisteredDelegate* arg)
		{
			((::System::Void(*)(OnGraphRegisteredDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADD_ONGRAPHREGISTERED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onGraphRegistered(OnGraphRegisteredDelegate* arg)
		{
			((::System::Void(*)(OnGraphRegisteredDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REMOVE_ONGRAPHREGISTERED_OFFSET))(arg, nullptr);
		}

		::System::Void add_onGraphUnregistered(OnGraphRegisteredDelegate* arg)
		{
			((::System::Void(*)(OnGraphRegisteredDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADD_ONGRAPHUNREGISTERED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onGraphUnregistered(OnGraphRegisteredDelegate* arg)
		{
			((::System::Void(*)(OnGraphRegisteredDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REMOVE_ONGRAPHUNREGISTERED_OFFSET))(arg, nullptr);
		}

		::System::Void add_onExecutionRegistered(OnExecutionRegisteredDelegate* arg)
		{
			((::System::Void(*)(OnExecutionRegisteredDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADD_ONEXECUTIONREGISTERED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onExecutionRegistered(OnExecutionRegisteredDelegate* arg)
		{
			((::System::Void(*)(OnExecutionRegisteredDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REMOVE_ONEXECUTIONREGISTERED_OFFSET))(arg, nullptr);
		}

		::System::Void add_onExecutionUnregistered(OnExecutionRegisteredDelegate* arg)
		{
			((::System::Void(*)(OnExecutionRegisteredDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ADD_ONEXECUTIONUNREGISTERED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onExecutionUnregistered(OnExecutionRegisteredDelegate* arg)
		{
			((::System::Void(*)(OnExecutionRegisteredDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_REMOVE_ONEXECUTIONUNREGISTERED_OFFSET))(arg, nullptr);
		}

		::System::Void InitResourceInfosData(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_INITRESOURCEINFOSDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCompilationData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_INITIALIZECOMPILATIONDATA_OFFSET))(nullptr);
		}

		::System::Void CountReferences()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_COUNTREFERENCES_OFFSET))(nullptr);
		}

		::System::Void CullUnusedPasses()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CULLUNUSEDPASSES_OFFSET))(nullptr);
		}

		::System::Void UpdatePassSynchronization(CompiledPassInfo&* arg, CompiledPassInfo&* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			((::System::Void(*)(CompiledPassInfo&*, CompiledPassInfo&*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UPDATEPASSSYNCHRONIZATION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateResourceSynchronization(int32_t&* arg, int32_t&* arg, ::System::Int32 arg, CompiledResourceInfo&* arg)
		{
			((::System::Void(*)(int32_t&*, int32_t&*, ::System::Int32, CompiledResourceInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UPDATERESOURCESYNCHRONIZATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetLatestProducerIndex(::System::Int32 arg, CompiledResourceInfo&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, CompiledResourceInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETLATESTPRODUCERINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetLatestValidReadIndex(CompiledResourceInfo&* arg)
		{
			return (return (::System::Int32(*)(CompiledResourceInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETLATESTVALIDREADINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetFirstValidWriteIndex(CompiledResourceInfo&* arg)
		{
			return (return (::System::Int32(*)(CompiledResourceInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETFIRSTVALIDWRITEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetLatestValidWriteIndex(CompiledResourceInfo&* arg)
		{
			return (return (::System::Int32(*)(CompiledResourceInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETLATESTVALIDWRITEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void CreateRendererLists()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CREATERENDERERLISTS_OFFSET))(nullptr);
		}

		::System::Void UpdateResourceAllocationAndSynchronization()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UPDATERESOURCEALLOCATIONANDSYNCHRONIZATION_OFFSET))(nullptr);
		}

		::System::Boolean AreRendererListsEmpty(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_ARERENDERERLISTSEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Void TryCullPassAtIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_TRYCULLPASSATINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void CullRendererLists()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CULLRENDERERLISTS_OFFSET))(nullptr);
		}

		::System::Void CompileRenderGraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_COMPILERENDERGRAPH_OFFSET))(nullptr);
		}

		CompiledPassInfo&* CompilePassImmediatly(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* arg)
		{
			return (return (CompiledPassInfo&*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_COMPILEPASSIMMEDIATLY_OFFSET))(arg, nullptr);
		}

		::System::Void ExecutePassImmediately(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_EXECUTEPASSIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteCompiledPass(CompiledPassInfo&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(CompiledPassInfo&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_EXECUTECOMPILEDPASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExecuteRenderGraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_EXECUTERENDERGRAPH_OFFSET))(nullptr);
		}

		::System::Void PreRenderPassSetRenderTargets(CompiledPassInfo&* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg)
		{
			((::System::Void(*)(CompiledPassInfo&*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_PRERENDERPASSSETRENDERTARGETS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreRenderPassExecute(CompiledPassInfo&* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg)
		{
			((::System::Void(*)(CompiledPassInfo&*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_PRERENDERPASSEXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PostRenderPassExecute(CompiledPassInfo&* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg)
		{
			((::System::Void(*)(CompiledPassInfo&*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_POSTRENDERPASSEXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearRenderPasses()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEARRENDERPASSES_OFFSET))(nullptr);
		}

		::System::Void ReleaseImmediateModeResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_RELEASEIMMEDIATEMODERESOURCES_OFFSET))(nullptr);
		}

		::System::Void LogFrameInformation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGFRAMEINFORMATION_OFFSET))(nullptr);
		}

		::System::Void LogRendererListsCreation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGRENDERERLISTSCREATION_OFFSET))(nullptr);
		}

		::System::Void LogRenderPassBegin(CompiledPassInfo&* arg)
		{
			((::System::Void(*)(CompiledPassInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGRENDERPASSBEGIN_OFFSET))(arg, nullptr);
		}

		::System::Void LogCulledPasses()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_LOGCULLEDPASSES_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::ProfilingSampler* GetDefaultProfilingSampler(::System::String* str)
		{
			return (return (::UnityEngine::Rendering::ProfilingSampler*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GETDEFAULTPROFILINGSAMPLER_OFFSET))(str, nullptr);
		}

		::System::Void UpdateImportedResourceLifeTime(ResourceDebugData&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(ResourceDebugData&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_UPDATEIMPORTEDRESOURCELIFETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateDebugData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_GENERATEDEBUGDATA_OFFSET))(nullptr);
		}

		::System::Void CleanupDebugData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_CLEANUPDEBUGDATA_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPH_.CCTOR_OFFSET))(nullptr);
		}

	};
}

