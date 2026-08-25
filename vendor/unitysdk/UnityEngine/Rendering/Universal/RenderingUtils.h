#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class AttachmentDescriptor; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class GraphicsDeviceType; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering { class RenderBufferLoadAction; }
namespace UnityEngine::Rendering { class RenderBufferStoreAction; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering { class CullingResults&; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class SortingCriteria; }
namespace UnityEngine { class RenderTextureFormat; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Experimental::Rendering { class FormatUsage; }
namespace UnityEngine::Rendering { class ClearFlag; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GET_EMPTYATTACHMENT_OFFSET UNITYSDK_OFFSET(0xA06EE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GET_FULLSCREENMESH_OFFSET UNITYSDK_OFFSET(0xA06BA00)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GET_USESTRUCTUREDBUFFER_OFFSET UNITYSDK_OFFSET(0xA06EEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SUPPORTSLIGHTLAYERS_OFFSET UNITYSDK_OFFSET(0xA06EEC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GET_ERRORMATERIAL_OFFSET UNITYSDK_OFFSET(0xA06EED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SETVIEWANDPROJECTIONMATRICES_OFFSET UNITYSDK_OFFSET(0xA06F0A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SETSTEREOVIEWANDPROJECTIONMATRICES_OFFSET UNITYSDK_OFFSET(0xA06F630)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_BLIT_OFFSET UNITYSDK_OFFSET(0xA06FFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_RENDEROBJECTSWITHERROR_OFFSET UNITYSDK_OFFSET(0xA0703E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_CLEARSYSTEMINFOCACHE_OFFSET UNITYSDK_OFFSET(0xA070750)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SUPPORTSRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0xA070820)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SUPPORTSGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA06DE80)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GETLASTVALIDCOLORBUFFERINDEX_OFFSET UNITYSDK_OFFSET(0xA070940)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GETVALIDCOLORBUFFERCOUNT_OFFSET UNITYSDK_OFFSET(0xA070A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_ISMRT_OFFSET UNITYSDK_OFFSET(0xA070B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA070CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_INDEXOF_OFFSET UNITYSDK_OFFSET(0xA070D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_COUNTDISTINCT_OFFSET UNITYSDK_OFFSET(0xA070E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_LASTVALID_OFFSET UNITYSDK_OFFSET(0xA071000)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA071140)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SEQUENCEEQUAL_OFFSET UNITYSDK_OFFSET(0xA071150)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA071250)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RenderingUtils_TypeDefinitionIndex = 32742;

	class RenderingUtils : public Il2CppObject
	{
	public:
		Il2CppObject* m_LegacyShaderPassNames; // 0x0
		::UnityEngine::Rendering::AttachmentDescriptor* s_EmptyAttachment; // 0x8
		::UnityEngine::Mesh* s_FullscreenMesh; // 0x80
		::UnityEngine::Material* s_ErrorMaterial; // 0x88
		::System::Int32 UNITY_STEREO_MATRIX_V; // 0x90
		::System::Int32 UNITY_STEREO_MATRIX_IV; // 0x94
		::System::Int32 UNITY_STEREO_MATRIX_P; // 0x98
		::System::Int32 UNITY_STEREO_MATRIX_IP; // 0x9C
		::System::Int32 UNITY_STEREO_MATRIX_VP; // 0xA0
		::System::Int32 UNITY_STEREO_MATRIX_IVP; // 0xA4
		::System::Int32 UNITY_STEREO_CAMERA_PROJECTION; // 0xA8
		::System::Int32 UNITY_STEREO_CAMERA_INV_PROJECTION; // 0xAC
		::System::Int32 UNITY_STEREO_VECTOR_CAMPOS; // 0xB0
		StereoConstants* stereoConstants; // 0xB8
		Il2CppObject* m_RenderTextureFormatSupport; // 0xC0
		Il2CppObject* m_GraphicsFormatSupport; // 0xC8

		::UnityEngine::Rendering::AttachmentDescriptor* get_emptyAttachment()
		{
			return (return (::UnityEngine::Rendering::AttachmentDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GET_EMPTYATTACHMENT_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* get_fullscreenMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GET_FULLSCREENMESH_OFFSET))(nullptr);
		}

		::System::Boolean get_useStructuredBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GET_USESTRUCTUREDBUFFER_OFFSET))(nullptr);
		}

		::System::Boolean SupportsLightLayers(::UnityEngine::Rendering::GraphicsDeviceType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::GraphicsDeviceType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SUPPORTSLIGHTLAYERS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_errorMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GET_ERRORMATERIAL_OFFSET))(nullptr);
		}

		::System::Void SetViewAndProjectionMatrices(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SETVIEWANDPROJECTIONMATRICES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetStereoViewAndProjectionMatrices(::UnityEngine::Rendering::CommandBuffer* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SETSTEREOVIEWANDPROJECTIONMATRICES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Material* arg, ::System::Int32 arg, ::System::Boolean arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_BLIT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RenderObjectsWithError(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CullingResults&* arg, ::UnityEngine::Camera* arg, ::UnityEngine::Rendering::FilteringSettings* arg, ::UnityEngine::Rendering::SortingCriteria* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CullingResults&*, ::UnityEngine::Camera*, ::UnityEngine::Rendering::FilteringSettings*, ::UnityEngine::Rendering::SortingCriteria*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_RENDEROBJECTSWITHERROR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ClearSystemInfoCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_CLEARSYSTEMINFOCACHE_OFFSET))(nullptr);
		}

		::System::Boolean SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RenderTextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SUPPORTSRENDERTEXTUREFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsGraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::FormatUsage* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::FormatUsage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SUPPORTSGRAPHICSFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetLastValidColorBufferIndex(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GETLASTVALIDCOLORBUFFERINDEX_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetValidColorBufferCount(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_GETVALIDCOLORBUFFERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMRT(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_ISMRT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_CONTAINS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOf(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_INDEXOF_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 CountDistinct(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_COUNTDISTINCT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 LastValid(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_LASTVALID_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Rendering::ClearFlag* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Rendering::ClearFlag*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_CONTAINS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SequenceEqual(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_SEQUENCEEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERINGUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

