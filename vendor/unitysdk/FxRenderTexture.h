#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
class CameraFindType;
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
namespace UnityEngine { class RenderTexture; }

#define FXRENDERTEXTURE_SET_PIXELHEIGHT_OFFSET UNITYSDK_OFFSET(0x20BD560)
#define FXRENDERTEXTURE_FINDCAMERA_OFFSET UNITYSDK_OFFSET(0x20BD570)
#define FXRENDERTEXTURE_GET_PIXELWIDTH_OFFSET UNITYSDK_OFFSET(0x20BD5A0)
#define FXRENDERTEXTURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20BD5B0)
#define FXRENDERTEXTURE_SET_PIXELWIDTH_OFFSET UNITYSDK_OFFSET(0x20BDC20)
#define FXRENDERTEXTURE_CLEAR_OFFSET UNITYSDK_OFFSET(0x20BDC30)
#define FXRENDERTEXTURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20BDD00)
#define FXRENDERTEXTURE_REFRESHTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0x20BD9E0)
#define FXRENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BDD10)
#define FXRENDERTEXTURE_REFRESHDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x20BDD60)
#define FXRENDERTEXTURE_INITSCALETRANSFORM_OFFSET UNITYSDK_OFFSET(0x20BDBA0)
#define FXRENDERTEXTURE_FINDSCALECAMERA_OFFSET UNITYSDK_OFFSET(0x20BE200)
#define FXRENDERTEXTURE_GET_PIXELHEIGHT_OFFSET UNITYSDK_OFFSET(0x20BE230)
#define FXRENDERTEXTURE_START_OFFSET UNITYSDK_OFFSET(0x20BE240)
#define FXRENDERTEXTURE_APPLYINITIALSCALE_OFFSET UNITYSDK_OFFSET(0x20BE0E0)
#define FXRENDERTEXTURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20BE2A0)
#define FXRENDERTEXTURE_PREPAREDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x20BE050)
#define FXRENDERTEXTURE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20BE270)
#define FXRENDERTEXTURE_RENDER_OFFSET UNITYSDK_OFFSET(0x20BDA90)

	inline static constexpr unsigned int FxRenderTexture_TypeDefinitionIndex = 3625;

	class FxRenderTexture : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* Camera; // 0x18
		CameraFindType* FindCameraMode; // 0x20
		::UnityEngine::Renderer* TargetRenderer; // 0x28
		::System::Int32 TargetMaterialIndex; // 0x30
		::UnityEngine::Material* Material; // 0x38
		::System::String* TexName; // 0x40
		::System::Single TexSize; // 0x48
		::System::Boolean RenderOnUpdate; // 0x4C
		::UnityEngine::Transform* ScaleTransform; // 0x50
		::System::Single ScaleFov; // 0x58
		::System::Single ScaleDistance; // 0x5C
		::System::Single TransformSize; // 0x60
		::System::Boolean DynamicScale; // 0x64
		::UnityEngine::Camera* ScaleCamera; // 0x68
		CameraFindType* FindScaleCameraMode; // 0x70
		::System::Int32 _PixelWidth_k__BackingField; // 0x74
		::System::Int32 _PixelHeight_k__BackingField; // 0x78
		::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* uacData; // 0x80
		::System::Int32 BasicRendererIndex; // 0x0
		::UnityEngine::RenderTexture* renderTexture; // 0x88

		::System::Void set_PixelHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_SET_PIXELHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void FindCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_FINDCAMERA_OFFSET))(nullptr);
		}

		::System::Int32 get_PixelWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_GET_PIXELWIDTH_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_PixelWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_SET_PIXELWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void RefreshTargetMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_REFRESHTARGETMATERIAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshDynamicScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_REFRESHDYNAMICSCALE_OFFSET))(nullptr);
		}

		::System::Void InitScaleTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_INITSCALETRANSFORM_OFFSET))(nullptr);
		}

		::System::Void FindScaleCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_FINDSCALECAMERA_OFFSET))(nullptr);
		}

		::System::Int32 get_PixelHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_GET_PIXELHEIGHT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_START_OFFSET))(nullptr);
		}

		::System::Void ApplyInitialScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_APPLYINITIALSCALE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void PrepareDynamicScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_PREPAREDYNAMICSCALE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Render()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXRENDERTEXTURE_RENDER_OFFSET))(nullptr);
		}

	};

