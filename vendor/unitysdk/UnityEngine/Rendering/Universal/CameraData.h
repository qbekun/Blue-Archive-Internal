#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class CameraRenderType; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::Rendering::Universal { class ImageScalingMode; }
namespace UnityEngine::Rendering::Universal { class ImageUpscalingFilter; }
namespace UnityEngine { class CameraType; }
namespace UnityEngine::Rendering { class SortingCriteria; }
namespace UnityEngine::Rendering::Universal { class XRPass; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal { class AntialiasingMode; }
namespace UnityEngine::Rendering::Universal { class AntialiasingQuality; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine { class Vector3; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GETVIEWMATRIX_OFFSET UNITYSDK_OFFSET(0xA08D980)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_SETBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0xA07FDF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GETPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0xA08DA70)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_SETVIEWANDPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0xA08A470)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GET_ISSCENEVIEWCAMERA_OFFSET UNITYSDK_OFFSET(0xA07C2B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GETGPUPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0xA08DB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GET_ORIGINALCAMERADESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA08DE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GET_REQUIRESRGBCONVERSION_OFFSET UNITYSDK_OFFSET(0xA07C340)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GET_ISPREVIEWCAMERA_OFFSET UNITYSDK_OFFSET(0xA07FE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GET_ISRENDERPASSSUPPORTEDCAMERA_OFFSET UNITYSDK_OFFSET(0xA08DEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_ISCAMERAPROJECTIONMATRIXFLIPPED_OFFSET UNITYSDK_OFFSET(0xA08DBA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CameraData_TypeDefinitionIndex = 32800;

	class CameraData : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* m_ViewMatrix; // 0x10
		::UnityEngine::Matrix4x4* m_ProjectionMatrix; // 0x50
		::UnityEngine::Camera* camera; // 0x90
		::UnityEngine::Rendering::Universal::CameraRenderType* renderType; // 0x98
		::UnityEngine::RenderTexture* targetTexture; // 0xA0
		::UnityEngine::RenderTextureDescriptor* cameraTargetDescriptor; // 0xA8
		::UnityEngine::Rect* pixelRect; // 0xDC
		::System::Int32 pixelWidth; // 0xEC
		::System::Int32 pixelHeight; // 0xF0
		::System::Single aspectRatio; // 0xF4
		::System::Single renderScale; // 0xF8
		::UnityEngine::Rendering::Universal::ImageScalingMode* imageScalingMode; // 0xFC
		::UnityEngine::Rendering::Universal::ImageUpscalingFilter* upscalingFilter; // 0x100
		::System::Boolean fsrOverrideSharpness; // 0x104
		::System::Single fsrSharpness; // 0x108
		::System::Boolean clearDepth; // 0x10C
		::UnityEngine::CameraType* cameraType; // 0x110
		::System::Boolean isDefaultViewport; // 0x114
		::System::Boolean isHdrEnabled; // 0x115
		::System::Boolean requiresDepthTexture; // 0x116
		::System::Boolean requiresOpaqueTexture; // 0x117
		::System::Int32 originalWidth; // 0x118
		::System::Int32 originalHeight; // 0x11C
		::System::Boolean postProcessingRequiresDepthTexture; // 0x120
		::System::Boolean xrRendering; // 0x121
		::UnityEngine::Rendering::SortingCriteria* defaultOpaqueSortFlags; // 0x124
		::UnityEngine::Rendering::Universal::XRPass* xr; // 0x128
		::System::Boolean isStereoEnabled; // 0x130
		::System::Single maxShadowDistance; // 0x134
		::System::Boolean postProcessEnabled; // 0x138
		Il2CppObject* captureActions; // 0x140
		::UnityEngine::LayerMask* volumeLayerMask; // 0x148
		::UnityEngine::Transform* volumeTrigger; // 0x150
		::System::Boolean isStopNaNEnabled; // 0x158
		::System::Boolean isDitheringEnabled; // 0x159
		::UnityEngine::Rendering::Universal::AntialiasingMode* antialiasing; // 0x15C
		::UnityEngine::Rendering::Universal::AntialiasingQuality* antialiasingQuality; // 0x160
		::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer; // 0x168
		::System::Boolean resolveFinalTarget; // 0x170
		::UnityEngine::Vector3* worldSpaceCameraPos; // 0x174

		::UnityEngine::Matrix4x4* GetViewMatrix(::System::Int32 arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GETVIEWMATRIX_OFFSET))(arg, nullptr);
		}

		::System::Void SetBufferSize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_SETBUFFERSIZE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* GetProjectionMatrix(::System::Int32 arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GETPROJECTIONMATRIX_OFFSET))(arg, nullptr);
		}

		::System::Void SetViewAndProjectionMatrix(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_SETVIEWANDPROJECTIONMATRIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_isSceneViewCamera()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GET_ISSCENEVIEWCAMERA_OFFSET))(nullptr);
		}

		::UnityEngine::Matrix4x4* GetGPUProjectionMatrix(::System::Int32 arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GETGPUPROJECTIONMATRIX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* get_OriginalCameraDescriptor()
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GET_ORIGINALCAMERADESCRIPTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_requireSrgbConversion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GET_REQUIRESRGBCONVERSION_OFFSET))(nullptr);
		}

		::System::Boolean get_isPreviewCamera()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GET_ISPREVIEWCAMERA_OFFSET))(nullptr);
		}

		::System::Boolean get_isRenderPassSupportedCamera()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_GET_ISRENDERPASSSUPPORTEDCAMERA_OFFSET))(nullptr);
		}

		::System::Boolean IsCameraProjectionMatrixFlipped()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CAMERADATA_ISCAMERAPROJECTIONMATRIXFLIPPED_OFFSET))(nullptr);
		}

	};
}

