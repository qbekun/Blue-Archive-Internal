#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphResourceRegistry; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphDebugParams; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphLogger; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureHandle&; }
namespace UnityEngine::Rendering::RendererUtils { class RendererList; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RendererListHandle&; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferHandle&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ResourceHandle&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphResourceType; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureHandle; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureDesc&; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureResource; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureDesc; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RendererListHandle; }
namespace UnityEngine::Rendering::RendererUtils { class RendererListDesc&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferHandle; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferDesc&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferDesc; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferResource; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphContext; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class IRenderGraphResource; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F9F5B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F9F5F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9F640)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURENEEDSFALLBACK_OFFSET UNITYSDK_OFFSET(0x9F9AFE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERERLIST_OFFSET UNITYSDK_OFFSET(0x9F9FC10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETCOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9E3B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9FE30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9FF70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_BEGINRENDERGRAPH_OFFSET UNITYSDK_OFFSET(0x9FA0690)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_BEGINEXECUTE_OFFSET UNITYSDK_OFFSET(0x9FA07F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ENDEXECUTE_OFFSET UNITYSDK_OFFSET(0x9FA0AB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CHECKHANDLEVALIDITY_OFFSET UNITYSDK_OFFSET(0x9FA0B00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CHECKHANDLEVALIDITY_OFFSET UNITYSDK_OFFSET(0x9FA0B70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_INCREMENTWRITECOUNT_OFFSET UNITYSDK_OFFSET(0x9F9AAE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERGRAPHRESOURCENAME_OFFSET UNITYSDK_OFFSET(0x9FA0C80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERGRAPHRESOURCENAME_OFFSET UNITYSDK_OFFSET(0x9FA0E10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ISRENDERGRAPHRESOURCEIMPORTED_OFFSET UNITYSDK_OFFSET(0x9F9AE60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ISRENDERGRAPHRESOURCESHARED_OFFSET UNITYSDK_OFFSET(0x9FA0EB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ISGRAPHICSRESOURCECREATED_OFFSET UNITYSDK_OFFSET(0x9FA0F00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ISRENDERERLISTCREATED_OFFSET UNITYSDK_OFFSET(0x9FA1090)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ISRENDERGRAPHRESOURCEIMPORTED_OFFSET UNITYSDK_OFFSET(0x9FA1120)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERGRAPHRESOURCETRANSIENTINDEX_OFFSET UNITYSDK_OFFSET(0x9FA11B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_IMPORTTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FA1330)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATESHAREDTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FA1510)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASESHAREDTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FA1790)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_IMPORTBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x9FA1980)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9B830)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCECOUNT_OFFSET UNITYSDK_OFFSET(0x9FA1B40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCE_OFFSET UNITYSDK_OFFSET(0x9F9FA60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCEDESC_OFFSET UNITYSDK_OFFSET(0x9F9B350)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_FORCETEXTURECLEAR_OFFSET UNITYSDK_OFFSET(0x9F9B4E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLIST_OFFSET UNITYSDK_OFFSET(0x9FA1BA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_IMPORTCOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x9FA1CC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATECOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9BD30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETCOMPUTEBUFFERRESOURCEDESC_OFFSET UNITYSDK_OFFSET(0x9F9BEE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETCOMPUTEBUFFERRESOURCECOUNT_OFFSET UNITYSDK_OFFSET(0x9FA1DF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETCOMPUTEBUFFERRESOURCE_OFFSET UNITYSDK_OFFSET(0x9F9FCD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_UPDATESHAREDRESOURCELASTFRAMEINDEX_OFFSET UNITYSDK_OFFSET(0x9FA1E50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_MANAGESHAREDRENDERGRAPHRESOURCES_OFFSET UNITYSDK_OFFSET(0x9FA0850)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATEPOOLEDRESOURCE_OFFSET UNITYSDK_OFFSET(0x9FA1ED0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x9FA2060)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASEPOOLEDRESOURCE_OFFSET UNITYSDK_OFFSET(0x9FA2350)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x9FA2470)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATETEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x9FA1B30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATERENDERERLISTDESC_OFFSET UNITYSDK_OFFSET(0x9FA1C60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATECOMPUTEBUFFERDESC_OFFSET UNITYSDK_OFFSET(0x9FA1DE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLISTS_OFFSET UNITYSDK_OFFSET(0x9FA26B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x9FA2A60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_PURGEUNUSEDGRAPHICSRESOURCES_OFFSET UNITYSDK_OFFSET(0x9FA2F00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9FA2FC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_FLUSHLOGS_OFFSET UNITYSDK_OFFSET(0x9FA3100)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGRESOURCES_OFFSET UNITYSDK_OFFSET(0x9FA2BE0)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphResourceRegistry_TypeDefinitionIndex = 33868;

	class RenderGraphResourceRegistry : public Il2CppObject
	{
	public:
		::System::Int32 kSharedResourceLifetime; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_CurrentRegistry; // 0x0
		::Il2CppArray<::System::Object*>* m_RenderGraphResources; // 0x10
		Il2CppObject* m_RendererListResources; // 0x18
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* m_RenderGraphDebug; // 0x20
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_ResourceLogger; // 0x28
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_FrameInformationLogger; // 0x30
		::System::Int32 m_CurrentFrameIndex; // 0x38
		::System::Int32 m_ExecutionCount; // 0x3C
		::UnityEngine::Rendering::RTHandle* m_CurrentBackbuffer; // 0x40
		::System::Int32 kInitialRendererListCount; // 0x0
		Il2CppObject* m_ActiveRendererLists; // 0x48

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* get_current()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* GetTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&* arg)
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TextureNeedsFallback(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_TEXTURENEEDSFALLBACK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RendererUtils::RendererList* GetRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle&* arg)
		{
			return (return (::UnityEngine::Rendering::RendererUtils::RendererList*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERERLIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ComputeBuffer* GetComputeBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&* arg)
		{
			return (return (::UnityEngine::ComputeBuffer*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETCOMPUTEBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BeginRenderGraph(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_BEGINRENDERGRAPH_OFFSET))(arg, nullptr);
		}

		::System::Void BeginExecute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_BEGINEXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void EndExecute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ENDEXECUTE_OFFSET))(nullptr);
		}

		::System::Void CheckHandleValidity(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CHECKHANDLEVALIDITY_OFFSET))(arg, nullptr);
		}

		::System::Void CheckHandleValidity(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CHECKHANDLEVALIDITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IncrementWriteCount(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_INCREMENTWRITECOUNT_OFFSET))(arg, nullptr);
		}

		::System::String* GetRenderGraphResourceName(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERGRAPHRESOURCENAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetRenderGraphResourceName(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERGRAPHRESOURCENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsRenderGraphResourceImported(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ISRENDERGRAPHRESOURCEIMPORTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRenderGraphResourceShared(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ISRENDERGRAPHRESOURCESHARED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsGraphicsResourceCreated(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ISGRAPHICSRESOURCECREATED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRendererListCreated(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ISRENDERERLISTCREATED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRenderGraphResourceImported(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_ISRENDERGRAPHRESOURCEIMPORTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetRenderGraphResourceTransientIndex(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETRENDERGRAPHRESOURCETRANSIENTINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* ImportTexture(::UnityEngine::Rendering::RTHandle* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Rendering::RTHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_IMPORTTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* CreateSharedTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATESHAREDTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseSharedTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASESHAREDTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_IMPORTBACKBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* CreateTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetTextureResourceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCECOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource* GetTextureResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc* GetTextureResourceDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETTEXTURERESOURCEDESC_OFFSET))(arg, nullptr);
		}

		::System::Void ForceTextureClear(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_FORCETEXTURECLEAR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle* CreateRendererList(::UnityEngine::Rendering::RendererUtils::RendererListDesc&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle*(*)(::UnityEngine::Rendering::RendererUtils::RendererListDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* ImportComputeBuffer(::UnityEngine::ComputeBuffer* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle*(*)(::UnityEngine::ComputeBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_IMPORTCOMPUTEBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* CreateComputeBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc&* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATECOMPUTEBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc* GetComputeBufferResourceDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETCOMPUTEBUFFERRESOURCEDESC_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetComputeBufferResourceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETCOMPUTEBUFFERRESOURCECOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferResource* GetComputeBufferResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferResource*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_GETCOMPUTEBUFFERRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateSharedResourceLastFrameIndex(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_UPDATESHAREDRESOURCELASTFRAMEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ManageSharedRenderGraphResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_MANAGESHAREDRENDERGRAPHRESOURCES_OFFSET))(nullptr);
		}

		::System::Boolean CreatePooledResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATEPOOLEDRESOURCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CreateTextureCallback(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATETEXTURECALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleasePooledResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASEPOOLEDRESOURCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReleaseTextureCallback(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_RELEASETEXTURECALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateTextureDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATETEXTUREDESC_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateRendererListDesc(::UnityEngine::Rendering::RendererUtils::RendererListDesc&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RendererUtils::RendererListDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATERENDERERLISTDESC_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateComputeBufferDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_VALIDATECOMPUTEBUFFERDESC_OFFSET))(arg, nullptr);
		}

		::System::Void CreateRendererLists(Il2CppObject* arg, ::UnityEngine::Rendering::ScriptableRenderContext* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Rendering::ScriptableRenderContext*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CREATERENDERERLISTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Clear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void PurgeUnusedGraphicsResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_PURGEUNUSEDGRAPHICSRESOURCES_OFFSET))(nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void FlushLogs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_FLUSHLOGS_OFFSET))(nullptr);
		}

		::System::Void LogResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCEREGISTRY_LOGRESOURCES_OFFSET))(nullptr);
		}

	};
}

