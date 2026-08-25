#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Promotion { class NXBannerManager; }
namespace NPA::Editor { class NXPToyPrefs; }
namespace NPA::Editor::Banner { class NXPClosingBannerDialog; }
namespace NPA::Promotion { class NXPToyBanner; }
namespace NPA::Promotion { class NXPToyBannerCommunity; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class RectTransform; }

#define NPA_EDITOR_PROMOTION_NXBANNERMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C09A50)
#define NPA_EDITOR_PROMOTION_NXBANNERMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C09B90)
#define NPA_EDITOR_PROMOTION_NXBANNERMANAGER_INCRBANNERCLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x9C09DB0)
#define NPA_EDITOR_PROMOTION_NXBANNERMANAGER_CLICKCLOSINGBANNER_OFFSET UNITYSDK_OFFSET(0x9C09E60)
#define NPA_EDITOR_PROMOTION_NXBANNERMANAGER_HANDLEENDINGBANNERTOCOMMUNITY_OFFSET UNITYSDK_OFFSET(0x9C0A0A0)
#define NPA_EDITOR_PROMOTION_NXBANNERMANAGER_HANDLECLOSINGBANNERCLICK_OFFSET UNITYSDK_OFFSET(0x9C09F40)
#define NPA_EDITOR_PROMOTION_NXBANNERMANAGER_SHOWENDINGBANNER_OFFSET UNITYSDK_OFFSET(0x9C0A370)
#define NPA_EDITOR_PROMOTION_NXBANNERMANAGER_ADJUSTSIZEANDPOSITIONOFBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x9C0A490)
#define NPA_EDITOR_PROMOTION_NXBANNERMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C0A6A0)

namespace NPA::Editor::Promotion
{
	inline static constexpr unsigned int NXBannerManager_TypeDefinitionIndex = 26566;

	class NXBannerManager : public Il2CppObject
	{
	public:
		::System::Int32 REQ_ENDINGBANNER_CLICK_IMG; // 0x0
		::System::Int32 REQ_ENDINGBANNER_CLICK_BTN; // 0x0
		::System::Int32 REQ_ENDINGBANNER_CLICK_END; // 0x0
		::System::Int32 REQ_ENDINGBANNER_DISMISS; // 0x0
		::System::Int32 REQ_BANNER_CLICK_IMG; // 0x0
		::System::Int32 REQ_BANNER_CLICK_BTN; // 0x4
		::System::String* BANNER_GROUPCODE_STARTING_BANNER; // 0x8
		::System::String* BANNER_GROUPCODE_ENDING_BANNER; // 0x10
		::NPA::Editor::Promotion::NXBannerManager* instance; // 0x18
		::System::Object* syncRoot; // 0x20
		::NPA::Editor::NXPToyPrefs* commonPrefCtl; // 0x10
		Il2CppObject* clickAction; // 0x18
		::System::Action* dismissAction; // 0x20
		EndingBannerAction* endingBannerListener; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PROMOTION_NXBANNERMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Promotion::NXBannerManager* get_Instance()
		{
			return (return (::NPA::Editor::Promotion::NXBannerManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PROMOTION_NXBANNERMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void IncrBannerClickCount(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PROMOTION_NXBANNERMANAGER_INCRBANNERCLICKCOUNT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ClickClosingBanner(::NPA::Editor::Banner::NXPClosingBannerDialog* arg, ::NPA::Promotion::NXPToyBanner* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::NPA::Editor::Banner::NXPClosingBannerDialog*, ::NPA::Promotion::NXPToyBanner*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PROMOTION_NXBANNERMANAGER_CLICKCLOSINGBANNER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void HandleEndingBannerToCommunity(::NPA::Editor::Banner::NXPClosingBannerDialog* arg, ::NPA::Promotion::NXPToyBannerCommunity* arg)
		{
			((::System::Void(*)(::NPA::Editor::Banner::NXPClosingBannerDialog*, ::NPA::Promotion::NXPToyBannerCommunity*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PROMOTION_NXBANNERMANAGER_HANDLEENDINGBANNERTOCOMMUNITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandleClosingBannerClick(::NPA::Editor::Banner::NXPClosingBannerDialog* arg, ::NPA::Promotion::NXPToyBanner* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::NPA::Editor::Banner::NXPClosingBannerDialog*, ::NPA::Promotion::NXPToyBanner*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PROMOTION_NXBANNERMANAGER_HANDLECLOSINGBANNERCLICK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowEndingBanner(Il2CppObject* arg, Il2CppObject* arg, ::System::Action* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PROMOTION_NXBANNERMANAGER_SHOWENDINGBANNER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single AdjustSizeAndPositionOfBannerImage(::UnityEngine::UI::Image* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::RectTransform* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UI::Image*, ::UnityEngine::Vector2*, ::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PROMOTION_NXBANNERMANAGER_ADJUSTSIZEANDPOSITIONOFBANNERIMAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PROMOTION_NXBANNERMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

