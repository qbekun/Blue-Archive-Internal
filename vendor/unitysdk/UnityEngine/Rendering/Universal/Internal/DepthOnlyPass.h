#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering { class RenderQueueRange; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_SET_SHADERTAGID_OFFSET UNITYSDK_OFFSET(0xA0BFB30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0BFB40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_SET_ALLOCATEDEPTH_OFFSET UNITYSDK_OFFSET(0xA0BFCE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0BFCF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA0BFE70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0C0160)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0C0440)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA0C0520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_GET_DEPTHATTACHMENTHANDLE_OFFSET UNITYSDK_OFFSET(0xA0C0550)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0C0580)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_SET_DEPTHATTACHMENTHANDLE_OFFSET UNITYSDK_OFFSET(0xA0C05F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_GET_SHADERTAGID_OFFSET UNITYSDK_OFFSET(0xA0C0620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_SET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA0C0630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_GET_ALLOCATEDEPTH_OFFSET UNITYSDK_OFFSET(0xA0C0660)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DepthOnlyPass_TypeDefinitionIndex = 32872;

	class DepthOnlyPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ShaderTagId* k_ShaderTagId; // 0x0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* _depthAttachmentHandle_k__BackingField; // 0xD8
		::UnityEngine::RenderTextureDescriptor* _descriptor_k__BackingField; // 0x108
		::System::Boolean _allocateDepth_k__BackingField; // 0x13C
		::UnityEngine::Rendering::ShaderTagId* _shaderTagId_k__BackingField; // 0x140
		::UnityEngine::Rendering::FilteringSettings* m_FilteringSettings; // 0x144

		::System::Void set_shaderTagId(::UnityEngine::Rendering::ShaderTagId* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ShaderTagId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_SET_SHADERTAGID_OFFSET))(arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_allocateDepth(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_SET_ALLOCATEDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Rendering::RenderQueueRange* arg, ::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Rendering::RenderQueueRange*, ::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_SETUP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* get_descriptor()
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_GET_DESCRIPTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_depthAttachmentHandle()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_GET_DEPTHATTACHMENTHANDLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_depthAttachmentHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_SET_DEPTHATTACHMENTHANDLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::ShaderTagId* get_shaderTagId()
		{
			return (return (::UnityEngine::Rendering::ShaderTagId*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_GET_SHADERTAGID_OFFSET))(nullptr);
		}

		::System::Void set_descriptor(::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_SET_DESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_allocateDepth()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEPTHONLYPASS_GET_ALLOCATEDEPTH_OFFSET))(nullptr);
		}

	};
}

