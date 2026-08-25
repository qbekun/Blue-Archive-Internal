#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalDrawDBufferSystem; }
namespace UnityEngine::Rendering::Universal { class DBufferSettings; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal::Internal { class DeferredLights; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_CAMERADEPTHTEXTUREINDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA0395C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0395F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_SET_CAMERADEPTHATTACHMENTINDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA039800)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_SET_CAMERADEPTHTEXTUREINDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA039830)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_DBUFFERCOLORINDENTIFIERS_OFFSET UNITYSDK_OFFSET(0xA039860)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_DEFERREDLIGHTS_OFFSET UNITYSDK_OFFSET(0xA039870)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA039880)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA039DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA03A8E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_DBUFFERDEPTHINDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA03AE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_ISDEFERRED_OFFSET UNITYSDK_OFFSET(0xA0397F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_CAMERADEPTHATTACHMENTINDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA03AE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_CLEARDBUFFERS_OFFSET UNITYSDK_OFFSET(0xA03A270)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_SET_DEFERREDLIGHTS_OFFSET UNITYSDK_OFFSET(0xA03AE90)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_SET_DBUFFERCOLORINDENTIFIERS_OFFSET UNITYSDK_OFFSET(0xA03AEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA03AED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_SET_DBUFFERDEPTHINDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA03B100)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DBufferRenderPass_TypeDefinitionIndex = 32593;

	class DBufferRenderPass : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_DBufferNames; // 0x0
		::System::String* s_DBufferDepthName; // 0x8
		::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* m_DrawSystem; // 0xD8
		::UnityEngine::Rendering::Universal::DBufferSettings* m_Settings; // 0xE0
		::UnityEngine::Material* m_DBufferClear; // 0xE8
		::UnityEngine::Rendering::FilteringSettings* m_FilteringSettings; // 0xF0
		Il2CppObject* m_ShaderTagIdList; // 0x108
		::System::Int32 m_DBufferCount; // 0x110
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x118
		::UnityEngine::Rendering::Universal::Internal::DeferredLights* _deferredLights_k__BackingField; // 0x120
		::Il2CppArray<::System::Object*>* _dBufferColorIndentifiers_k__BackingField; // 0x128
		::UnityEngine::Rendering::RenderTargetIdentifier* _dBufferDepthIndentifier_k__BackingField; // 0x130
		::UnityEngine::Rendering::RenderTargetIdentifier* _cameraDepthTextureIndentifier_k__BackingField; // 0x158
		::UnityEngine::Rendering::RenderTargetIdentifier* _cameraDepthAttachmentIndentifier_k__BackingField; // 0x180

		::UnityEngine::Rendering::RenderTargetIdentifier* get_cameraDepthTextureIndentifier()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_CAMERADEPTHTEXTUREINDENTIFIER_OFFSET))(nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_cameraDepthAttachmentIndentifier(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_SET_CAMERADEPTHATTACHMENTINDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void set_cameraDepthTextureIndentifier(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_SET_CAMERADEPTHTEXTUREINDENTIFIER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_dBufferColorIndentifiers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_DBUFFERCOLORINDENTIFIERS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::DeferredLights* get_deferredLights()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::DeferredLights*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_DEFERREDLIGHTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Material* arg, ::UnityEngine::Rendering::Universal::DBufferSettings* arg, ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Rendering::Universal::DBufferSettings*, ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_dBufferDepthIndentifier()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_DBUFFERDEPTHINDENTIFIER_OFFSET))(nullptr);
		}

		::System::Boolean get_isDeferred()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_ISDEFERRED_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_cameraDepthAttachmentIndentifier()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_GET_CAMERADEPTHATTACHMENTINDENTIFIER_OFFSET))(nullptr);
		}

		::System::Void ClearDBuffers(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_CLEARDBUFFERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_deferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::DeferredLights*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_SET_DEFERREDLIGHTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_dBufferColorIndentifiers(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_SET_DBUFFERCOLORINDENTIFIERS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_dBufferDepthIndentifier(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DBUFFERRENDERPASS_SET_DBUFFERDEPTHINDENTIFIER_OFFSET))(arg, nullptr);
		}

	};
}

