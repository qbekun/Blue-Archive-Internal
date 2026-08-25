#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class UISprite;
namespace UnityEngine { class GameObject; }
class OkCancelTypeMember;
namespace UnityEngine { class Color32; }
namespace UnityEngine { class BoxCollider; }
class UIToggle;
class UIPopup_Maintenance;
class MessagePopupPayload;
namespace MX::Data::Excel { class MessagePopupExcel; }
namespace FlatData { class MessagePopupButtonType; }
class EventDelegate;

#define UIPOPUP_SYSTEM_GET_IGNORESETPANELDEPTH_OFFSET UNITYSDK_OFFSET(0x2776360)
#define UIPOPUP_SYSTEM_GET_TWOBUTTONROOT_OFFSET UNITYSDK_OFFSET(0x2776370)
#define UIPOPUP_SYSTEM_GET_OKBUTTON_OFFSET UNITYSDK_OFFSET(0x27763B0)
#define UIPOPUP_SYSTEM_GET_OKBUTTONLABEL_OFFSET UNITYSDK_OFFSET(0x27763F0)
#define UIPOPUP_SYSTEM_GET_OKBUTTONSPR_OFFSET UNITYSDK_OFFSET(0x2776430)
#define UIPOPUP_SYSTEM_GET_CANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x2776470)
#define UIPOPUP_SYSTEM_GET_CANCELBUTTONLABEL_OFFSET UNITYSDK_OFFSET(0x27764B0)
#define UIPOPUP_SYSTEM_GET_CANCELBUTTONSPR_OFFSET UNITYSDK_OFFSET(0x27764F0)
#define UIPOPUP_SYSTEM_GET_ISQUITPOPUP_OFFSET UNITYSDK_OFFSET(0x2776530)
#define UIPOPUP_SYSTEM_GET_ISTUTORIALPOPUP_OFFSET UNITYSDK_OFFSET(0x2776540)
#define UIPOPUP_SYSTEM_SET_ISTUTORIALPOPUP_OFFSET UNITYSDK_OFFSET(0x2776550)
#define UIPOPUP_SYSTEM_GET_NOMOREVIEWINGTODAY_OFFSET UNITYSDK_OFFSET(0x2776560)
#define UIPOPUP_SYSTEM_GETCOMMANDSTRING_OFFSET UNITYSDK_OFFSET(0x2776590)
#define UIPOPUP_SYSTEM_SETCOMMANDSTRING_OFFSET UNITYSDK_OFFSET(0x27765B0)
#define UIPOPUP_SYSTEM_GETTARGETUINAME_OFFSET UNITYSDK_OFFSET(0x27765D0)
#define UIPOPUP_SYSTEM_SETTARGETUINAME_OFFSET UNITYSDK_OFFSET(0x27765F0)
#define UIPOPUP_SYSTEM_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x2776610)
#define UIPOPUP_SYSTEM_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x2776630)
#define UIPOPUP_SYSTEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2776650)
#define UIPOPUP_SYSTEM_ONCHANGNOMOREVIEWINGTODAYTOGGLE_OFFSET UNITYSDK_OFFSET(0x2776C50)
#define UIPOPUP_SYSTEM_ONCONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x2776D40)
#define UIPOPUP_SYSTEM_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x27770C0)
#define UIPOPUP_SYSTEM_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2777400)
#define UIPOPUP_SYSTEM_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2777490)
#define UIPOPUP_SYSTEM_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2777600)
#define UIPOPUP_SYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2777860)
#define UIPOPUP_SYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2777D30)
#define UIPOPUP_SYSTEM_INITIALIZEWITHKEY_OFFSET UNITYSDK_OFFSET(0x2777E40)
#define UIPOPUP_SYSTEM_INITIALIZEWITHKEY_OFFSET UNITYSDK_OFFSET(0x2777F60)
#define UIPOPUP_SYSTEM_INITIALIZEWITHKEY_OFFSET UNITYSDK_OFFSET(0x2778080)
#define UIPOPUP_SYSTEM_INITIALIZEWITHKEYWITHSAFE_OFFSET UNITYSDK_OFFSET(0x27781B0)
#define UIPOPUP_SYSTEM_INITIALIZEINBUILDWITHKEY_OFFSET UNITYSDK_OFFSET(0x27783A0)
#define UIPOPUP_SYSTEM_INITIALIZEINBUILD_OFFSET UNITYSDK_OFFSET(0x27784D0)
#define UIPOPUP_SYSTEM_INITIALIZEOKCANCEL_OFFSET UNITYSDK_OFFSET(0x27785E0)
#define UIPOPUP_SYSTEM_INITIALIZEOKCANCEL_OFFSET UNITYSDK_OFFSET(0x27788B0)
#define UIPOPUP_SYSTEM_INITIALIZEOKCANCELWITHKEY_OFFSET UNITYSDK_OFFSET(0x2778A10)
#define UIPOPUP_SYSTEM_INITIALIZEOKCANCELWITHKEY_OFFSET UNITYSDK_OFFSET(0x2778B70)
#define UIPOPUP_SYSTEM_INITIALIZEOKCANCELWITHKEY_OFFSET UNITYSDK_OFFSET(0x2778CE0)
#define UIPOPUP_SYSTEM_INITIALIZEOKCANCELWITHKEY_OFFSET UNITYSDK_OFFSET(0x2778E60)
#define UIPOPUP_SYSTEM_INITIALIZEOKCANCELWITHKEY_OFFSET UNITYSDK_OFFSET(0x2778FE0)
#define UIPOPUP_SYSTEM_INITIALIZEQUITPOPUP_OFFSET UNITYSDK_OFFSET(0x2779160)
#define UIPOPUP_SYSTEM_INITIALIZEOKCANCELINBUILDWITHKEY_OFFSET UNITYSDK_OFFSET(0x2779290)
#define UIPOPUP_SYSTEM_INITIALIZEOKCANCELINBUILD_OFFSET UNITYSDK_OFFSET(0x2779410)
#define UIPOPUP_SYSTEM_INITIALIZEQUITPOPUP_PCXBUTTON_OFFSET UNITYSDK_OFFSET(0x2779570)
#define UIPOPUP_SYSTEM_CHANGEOKBUTTONYELLOWTYPE_OFFSET UNITYSDK_OFFSET(0x2779810)
#define UIPOPUP_SYSTEM_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2779870)
#define UIPOPUP_SYSTEM_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2779970)
#define UIPOPUP_SYSTEM_INITIALIZEBYMESSAGEPOPUP_OFFSET UNITYSDK_OFFSET(0x2779A70)
#define UIPOPUP_SYSTEM_INITIALIZEBYMESSAGEPOPUP_OFFSET UNITYSDK_OFFSET(0x277A3B0)
#define UIPOPUP_SYSTEM_INITIALIZEMAINTENANCE_OFFSET UNITYSDK_OFFSET(0x277A400)
#define UIPOPUP_SYSTEM_SETXBUTTONTOCLOSE_OFFSET UNITYSDK_OFFSET(0x277A6F0)
#define UIPOPUP_SYSTEM_SETIMAGE_OFFSET UNITYSDK_OFFSET(0x277A220)
#define UIPOPUP_SYSTEM_SETSUBTITLE_OFFSET UNITYSDK_OFFSET(0x277A830)
#define UIPOPUP_SYSTEM_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x277A990)
#define UIPOPUP_SYSTEM_LOADIMAGES_OFFSET UNITYSDK_OFFSET(0x277A790)
#define UIPOPUP_SYSTEM_SETBUTTONCOLOR_OFFSET UNITYSDK_OFFSET(0x277A090)
#define UIPOPUP_SYSTEM_SETDEFAULTPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x2777C50)
#define UIPOPUP_SYSTEM_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x277ADE0)
#define UIPOPUP_SYSTEM_SETXBUTTONEVENT_OFFSET UNITYSDK_OFFSET(0x2777B10)
#define UIPOPUP_SYSTEM_SETCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x277B310)
#define UIPOPUP_SYSTEM_HANDLEPARAMETER_OFFSET UNITYSDK_OFFSET(0x277B1F0)
#define UIPOPUP_SYSTEM_HANDLECOMMAND_OFFSET UNITYSDK_OFFSET(0x2776E00)
#define UIPOPUP_SYSTEM_HANDLECLOSEUI_OFFSET UNITYSDK_OFFSET(0x277B420)
#define UIPOPUP_SYSTEM_HANDLEOPENUI_OFFSET UNITYSDK_OFFSET(0x277B540)
#define UIPOPUP_SYSTEM_HANDLEREOPENUI_OFFSET UNITYSDK_OFFSET(0x277B6B0)
#define UIPOPUP_SYSTEM_HANDLELOGOUT_OFFSET UNITYSDK_OFFSET(0x277B380)
#define UIPOPUP_SYSTEM_HANDLEGOTOLOBBY_OFFSET UNITYSDK_OFFSET(0x277B7E0)
#define UIPOPUP_SYSTEM_HANDLEONBACK_OFFSET UNITYSDK_OFFSET(0x277B870)
#define UIPOPUP_SYSTEM_SETMESSAGELABEL_OFFSET UNITYSDK_OFFSET(0x277B930)
#define UIPOPUP_SYSTEM_GETMESSAGETEXT_OFFSET UNITYSDK_OFFSET(0x277BA00)
#define UIPOPUP_SYSTEM_SHOWNOMOREVIEWINGTODAYTOGGLE_OFFSET UNITYSDK_OFFSET(0x277BA40)
#define UIPOPUP_SYSTEM_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x277BB70)
#define UIPOPUP_SYSTEM_RESETBUTTON_OFFSET UNITYSDK_OFFSET(0x2777810)
#define UIPOPUP_SYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x277BBE0)
#define UIPOPUP_SYSTEM___N__0_OFFSET UNITYSDK_OFFSET(0x277BCF0)

	inline static constexpr unsigned int UIPopup_System_TypeDefinitionIndex = 7371;

	class UIPopup_System : public Il2CppObject
	{
	public:
		UILabel* TitleLabel; // 0xD8
		::Il2CppArray<::System::Object*>* SubTitleLabels; // 0xE0
		::Il2CppArray<::System::Object*>* MessageLabels; // 0xE8
		::Il2CppArray<::System::Object*>* conditionPanels; // 0xF0
		::Il2CppArray<::System::Object*>* Images; // 0xF8
		MXButton* ConfirmButton; // 0x100
		UILabel* ButtonLabel; // 0x108
		UISprite* ConfirmButtonSpr; // 0x110
		::UnityEngine::GameObject* ContentsLockObject; // 0x118
		OkCancelTypeMember* OkCancelMembers; // 0x120
		OkCancelTypeMember* OkCancelMembers_YellowType; // 0x128
		MXButton* XButton; // 0x130
		::System::Boolean isOkCancelYellowType; // 0x138
		::Il2CppArray<::System::Object*>* PopupTypes; // 0x140
		::Il2CppArray<::System::Object*>* PopupBtns; // 0x148
		::UnityEngine::Color32* ButtonColor_Accept; // 0x150
		::UnityEngine::Color32* ButtonColor_Cancel; // 0x154
		::UnityEngine::Color32* LabelColor_Accept; // 0x158
		::UnityEngine::Color32* LabelColor_Cancel; // 0x15C
		::UnityEngine::BoxCollider* BlackBgCollider; // 0x160
		UIToggle* noMoreViewingTodayToggle; // 0x168
		::UnityEngine::GameObject* toggleOnRoot; // 0x170
		UILabel* toggleOnLabel; // 0x178
		::UnityEngine::GameObject* toggleOffRoot; // 0x180
		UILabel* toggleOffLabel; // 0x188
		UIPopup_Maintenance* maintenance; // 0x190
		::System::Boolean isQuitPopup; // 0x198
		::System::Boolean _IsTutorialPopup_k__BackingField; // 0x199
		::System::Action* okAction; // 0x1A0
		::System::Action* cancelAction; // 0x1A8
		::System::String* okCommand; // 0x1B0
		::System::String* okTargetUIName; // 0x1B8
		::System::String* okMethod; // 0x1C0
		::System::String* cancelCommand; // 0x1C8
		::System::String* cancelTargetUIName; // 0x1D0
		::System::String* cancelMethod; // 0x1D8

		::System::Boolean get_IgnoreSetPanelDepth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GET_IGNORESETPANELDEPTH_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_TwoButtonRoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GET_TWOBUTTONROOT_OFFSET))(nullptr);
		}

		MXButton* get_OkButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GET_OKBUTTON_OFFSET))(nullptr);
		}

		UILabel* get_OkButtonLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GET_OKBUTTONLABEL_OFFSET))(nullptr);
		}

		UISprite* get_OkButtonSpr()
		{
			return ((UISprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GET_OKBUTTONSPR_OFFSET))(nullptr);
		}

		MXButton* get_CancelButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GET_CANCELBUTTON_OFFSET))(nullptr);
		}

		UILabel* get_CancelButtonLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GET_CANCELBUTTONLABEL_OFFSET))(nullptr);
		}

		UISprite* get_CancelButtonSpr()
		{
			return ((UISprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GET_CANCELBUTTONSPR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsQuitPopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GET_ISQUITPOPUP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTutorialPopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GET_ISTUTORIALPOPUP_OFFSET))(nullptr);
		}

		::System::Void set_IsTutorialPopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SET_ISTUTORIALPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NoMoreViewingToday()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GET_NOMOREVIEWINGTODAY_OFFSET))(nullptr);
		}

		::System::String* GetCommandString(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GETCOMMANDSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommandString(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETCOMMANDSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetTargetUIName(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GETTARGETUINAME_OFFSET))(arg, nullptr);
		}

		::System::Void SetTargetUIName(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETTARGETUINAME_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetMethod(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GETMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void SetMethod(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETMETHOD_OFFSET))(arg, str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnChangNoMoreViewingTodayToggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_ONCHANGNOMOREVIEWINGTODAYTOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnConfirmButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_ONCONFIRMBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZE_OFFSET))(str, str2, str3, arg, nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZE_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitializeWithKey(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEWITHKEY_OFFSET))(str, str2, str3, arg, nullptr);
		}

		::System::Void InitializeWithKey(::System::UInt32 arg, ::System::UInt32 arg2, ::System::UInt32 arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEWITHKEY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InitializeWithKey(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEWITHKEY_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitializeWithKeyWithSafe(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEWITHKEYWITHSAFE_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitializeInBuildWithKey(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEINBUILDWITHKEY_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitializeInBuild(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEINBUILD_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitializeOkCancel(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::String* str4, ::System::Action* arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEOKCANCEL_OFFSET))(str, str2, str3, str4, arg, arg2, arg3, nullptr);
		}

		::System::Void InitializeOkCancel(::System::String* str, ::System::Action* arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEOKCANCEL_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void InitializeOkCancelWithKey(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::String* str4, ::System::Action* arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEOKCANCELWITHKEY_OFFSET))(str, str2, str3, str4, arg, arg2, arg3, nullptr);
		}

		::System::Void InitializeOkCancelWithKey(::System::UInt32 arg, ::System::UInt32 arg2, ::System::UInt32 arg3, ::System::UInt32 arg4, ::System::Action* arg5, ::System::Action* arg6)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEOKCANCELWITHKEY_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void InitializeOkCancelWithKey(::System::UInt32 arg, ::System::UInt32 arg2, ::System::Action* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEOKCANCELWITHKEY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InitializeOkCancelWithKey(::System::String* str, ::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEOKCANCELWITHKEY_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void InitializeOkCancelWithKey(::System::String* str, ::System::String* str2, ::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEOKCANCELWITHKEY_OFFSET))(str, str2, arg, arg2, nullptr);
		}

		::System::Void InitializeQuitPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEQUITPOPUP_OFFSET))(nullptr);
		}

		::System::Void InitializeOkCancelInBuildWithKey(::System::String* str, ::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEOKCANCELINBUILDWITHKEY_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void InitializeOkCancelInBuild(::System::String* str, ::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEOKCANCELINBUILD_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void InitializeQuitPopup_PCXButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEQUITPOPUP_PCXBUTTON_OFFSET))(nullptr);
		}

		::System::Void ChangeOkButtonYellowType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_CHANGEOKBUTTONYELLOWTYPE_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void InitializeByMessagePopup(::System::String* str, ::Il2CppArray<::System::Object*>* arg, MessagePopupPayload* arg2)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, MessagePopupPayload*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEBYMESSAGEPOPUP_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void InitializeByMessagePopup(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEBYMESSAGEPOPUP_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void InitializeMaintenance(::System::Boolean arg, ::System::String* str, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITIALIZEMAINTENANCE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void SetXButtonToClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETXBUTTONTOCLOSE_OFFSET))(nullptr);
		}

		::System::Void SetImage(::MX::Data::Excel::MessagePopupExcel* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::MessagePopupExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETIMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSubTitle(::MX::Data::Excel::MessagePopupExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MessagePopupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETSUBTITLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCondition(::MX::Data::Excel::MessagePopupExcel* arg, MessagePopupPayload* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::MessagePopupExcel*, MessagePopupPayload*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* LoadImages(::MX::Data::Excel::MessagePopupExcel* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::Excel::MessagePopupExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_LOADIMAGES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetButtonColor(UISprite* arg, UILabel* arg2, ::FlatData::MessagePopupButtonType* arg3)
		{
			((::System::Void(*)(UISprite*, UILabel*, ::FlatData::MessagePopupButtonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETBUTTONCOLOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetDefaultPopupType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETDEFAULTPOPUPTYPE_OFFSET))(nullptr);
		}

		::System::Void SetCommand(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void SetXButtonEvent(EventDelegate* arg)
		{
			((::System::Void(*)(EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETXBUTTONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetContentsLock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void HandleParameter(::System::Boolean arg, ::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_HANDLEPARAMETER_OFFSET))(arg, str, str2, nullptr);
		}

		::System::Void HandleCommand(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_HANDLECOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void HandleCloseUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_HANDLECLOSEUI_OFFSET))(arg, nullptr);
		}

		::System::Void HandleOpenUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_HANDLEOPENUI_OFFSET))(arg, nullptr);
		}

		::System::Void HandleReopenUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_HANDLEREOPENUI_OFFSET))(arg, nullptr);
		}

		::System::Void HandleLogout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_HANDLELOGOUT_OFFSET))(nullptr);
		}

		::System::Void HandleGotoLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_HANDLEGOTOLOBBY_OFFSET))(nullptr);
		}

		::System::Void HandleOnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_HANDLEONBACK_OFFSET))(nullptr);
		}

		::System::Void SetMessageLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SETMESSAGELABEL_OFFSET))(str, nullptr);
		}

		::System::String* GetMessageText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_GETMESSAGETEXT_OFFSET))(nullptr);
		}

		::System::Void ShowNoMoreViewingTodayToggle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_SHOWNOMOREVIEWINGTODAYTOGGLE_OFFSET))(str, nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void ResetButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_RESETBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SYSTEM___N__0_OFFSET))(nullptr);
		}

	};

