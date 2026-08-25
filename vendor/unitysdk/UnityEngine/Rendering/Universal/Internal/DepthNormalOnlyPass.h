#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering { class RenderQueueRange; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_ALLOCATEDEPTH_OFFSET UNITYSDK_OFFSET(0xA0BE930)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_DEPTHHANDLE_OFFSET UNITYSDK_OFFSET(0xA0BE940)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_ALLOCATENORMAL_OFFSET UNITYSDK_OFFSET(0xA0BE970)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_NORMALHANDLE_OFFSET UNITYSDK_OFFSET(0xA0BE980)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0BE9B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0BEB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0BED20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0BEF60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_DEPTHDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA0BF0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_ALLOCATEDEPTH_OFFSET UNITYSDK_OFFSET(0xA0BF0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_DEPTHHANDLE_OFFSET UNITYSDK_OFFSET(0xA0BF0F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_NORMALDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA0BF120)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_SHADERTAGIDS_OFFSET UNITYSDK_OFFSET(0xA0BF150)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_NORMALDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA0BF170)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_DEPTHDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA0BF1A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA0BF1D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_SHADERTAGIDS_OFFSET UNITYSDK_OFFSET(0xA0BF800)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0BF810)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_ALLOCATENORMAL_OFFSET UNITYSDK_OFFSET(0xA0BFAF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_NORMALHANDLE_OFFSET UNITYSDK_OFFSET(0xA0BFB00)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DepthNormalOnlyPass_TypeDefinitionIndex = 32871;

	class DepthNormalOnlyPass : public Il2CppObject
	{
	public:
		::UnityEngine::RenderTextureDescriptor* _normalDescriptor_k__BackingField; // 0xD8
		::UnityEngine::RenderTextureDescriptor* _depthDescriptor_k__BackingField; // 0x10C
		::System::Boolean _allocateDepth_k__BackingField; // 0x140
		::System::Boolean _allocateNormal_k__BackingField; // 0x141
		Il2CppObject* _shaderTagIds_k__BackingField; // 0x148
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _depthHandle_k__BackingField; // 0x150
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _normalHandle_k__BackingField; // 0x180
		::UnityEngine::Rendering::FilteringSettings* m_FilteringSettings; // 0x1B0
		::System::Int32 m_RendererMSAASamples; // 0x1C8
		Il2CppObject* k_DepthNormals; // 0x0

		::System::Void set_allocateDepth(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_ALLOCATEDEPTH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_depthHandle()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_DEPTHHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_allocateNormal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_ALLOCATENORMAL_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_normalHandle()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_NORMALHANDLE_OFFSET))(nullptr);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SETUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Rendering::RenderQueueRange* arg, ::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Rendering::RenderQueueRange*, ::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_depthDescriptor(::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_DEPTHDESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_allocateDepth()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_ALLOCATEDEPTH_OFFSET))(nullptr);
		}

		::System::Void set_depthHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_DEPTHHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_normalDescriptor(::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_NORMALDESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_shaderTagIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_SHADERTAGIDS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* get_normalDescriptor()
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_NORMALDESCRIPTOR_OFFSET))(nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* get_depthDescriptor()
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_DEPTHDESCRIPTOR_OFFSET))(nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_shaderTagIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_GET_SHADERTAGIDS_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_allocateNormal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_ALLOCATENORMAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_normalHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHNORMALONLYPASS_SET_NORMALHANDLE_OFFSET))(arg, nullptr);
		}

	};
}

