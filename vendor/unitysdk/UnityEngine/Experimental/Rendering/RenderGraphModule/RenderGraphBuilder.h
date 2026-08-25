#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphPass; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphResourceRegistry; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraph; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureHandle; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureHandle&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class DepthAccess; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureDesc&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RendererListHandle; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RendererListHandle&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferHandle; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferHandle&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ComputeBufferDesc&; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class ResourceHandle&; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USECOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9AA70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USEDEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9AD00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_READTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9B120)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_WRITETEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9B080)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_READWRITETEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9B770)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_CREATETRANSIENTTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9B7D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_CREATETRANSIENTTEXTURE_OFFSET UNITYSDK_OFFSET(0x9F9BA70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USERENDERERLIST_OFFSET UNITYSDK_OFFSET(0x9F9BB30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_READCOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9BC70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_WRITECOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9BCA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_CREATETRANSIENTCOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9BCE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_CREATETRANSIENTCOMPUTEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F9BE60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_SETRENDERFUNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_ENABLEASYNCCOMPUTE_OFFSET UNITYSDK_OFFSET(0x9F9C030)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_ALLOWPASSCULLING_OFFSET UNITYSDK_OFFSET(0x9F9C060)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F9C090)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_ALLOWRENDERERLISTCULLING_OFFSET UNITYSDK_OFFSET(0x9F9C110)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x9F9C140)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9C1E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F9C0D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0x9F9AAD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_GENERATEDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x9F9C230)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphBuilder_TypeDefinitionIndex = 33847;

	class RenderGraphBuilder : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* m_RenderPass; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources; // 0x18
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph; // 0x20
		::System::Boolean m_Disposed; // 0x28

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* UseColorBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USECOLORBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* UseDepthBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USEDEPTHBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* ReadTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_READTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* WriteTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_WRITETEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* ReadWriteTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_READWRITETEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* CreateTransientTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_CREATETRANSIENTTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle* CreateTransientTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_CREATETRANSIENTTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle* UseRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_USERENDERERLIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* ReadComputeBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_READCOMPUTEBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* WriteComputeBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_WRITECOMPUTEBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* CreateTransientComputeBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_CREATETRANSIENTCOMPUTEBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle* CreateTransientComputeBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_CREATETRANSIENTCOMPUTEBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void SetRenderFunc(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_SETRENDERFUNC_OFFSET))(arg, nullptr);
		}

		::System::Void EnableAsyncCompute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_ENABLEASYNCCOMPUTE_OFFSET))(arg, nullptr);
		}

		::System::Void AllowPassCulling(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_ALLOWPASSCULLING_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void AllowRendererListCulling(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_ALLOWRENDERERLISTCULLING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle* DependsOn(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle&* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DEPENDSON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_CHECKRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateDebugData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHBUILDER_GENERATEDEBUGDATA_OFFSET))(arg, nullptr);
		}

	};
}

