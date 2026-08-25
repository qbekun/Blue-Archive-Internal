#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class WidgetCharacterDialogEmoji;
namespace MXUnderCover { class UIJoystick; }
namespace MXUnderCover { class UIUCPlayerInfo; }
namespace MXUnderCover { class UICountdown; }
namespace MXUnderCover { class UIUCMainButtonController; }
namespace MXUnderCover { class UCStage; }
class ControllerUnderCoverQuickSlot;
class UIBase;
namespace UnityEngine { class Collider; }
namespace MXUnderCover { class BulletTimeEndMessage; }
class Input;
namespace MXUnderCover { class BulletTimeStartMessage; }
namespace MXUnderCover { class RefreshMainUIButtonsMessage; }

#define MXUNDERCOVER_UIUNDERCOVERMAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCE210)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_UPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0xDCE220)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ENABLECOLLIDER_OFFSET UNITYSDK_OFFSET(0xDCE5E0)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONHIDEUI_OFFSET UNITYSDK_OFFSET(0xDCE670)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_GET_ALLOWMULTITOUCH_OFFSET UNITYSDK_OFFSET(0xDCE7A0)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_GETITEMBUTTONCOLLIDER_OFFSET UNITYSDK_OFFSET(0xDCE7B0)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONBULLETTIMEEND_OFFSET UNITYSDK_OFFSET(0xDCE8B0)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_GET_QUICKSLOT_OFFSET UNITYSDK_OFFSET(0xDCE980)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONHIDEDIALOGEMOJI_OFFSET UNITYSDK_OFFSET(0xDCE990)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xDCE9C0)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_CLEARGAMETYPE_OFFSET UNITYSDK_OFFSET(0xDCE550)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDCE9E0)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDCE9F0)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xDCEF90)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONSTOPCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDCF090)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONPLAYCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDCF110)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDCF1B0)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONBULLETTIMESTART_OFFSET UNITYSDK_OFFSET(0xDCF700)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONREFRESHMAINUI_OFFSET UNITYSDK_OFFSET(0xDCF930)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONHIDEDIALOGEMOJIALL_OFFSET UNITYSDK_OFFSET(0xDCFAA0)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONOPENED_OFFSET UNITYSDK_OFFSET(0xDCFAD0)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0xDCFC80)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONCLEARCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xDCFD80)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_ONSHOWDIALOGEMOJI_OFFSET UNITYSDK_OFFSET(0xDCFE00)
#define MXUNDERCOVER_UIUNDERCOVERMAIN_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDCFF00)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUndercoverMain_TypeDefinitionIndex = 10055;

	class UIUndercoverMain : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* hideUI; // 0xD8
		::UnityEngine::GameObject* BulletTimeScreen; // 0xE0
		UILabel* BulletTimeSkillGuideLabel; // 0xE8
		::UnityEngine::GameObject* SkillGuideBG; // 0xF0
		WidgetCharacterDialogEmoji* widgetCharacterDialogEmoji; // 0xF8
		::MXUnderCover::UIJoystick* Joystick; // 0x100
		::MXUnderCover::UIUCPlayerInfo* playerInfo; // 0x108
		UILabel* tipLabel; // 0x110
		::MXUnderCover::UICountdown* countdown; // 0x118
		::MXUnderCover::UIUCMainButtonController* mainButtonController; // 0x120
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x128
		ControllerUnderCoverQuickSlot* _quickSlot; // 0x130
		UIBase* _lastTopUI; // 0x138
		::System::Boolean _lastBulletTime; // 0x140

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_UPDATECONTROLLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* EnableCollider()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ENABLECOLLIDER_OFFSET))(nullptr);
		}

		::System::Void OnHideUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONHIDEUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowMultiTouch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_GET_ALLOWMULTITOUCH_OFFSET))(nullptr);
		}

		::UnityEngine::Collider* GetItemButtonCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_GETITEMBUTTONCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void OnBulletTimeEnd(::MXUnderCover::BulletTimeEndMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::BulletTimeEndMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONBULLETTIMEEND_OFFSET))(arg, nullptr);
		}

		ControllerUnderCoverQuickSlot* get_QuickSlot()
		{
			return ((ControllerUnderCoverQuickSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_GET_QUICKSLOT_OFFSET))(nullptr);
		}

		::System::Void OnHideDialogEmoji(Input* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Input*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONHIDEDIALOGEMOJI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void ClearGameType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_CLEARGAMETYPE_OFFSET))(nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnStopCountdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONSTOPCOUNTDOWN_OFFSET))(nullptr);
		}

		::System::Void OnPlayCountdown(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONPLAYCOUNTDOWN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnBulletTimeStart(::MXUnderCover::BulletTimeStartMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::BulletTimeStartMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONBULLETTIMESTART_OFFSET))(arg, nullptr);
		}

		::System::Void OnRefreshMainUI(::MXUnderCover::RefreshMainUIButtonsMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::RefreshMainUIButtonsMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONREFRESHMAINUI_OFFSET))(arg, nullptr);
		}

		::System::Void OnHideDialogEmojiAll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONHIDEDIALOGEMOJIALL_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnClearCountdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONCLEARCOUNTDOWN_OFFSET))(nullptr);
		}

		::System::Void OnShowDialogEmoji(Input* arg)
		{
			((::System::Void(*)(Input*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_ONSHOWDIALOGEMOJI_OFFSET))(arg, nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUNDERCOVERMAIN_SET_STAGE_OFFSET))(arg, nullptr);
		}

	};
}

