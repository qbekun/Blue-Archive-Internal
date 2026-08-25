#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Toggle; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETBANNERTEXTURE_OFFSET UNITYSDK_OFFSET(0x9C6ACF0)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETDONTSHOWTOGGLELABEL_OFFSET UNITYSDK_OFFSET(0x9C6AD00)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETONDONTSHOWTOGGLEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9C6AD10)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETWORKONBUTTONVISIBILITY_OFFSET UNITYSDK_OFFSET(0x9C6AD20)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETWORKONBUTTONLABEL_OFFSET UNITYSDK_OFFSET(0x9C6AD30)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETONCLICKWORKONBUTTON_OFFSET UNITYSDK_OFFSET(0x9C6AD40)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x9C6AD50)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETONCLICKBANNER_OFFSET UNITYSDK_OFFSET(0x9C6AD70)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C6AD90)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0x9C6B460)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_UPDATEDONTSHOWTOGGLEDLABEL_OFFSET UNITYSDK_OFFSET(0x9C6B750)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_DESTROYIMAGETEXTURE_OFFSET UNITYSDK_OFFSET(0x9C6B740)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9C6B860)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C6BA60)
#define NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW__CREATESELECTIONGROUP_B__25_0_OFFSET UNITYSDK_OFFSET(0x9C6BAB0)

namespace NPA::Editor::Banner::View
{
	inline static constexpr unsigned int NXPBannerView_TypeDefinitionIndex = 26935;

	class NXPBannerView : public Il2CppObject
	{
	public:
		::System::String* bannerViewPrefabURL; // 0x0
		::System::String* bannerViewWindowBasePath; // 0x0
		::UnityEngine::Texture2D* bannerTexture; // 0x48
		::UnityEngine::Transform* workOnButtonTransform; // 0x50
		::UnityEngine::UI::Toggle* dontShowToggle; // 0x58
		::System::String* dontShowToggleLabel; // 0x60
		Il2CppObject* onDontShowToggleValueChanged; // 0x68
		::System::Boolean workOnButtonVisibility; // 0x70
		::System::String* workOnButtonLabel; // 0x78
		::System::Action* onClickWorkOnButton; // 0x80
		::System::Action* onClickCloseButton; // 0x88
		::System::Action* onClickBanner; // 0x90
		::UnityEngine::UI::Image* bannerImage; // 0x98

		::System::Void SetBannerTexture(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETBANNERTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDontShowToggleLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETDONTSHOWTOGGLELABEL_OFFSET))(str, nullptr);
		}

		::System::Void SetOnDontShowToggleValueChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETONDONTSHOWTOGGLEVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void SetWorkOnButtonVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETWORKONBUTTONVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetWorkOnButtonLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETWORKONBUTTONLABEL_OFFSET))(str, nullptr);
		}

		::System::Void SetOnClickWorkOnButton(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETONCLICKWORKONBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnClickCloseButton(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETONCLICKCLOSEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnClickBanner(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_SETONCLICKBANNER_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void LoadImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_LOADIMAGE_OFFSET))(nullptr);
		}

		::System::Void UpdateDontShowToggledLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_UPDATEDONTSHOWTOGGLEDLABEL_OFFSET))(nullptr);
		}

		::System::Void DestroyImageTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_DESTROYIMAGETEXTURE_OFFSET))(nullptr);
		}

		::System::Void CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CreateSelectionGroup_b__25_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPBANNERVIEW__CREATESELECTIONGROUP_B__25_0_OFFSET))(nullptr);
		}

	};
}

