#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPPromotionBannerViewData; }
namespace NPA::Promotion { class NXPToyBannerPromotion; }
namespace NPA::Editor { class NPPromotionPrefCtl; }
namespace NPA::Editor::Banner { class NXPPromotionBannerDialog; }

#define NPA_EDITOR_NXPPROMOTIONBANNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D86960)
#define NPA_EDITOR_NXPPROMOTIONBANNER_DOWNLOADBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x9D86C20)
#define NPA_EDITOR_NXPPROMOTIONBANNER_CLOSEPROMOTION_OFFSET UNITYSDK_OFFSET(0x9D86F80)
#define NPA_EDITOR_NXPPROMOTIONBANNER_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0x9D86C40)
#define NPA_EDITOR_NXPPROMOTIONBANNER_SHOWBANNERDIALOG_OFFSET UNITYSDK_OFFSET(0x9D86FA0)
#define NPA_EDITOR_NXPPROMOTIONBANNER_ISCONTENTREADY_OFFSET UNITYSDK_OFFSET(0x9D87240)
#define NPA_EDITOR_NXPPROMOTIONBANNER_REMOVEBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x9D87250)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPPromotionBanner_TypeDefinitionIndex = 26280;

	class NXPPromotionBanner : public Il2CppObject
	{
	public:
		::System::Int32 TOUCH_EVENT_CLOSE; // 0x0
		::System::Int32 TOUCH_EVENT_KEEP; // 0x0
		::System::Int32 UNLIMITED; // 0x0
		::System::Boolean isContentReady; // 0x10
		::System::String* placementId; // 0x18
		::NPA::Editor::NXPPromotionBannerViewData* landscapeViewData; // 0x20
		::NPA::Editor::NXPPromotionBannerViewData* portraitViewData; // 0x28
		::NPA::Promotion::NXPToyBannerPromotion* landscapeBannerData; // 0x30
		::NPA::Promotion::NXPToyBannerPromotion* portraitBannerData; // 0x38
		::NPA::Editor::NPPromotionPrefCtl* prefCtl; // 0x40
		Il2CppObject* imageURLQueue; // 0x48
		Il2CppObject* loadedImages; // 0x50
		::NPA::Editor::Banner::NXPPromotionBannerDialog* currentPromotionBannerDialog; // 0x58

		::System::Void .ctor(::System::String* str, ::System::DateTime* arg, ::NPA::Promotion::NXPToyBannerPromotion* arg, ::NPA::Promotion::NXPToyBannerPromotion* arg)
		{
			((::System::Void(*)(::System::String*, ::System::DateTime*, ::NPA::Promotion::NXPToyBannerPromotion*, ::NPA::Promotion::NXPToyBannerPromotion*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNER_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void DownloadBannerImage(::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNER_DOWNLOADBANNERIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClosePromotion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNER_CLOSEPROMOTION_OFFSET))(nullptr);
		}

		::System::Void LoadImage(Il2CppObject* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNER_LOADIMAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowBannerDialog(Il2CppObject* arg, ::System::Action* arg, Il2CppObject* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNER_SHOWBANNERDIALOG_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsContentReady()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNER_ISCONTENTREADY_OFFSET))(nullptr);
		}

		::System::Void RemoveBannerImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNER_REMOVEBANNERIMAGE_OFFSET))(nullptr);
		}

	};
}

