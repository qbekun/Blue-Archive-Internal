#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NPPromotionPrefCtl; }
namespace NPA::Editor { class NXPPromotionBannerViewData; }
namespace NPA::Editor::Banner::View { class NXPPromotionBannerView; }
namespace NPA::Editor { class NXPPromotionBannerScreenChecker; }
namespace NPA::Editor { class NXPScreenOrientationType; }
namespace NPA::Promotion { class NXPToyConditionalBannerButton; }
namespace NPA::Promotion { class NXPToyBannerPromotion; }
namespace NPA::SimpleJSON { class JSONClass; }
namespace UnityEngine::UI { class Text; }

#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C68EE0)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_SETSHOWCONTENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C69100)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C69160)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_ONCLICKBANNERBUTTON_OFFSET UNITYSDK_OFFSET(0x9C692C0)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_GETDURATIONTIMESTRING_OFFSET UNITYSDK_OFFSET(0x9C69D40)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_DISMISSDIALOG_OFFSET UNITYSDK_OFFSET(0x9C69BC0)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_DESTROYTIMER_OFFSET UNITYSDK_OFFSET(0x9C69E70)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9C69EB0)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_CLOSEALL_OFFSET UNITYSDK_OFFSET(0x9C69C30)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_GETCURRENTBANNERPROMOTIONDATA_OFFSET UNITYSDK_OFFSET(0x9C6A030)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_SENDPROMOTIONBANNERLOG_OFFSET UNITYSDK_OFFSET(0x9C69A10)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_SENDPROMOTIONBANNERCLOSELOG_OFFSET UNITYSDK_OFFSET(0x9C69ED0)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_GETDEFAULTBANNERLOGOBJECT_OFFSET UNITYSDK_OFFSET(0x9C6A060)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_GETLINKVALUE_OFFSET UNITYSDK_OFFSET(0x9C6A3C0)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_GETLINKTYPE_OFFSET UNITYSDK_OFFSET(0x9C6A230)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG__.CTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x9C6A640)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG__SETCALLBACK_B__20_0_OFFSET UNITYSDK_OFFSET(0x9C6A670)
#define NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG__SETCALLBACK_B__20_1_OFFSET UNITYSDK_OFFSET(0x9C6A750)

namespace NPA::Editor::Banner
{
	inline static constexpr unsigned int NXPPromotionBannerDialog_TypeDefinitionIndex = 26933;

	class NXPPromotionBannerDialog : public Il2CppObject
	{
	public:
		::System::Int32 TOUCH_EVENT_CLOSE; // 0x0
		::System::Int32 TOUCH_EVENT_KEEP; // 0x0
		::System::Int32 Second; // 0x0
		::System::Int32 Minute; // 0x0
		::System::Int32 Hour; // 0x0
		::System::Int64 MaximumDisplayTime; // 0x0
		::NPA::Editor::NPPromotionPrefCtl* prefCtl; // 0x30
		::System::String* placementId; // 0x38
		::System::Boolean isWebViewShowing; // 0x40
		::NPA::Editor::NXPPromotionBannerViewData* landscapeViewData; // 0x48
		::NPA::Editor::NXPPromotionBannerViewData* portraitViewData; // 0x50
		Il2CppObject* displayPromotionCallback; // 0x58
		Il2CppObject* clickPromotionCallback; // 0x60
		::System::Action* dismissCallback; // 0x68
		::System::Action* closeCallback; // 0x70
		::NPA::Editor::Banner::View::NXPPromotionBannerView* promotionBannerView; // 0x78
		::NPA::Editor::NXPPromotionBannerScreenChecker* screenChecker; // 0x80
		::NPA::Editor::NXPScreenOrientationType* currentOrientationType; // 0x88

		::System::Void .ctor(::System::String* str, ::NPA::Editor::NXPPromotionBannerViewData* arg, ::NPA::Editor::NXPPromotionBannerViewData* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::NXPPromotionBannerViewData*, ::NPA::Editor::NXPPromotionBannerViewData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SetShowContentCallback(Il2CppObject* arg, Il2CppObject* arg, ::System::Action* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_SETSHOWCONTENTCALLBACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void OnClickBannerButton(::System::Int32 arg, ::System::Int32 arg, ::NPA::Promotion::NXPToyConditionalBannerButton* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::NPA::Promotion::NXPToyConditionalBannerButton*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_ONCLICKBANNERBUTTON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetDurationTimeString(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_GETDURATIONTIMESTRING_OFFSET))(arg, nullptr);
		}

		::System::Void DismissDialog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_DISMISSDIALOG_OFFSET))(nullptr);
		}

		::System::Void DestroyTimer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_DESTROYTIMER_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void CloseAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_CLOSEALL_OFFSET))(nullptr);
		}

		::NPA::Promotion::NXPToyBannerPromotion* GetCurrentBannerPromotionData()
		{
			return (return (::NPA::Promotion::NXPToyBannerPromotion*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_GETCURRENTBANNERPROMOTIONDATA_OFFSET))(nullptr);
		}

		::System::Void SendPromotionBannerLog(::NPA::Promotion::NXPToyConditionalBannerButton* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyConditionalBannerButton*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_SENDPROMOTIONBANNERLOG_OFFSET))(arg, nullptr);
		}

		::System::Void SendPromotionBannerCloseLog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_SENDPROMOTIONBANNERCLOSELOG_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONClass* GetDefaultBannerLogObject(::NPA::Promotion::NXPToyBannerPromotion* arg)
		{
			return (return (::NPA::SimpleJSON::JSONClass*(*)(::NPA::Promotion::NXPToyBannerPromotion*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_GETDEFAULTBANNERLOGOBJECT_OFFSET))(arg, nullptr);
		}

		::System::String* GetLinkValue(::NPA::Promotion::NXPToyConditionalBannerButton* arg)
		{
			return (return (::System::String*(*)(::NPA::Promotion::NXPToyConditionalBannerButton*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_GETLINKVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* GetLinkType(::NPA::Promotion::NXPToyConditionalBannerButton* arg)
		{
			return (return (::System::String*(*)(::NPA::Promotion::NXPToyConditionalBannerButton*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG_GETLINKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void _.ctor_b__18_0(::NPA::Editor::NXPScreenOrientationType* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPScreenOrientationType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG__.CTOR_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetCallback_b__20_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG__SETCALLBACK_B__20_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__20_1(::System::Timers::Timer* arg, ::System::Int64 arg, ::UnityEngine::UI::Text* arg)
		{
			((::System::Void(*)(::System::Timers::Timer*, ::System::Int64, ::UnityEngine::UI::Text*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPPROMOTIONBANNERDIALOG__SETCALLBACK_B__20_1_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

