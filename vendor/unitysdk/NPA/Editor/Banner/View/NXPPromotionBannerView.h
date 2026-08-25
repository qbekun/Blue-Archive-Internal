#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor { class NXPPromotionBannerViewData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Text; }
namespace NPA::Promotion { class NXPToyConditionalBannerOptionMeta; }
namespace UnityEngine { class Transform; }
namespace NPA::Editor { class NXPScreenOrientationType; }

#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SETLANDSCAPEBANNERDATA_OFFSET UNITYSDK_OFFSET(0x9C6BF80)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SETPORTRAITBANNERDATA_OFFSET UNITYSDK_OFFSET(0x9C6BF90)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SETCLICKAREACLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C6BFB0)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SETDISPLAYPROMOTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C6BFD0)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SETTIMERACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C6BFF0)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C6C010)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9C6C920)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_CREATEBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x9C6C110)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_CREATETIMERUI_OFFSET UNITYSDK_OFFSET(0x9C6CAC0)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SHOWBANNER_OFFSET UNITYSDK_OFFSET(0x9C6C770)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SHOWBANNERFRAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9C6CCA0)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_DESTROYIMAGETEXTURE_OFFSET UNITYSDK_OFFSET(0x9C6CD20)
#define NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C6CD70)

namespace NPA::Editor::Banner::View
{
	inline static constexpr unsigned int NXPPromotionBannerView_TypeDefinitionIndex = 26937;

	class NXPPromotionBannerView : public Il2CppObject
	{
	public:
		::System::String* promotionBannerViewPrefabURL; // 0x48
		::System::String* landscapeFrameBasePath; // 0x50
		::System::String* landscapeImageViewPath; // 0x58
		::System::String* portraitFrameBasePath; // 0x60
		::System::String* portraitImageViewPath; // 0x68
		::System::String* promotionBannerTimerPrefabURL; // 0x70
		::System::String* promotionBannerTimerTextPath; // 0x78
		::NPA::Editor::NXPPromotionBannerViewData* landscapeBannerData; // 0x80
		::NPA::Editor::NXPPromotionBannerViewData* portraitBannerData; // 0x88
		Il2CppObject* clickAreaClickCallback; // 0x90
		::System::Action* displayPromotionCallback; // 0x98
		Il2CppObject* setTimerActionCallback; // 0xA0

		::System::Void SetLandscapeBannerData(::NPA::Editor::NXPPromotionBannerViewData* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPPromotionBannerViewData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SETLANDSCAPEBANNERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetPortraitBannerData(::NPA::Editor::NXPPromotionBannerViewData* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPPromotionBannerViewData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SETPORTRAITBANNERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetClickAreaClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SETCLICKAREACLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetDisplayPromotionCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SETDISPLAYPROMOTIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetTimerActionCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SETTIMERACTIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CreateBannerImage(::NPA::Editor::NXPPromotionBannerViewData* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::NPA::Editor::NXPPromotionBannerViewData*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_CREATEBANNERIMAGE_OFFSET))(arg, str, str, nullptr);
		}

		::UnityEngine::UI::Text* CreateTimerUI(::NPA::Promotion::NXPToyConditionalBannerOptionMeta* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::UI::Text*(*)(::NPA::Promotion::NXPToyConditionalBannerOptionMeta*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_CREATETIMERUI_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowBanner(::NPA::Editor::NXPScreenOrientationType* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPScreenOrientationType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SHOWBANNER_OFFSET))(arg, nullptr);
		}

		::System::Void ShowBannerFrameObject(::NPA::Editor::NXPPromotionBannerViewData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPPromotionBannerViewData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_SHOWBANNERFRAMEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DestroyImageTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_DESTROYIMAGETEXTURE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_VIEW_NXPPROMOTIONBANNERVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

