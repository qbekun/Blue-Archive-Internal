#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Component; }
class CameraFindType;
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class RenderTextureFormat; }
namespace UnityEngine { class Texture2D; }

#define RENDERUTILITY_INSTANTIATEMATERIALS_OFFSET UNITYSDK_OFFSET(0x20D6180)
#define RENDERUTILITY_INSTANTIATEMATERIALS_OFFSET UNITYSDK_OFFSET(0x20D6530)
#define RENDERUTILITY_INSTANTIATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x20D6890)
#define RENDERUTILITY_FINDCAMERA_OFFSET UNITYSDK_OFFSET(0x20D5970)
#define RENDERUTILITY_FINDFXCAMERA_OFFSET UNITYSDK_OFFSET(0x20D6A10)
#define RENDERUTILITY_GETFRUSTUMHEIGHT_OFFSET UNITYSDK_OFFSET(0x20D6AB0)
#define RENDERUTILITY_SETCAMERARENDERPIPE_OFFSET UNITYSDK_OFFSET(0x20D01E0)
#define RENDERUTILITY_GETCAMERARENDERPIPEINDEX_OFFSET UNITYSDK_OFFSET(0x20CFB30)
#define RENDERUTILITY_CREATERTFOROPAQUECAMERA_OFFSET UNITYSDK_OFFSET(0x20D6B40)
#define RENDERUTILITY_RESIZETEXTUREBILINEAR_OFFSET UNITYSDK_OFFSET(0x20D6BE0)

	inline static constexpr unsigned int RenderUtility_TypeDefinitionIndex = 3729;

	class RenderUtility : public Il2CppObject
	{
	public:
		::System::Int32 StandardRendererIndex; // 0x0
		::System::Int32 CafeRendererIndex; // 0x0
		::System::Int32 HexaEditorRendererIndex; // 0x0
		::System::Int32 BasicRendererIndex; // 0x0
		::System::Int32 OptionlessRendererIndex; // 0x0
		::System::Int32 PixelizedRendererIndex; // 0x0
		::System::Int32 UnderCoverRendererIndex; // 0x0
		::System::Int32 SolidColorOutlineRendererIndex; // 0x0
		::System::Int32 PortalRendererIndex; // 0x0
		::System::Int32 GrabpassRendererIndex; // 0x0
		::System::Int32 GlitchRendererIndex; // 0x0

		::Il2CppArray<::System::Object*>* InstantiateMaterials(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERUTILITY_INSTANTIATEMATERIALS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* InstantiateMaterials(::UnityEngine::Renderer* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Renderer*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERUTILITY_INSTANTIATEMATERIALS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* InstantiateMaterial(::UnityEngine::Renderer* arg)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Renderer*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERUTILITY_INSTANTIATEMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Camera* FindCamera(::UnityEngine::Component* arg, CameraFindType* arg2)
		{
			return ((::UnityEngine::Camera*(*)(::UnityEngine::Component*, CameraFindType*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERUTILITY_FINDCAMERA_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Camera* FindFxCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERUTILITY_FINDFXCAMERA_OFFSET))(nullptr);
		}

		::System::Single GetFrustumHeight(::UnityEngine::Camera* arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::UnityEngine::Camera*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RENDERUTILITY_GETFRUSTUMHEIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCameraRenderPipe(::UnityEngine::Camera* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RENDERUTILITY_SETCAMERARENDERPIPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetCameraRenderPipeIndex(::UnityEngine::Camera* arg)
		{
			return ((::System::Int32(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERUTILITY_GETCAMERARENDERPIPEINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTexture* CreateRTForOpaqueCamera(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::UnityEngine::RenderTextureFormat* arg4)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERUTILITY_CREATERTFOROPAQUECAMERA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ResizeTextureBilinear(::UnityEngine::Texture2D* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RENDERUTILITY_RESIZETEXTUREBILINEAR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

