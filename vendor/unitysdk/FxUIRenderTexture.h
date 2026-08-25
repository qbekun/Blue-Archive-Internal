#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
class CameraFindType;
namespace UnityEngine { class Renderer; }
class BloomOverride;
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }

#define FXUIRENDERTEXTURE_DESTROYRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x20BF700)
#define FXUIRENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BF7A0)
#define FXUIRENDERTEXTURE_RENDER_OFFSET UNITYSDK_OFFSET(0x20BF810)
#define FXUIRENDERTEXTURE_START_OFFSET UNITYSDK_OFFSET(0x20BFC10)
#define FXUIRENDERTEXTURE_CLEARRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x20BFC30)
#define FXUIRENDERTEXTURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20BFCA0)
#define FXUIRENDERTEXTURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20BFF20)
#define FXUIRENDERTEXTURE_SETCULLINGMASKFORCAPTURE_OFFSET UNITYSDK_OFFSET(0x20BFAB0)
#define FXUIRENDERTEXTURE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20BFC20)
#define FXUIRENDERTEXTURE_ONSCREENRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x20BFF30)
#define FXUIRENDERTEXTURE_GETTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0x20C0340)
#define FXUIRENDERTEXTURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20C03E0)
#define FXUIRENDERTEXTURE_SETRENDERTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x20C0000)

	inline static constexpr unsigned int FxUIRenderTexture_TypeDefinitionIndex = 3631;

	class FxUIRenderTexture : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* Camera; // 0x18
		CameraFindType* FindCameraMode; // 0x20
		::UnityEngine::Renderer* TargetRenderer; // 0x28
		::System::Int32 TargetMaterialIndex; // 0x30
		::System::String* TexName; // 0x38
		::System::Single TexSize; // 0x40
		::System::Boolean RenderUIOnly; // 0x44
		::System::Boolean IncludeUIAlwaysVisibleLayer; // 0x45
		::System::Boolean RenderOnUpdate; // 0x46
		BloomOverride* bloomOverride; // 0x48
		::UnityEngine::Material* targetMaterial; // 0x68
		::UnityEngine::RenderTexture* renderTexture; // 0x70
		::System::Boolean registeredResolutionCallback; // 0x78

		::System::Void DestroyRenderTexture(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_DESTROYRENDERTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Render()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_RENDER_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_START_OFFSET))(nullptr);
		}

		::System::Void ClearRenderTexture(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_CLEARRENDERTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetCullingMaskForCapture(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_SETCULLINGMASKFORCAPTURE_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnScreenResolutionChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_ONSCREENRESOLUTIONCHANGED_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetTargetMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_GETTARGETMATERIAL_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetRenderTextureSize(::System::Single arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FXUIRENDERTEXTURE_SETRENDERTEXTURESIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

