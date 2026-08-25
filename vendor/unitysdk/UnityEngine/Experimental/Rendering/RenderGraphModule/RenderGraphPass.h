#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureHandle; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ResourceHandle&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class DepthAccess; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphContext; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphObjectPool; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RendererListHandle; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x9F9D7E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_ALLOWPASSCULLING_OFFSET UNITYSDK_OFFSET(0x9F9D7F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ADDRESOURCEREAD_OFFSET UNITYSDK_OFFSET(0x9F9B530)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F9D850)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9F9DBE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SETDEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9B0D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GETEXECUTEDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_ENABLEASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x9F9DBF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ENABLEASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x9F9C050)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x9F9DC00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_COLORBUFFERMAXINDEX_OFFSET UNITYSDK_OFFSET(0x9F9DC10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ADDRESOURCEWRITE_OFFSET UNITYSDK_OFFSET(0x9F9B650)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9F9DC20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ALLOWRENDERERLISTCULLING_OFFSET UNITYSDK_OFFSET(0x9F9C130)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_ALLOWRENDERERLISTCULLING_OFFSET UNITYSDK_OFFSET(0x9F9DC30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_ALLOWPASSCULLING_OFFSET UNITYSDK_OFFSET(0x9F9DC40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_COLORBUFFERS_OFFSET UNITYSDK_OFFSET(0x9F9DC50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_GENERATEDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x9F9DC60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_ALLOWRENDERERLISTCULLING_OFFSET UNITYSDK_OFFSET(0x9F9DC70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_CUSTOMSAMPLER_OFFSET UNITYSDK_OFFSET(0x9F9DC80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9F9DC90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x9F9DCA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GENERATEDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x9F9C250)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_GENERATEDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x9F9DCB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9DCC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_ENABLEASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x9F9E0F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_COLORBUFFERMAXINDEX_OFFSET UNITYSDK_OFFSET(0x9F9E100)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_COLORBUFFERS_OFFSET UNITYSDK_OFFSET(0x9F9E110)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_USERENDERERLIST_OFFSET UNITYSDK_OFFSET(0x9F9BBD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_DEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9E120)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_DEPENDSONRENDERERLIST_OFFSET UNITYSDK_OFFSET(0x9F9E130)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_DEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9E1D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SETCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9AC70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ALLOWPASSCULLING_OFFSET UNITYSDK_OFFSET(0x9F9C080)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_CUSTOMSAMPLER_OFFSET UNITYSDK_OFFSET(0x9F9E1E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ADDTRANSIENTRESOURCE_OFFSET UNITYSDK_OFFSET(0x9F9B950)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_HASRENDERFUNC_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphPass_TypeDefinitionIndex = 33854;

	class RenderGraphPass : public Il2CppObject
	{
	public:
		::System::String* _name_k__BackingField; // 0x10
		::System::Int32 _index_k__BackingField; // 0x18
		::UnityEngine::Rendering::ProfilingSampler* _customSampler_k__BackingField; // 0x20
		::System::Boolean _enableAsyncCompute_k__BackingField; // 0x28
		::System::Boolean _allowPassCulling_k__BackingField; // 0x29
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* _depthBuffer_k__BackingField; // 0x2C
		::Il2CppArray<::System::Object*>* _colorBuffers_k__BackingField; // 0x40
		::System::Int32 _colorBufferMaxIndex_k__BackingField; // 0x48
		::System::Int32 _refCount_k__BackingField; // 0x4C
		::System::Boolean _generateDebugData_k__BackingField; // 0x50
		::System::Boolean _allowRendererListCulling_k__BackingField; // 0x51
		::Il2CppArray<::System::Object*>* resourceReadLists; // 0x58
		::Il2CppArray<::System::Object*>* resourceWriteLists; // 0x60
		::Il2CppArray<::System::Object*>* transientResourceList; // 0x68
		Il2CppObject* usedRendererListList; // 0x70
		Il2CppObject* dependsOnRendererListList; // 0x78

		::System::Int32 get_refCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_REFCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_allowPassCulling()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_ALLOWPASSCULLING_OFFSET))(nullptr);
		}

		::System::Void AddResourceRead(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ADDRESOURCEREAD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_CLEAR_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void SetDepthBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SETDEPTHBUFFER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetExecuteDelegate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GETEXECUTEDELEGATE_OFFSET))(nullptr);
		}

		::System::Void set_enableAsyncCompute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_ENABLEASYNCCOMPUTE_OFFSET))(arg, nullptr);
		}

		::System::Void EnableAsyncCompute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ENABLEASYNCCOMPUTE_OFFSET))(arg, nullptr);
		}

		::System::Void set_index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_colorBufferMaxIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_COLORBUFFERMAXINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void AddResourceWrite(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ADDRESOURCEWRITE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void AllowRendererListCulling(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ALLOWRENDERERLISTCULLING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_allowRendererListCulling()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_ALLOWRENDERERLISTCULLING_OFFSET))(nullptr);
		}

		::System::Void set_allowPassCulling(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_ALLOWPASSCULLING_OFFSET))(arg, nullptr);
		}

		::System::Void set_colorBuffers(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_COLORBUFFERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_generateDebugData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_GENERATEDEBUGDATA_OFFSET))(nullptr);
		}

		::System::Void set_allowRendererListCulling(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_ALLOWRENDERERLISTCULLING_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void set_customSampler(::UnityEngine::Rendering::ProfilingSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ProfilingSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_CUSTOMSAMPLER_OFFSET))(arg, nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_refCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_REFCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateDebugData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GENERATEDEBUGDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_generateDebugData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_GENERATEDEBUGDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_enableAsyncCompute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_ENABLEASYNCCOMPUTE_OFFSET))(nullptr);
		}

		::System::Int32 get_colorBufferMaxIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_COLORBUFFERMAXINDEX_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_colorBuffers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_COLORBUFFERS_OFFSET))(nullptr);
		}

		::System::Void Release(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void UseRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_USERENDERERLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_depthBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SET_DEPTHBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void DependsOnRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_DEPENDSONRENDERERLIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* get_depthBuffer()
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_DEPTHBUFFER_OFFSET))(nullptr);
		}

		::System::Void SetColorBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_SETCOLORBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AllowPassCulling(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ALLOWPASSCULLING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::ProfilingSampler* get_customSampler()
		{
			return (return (::UnityEngine::Rendering::ProfilingSampler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_GET_CUSTOMSAMPLER_OFFSET))(nullptr);
		}

		::System::Void AddTransientResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_ADDTRANSIENTRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasRenderFunc()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS_HASRENDERFUNC_OFFSET))(nullptr);
		}

	};
}

