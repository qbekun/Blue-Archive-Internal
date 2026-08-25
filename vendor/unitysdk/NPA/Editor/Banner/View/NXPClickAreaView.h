#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Promotion { class NXPToyConditionalBannerButton; }
namespace NPA::Editor::Banner { class NXPClickArea; }
namespace UnityEngine { class Transform; }

#define NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETBANNERID_OFFSET UNITYSDK_OFFSET(0x9C6BCA0)
#define NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETTOUCHEVENT_OFFSET UNITYSDK_OFFSET(0x9C6BCB0)
#define NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETBANNERBUTTON_OFFSET UNITYSDK_OFFSET(0x9C6BCC0)
#define NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETCLICKAREA_OFFSET UNITYSDK_OFFSET(0x9C6BCD0)
#define NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETPARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9C6BCE0)
#define NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C6BCF0)
#define NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C6BD00)
#define NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C6BEE0)
#define NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW__LOAD_B__13_0_OFFSET UNITYSDK_OFFSET(0x9C6BF50)

namespace NPA::Editor::Banner::View
{
	inline static constexpr unsigned int NXPClickAreaView_TypeDefinitionIndex = 26936;

	class NXPClickAreaView : public Il2CppObject
	{
	public:
		::System::String* clickAreaViewPrefabURL; // 0x48
		::System::Int32 bannerId; // 0x50
		::System::Int32 touchEvent; // 0x54
		::NPA::Promotion::NXPToyConditionalBannerButton* bannerButton; // 0x58
		::NPA::Editor::Banner::NXPClickArea* clickArea; // 0x60
		::UnityEngine::Transform* parerntTransform; // 0x68
		Il2CppObject* clickCallback; // 0x70

		::System::Void SetBannerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETBANNERID_OFFSET))(arg, nullptr);
		}

		::System::Void SetTouchEvent(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETTOUCHEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetBannerButton(::NPA::Promotion::NXPToyConditionalBannerButton* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyConditionalBannerButton*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETBANNERBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetClickArea(::NPA::Editor::Banner::NXPClickArea* arg)
		{
			((::System::Void(*)(::NPA::Editor::Banner::NXPClickArea*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETCLICKAREA_OFFSET))(arg, nullptr);
		}

		::System::Void SetParentTransform(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETPARENTTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void SetClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_SETCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Load_b__13_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPCLICKAREAVIEW__LOAD_B__13_0_OFFSET))(nullptr);
		}

	};
}

