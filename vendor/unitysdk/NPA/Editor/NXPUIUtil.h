#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class CanvasScaler; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Rect; }

#define NPA_EDITOR_NXPUIUTIL_APPLYUISCALEFACTORTOVIEW_OFFSET UNITYSDK_OFFSET(0x9DA67D0)
#define NPA_EDITOR_NXPUIUTIL_ADJUSTSIZEANDPOSITIONOFBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x9DA68D0)
#define NPA_EDITOR_NXPUIUTIL_LOADSPRITE_OFFSET UNITYSDK_OFFSET(0x9DA6AE0)
#define NPA_EDITOR_NXPUIUTIL_CREATESPRITE_OFFSET UNITYSDK_OFFSET(0x9DA6B50)
#define NPA_EDITOR_NXPUIUTIL_GENERATEQRPIXELS_OFFSET UNITYSDK_OFFSET(0x9DA6B70)
#define NPA_EDITOR_NXPUIUTIL_CREATEQRTEXTURE_OFFSET UNITYSDK_OFFSET(0x9DA6CB0)
#define NPA_EDITOR_NXPUIUTIL_BLENDLOGOONQR_OFFSET UNITYSDK_OFFSET(0x9DA6D40)
#define NPA_EDITOR_NXPUIUTIL_TRUNCATETOUTF8BYTES_OFFSET UNITYSDK_OFFSET(0x9DA7D00)
#define NPA_EDITOR_NXPUIUTIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA7DD0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPUIUtil_TypeDefinitionIndex = 26369;

	class NXPUIUtil : public Il2CppObject
	{
	public:
		::System::Void ApplyUIScaleFactorToView(::UnityEngine::UI::CanvasScaler* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasScaler*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPUIUTIL_APPLYUISCALEFACTORTOVIEW_OFFSET))(arg, arg, nullptr);
		}

		::System::Single AdjustSizeAndPositionOfBannerImage(::UnityEngine::UI::Image* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::RectTransform* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UI::Image*, ::UnityEngine::Vector2*, ::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPUIUTIL_ADJUSTSIZEANDPOSITIONOFBANNERIMAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* LoadSprite(::System::String* str, ::System::String* str)
		{
			return (return (::UnityEngine::Sprite*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPUIUTIL_LOADSPRITE_OFFSET))(str, str, nullptr);
		}

		::UnityEngine::Sprite* CreateSprite(::UnityEngine::Texture2D* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPUIUTIL_CREATESPRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GenerateQRPixels(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Object[]&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPUIUTIL_GENERATEQRPIXELS_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::UnityEngine::Texture2D* CreateQRTexture(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Texture2D*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPUIUTIL_CREATEQRTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Texture2D* BlendLogoOnQR(::UnityEngine::Texture2D* arg, ::UnityEngine::Texture2D* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Texture2D*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPUIUTIL_BLENDLOGOONQR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* TruncateToUtf8Bytes(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPUIUTIL_TRUNCATETOUTF8BYTES_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPUIUTIL_.CTOR_OFFSET))(nullptr);
		}

	};
}

