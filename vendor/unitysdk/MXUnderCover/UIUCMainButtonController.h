#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MXUnderCover { class UIJoystick; }
namespace MXUnderCover { class UIUCHUDButton; }
class UIGrid;
namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UIPopup_UCPause; }
namespace MXUnderCover { class UIUCPlayerButton; }
namespace MXUnderCover { class UIPopup_UndercoverInventory; }
class IMessage;
class RefreshEventType;
namespace MXUnderCover { class SwitchedPlayerMessage; }

#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKPAUSE_B__32_1_OFFSET UNITYSDK_OFFSET(0xDC4200)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_CLOSEQUICKSLOT_OFFSET UNITYSDK_OFFSET(0xDC4240)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_HANDLEQUICKSLOTACTION_OFFSET UNITYSDK_OFFSET(0xDC43B0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDC4740)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_GET_ISQUICKSLOTOPENED_OFFSET UNITYSDK_OFFSET(0xDC4860)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ONCLICKPAUSE_OFFSET UNITYSDK_OFFSET(0xDC4870)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDC49C0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDC49D0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xDC49E0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKTIP_B__30_0_OFFSET UNITYSDK_OFFSET(0xDC4CC0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xDC4E60)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_RESETALLBUTTONPRESS_OFFSET UNITYSDK_OFFSET(0xDC52D0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_SET_ISQUICKSLOTOPENED_OFFSET UNITYSDK_OFFSET(0xDC5330)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKINVENTORY_B__31_1_OFFSET UNITYSDK_OFFSET(0xDC5340)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDC53D0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKPAUSE_B__32_0_OFFSET UNITYSDK_OFFSET(0xDC53E0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ONCLICKINVENTORY_OFFSET UNITYSDK_OFFSET(0xDC54F0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ONCLICKTIP_OFFSET UNITYSDK_OFFSET(0xDC5570)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_CHECKBUTTONAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDC48F0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_NEEDCANCELBUTTONACTION_OFFSET UNITYSDK_OFFSET(0xDC55F0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_GET_ISSKILLRUNNING_OFFSET UNITYSDK_OFFSET(0xDC5870)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_HANDLEBUTTONPRESSREQUEST_OFFSET UNITYSDK_OFFSET(0xDC5880)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_HANDLEAPPLYREFRESH_OFFSET UNITYSDK_OFFSET(0xDC5900)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_FORCEENDBULLETTIME_OFFSET UNITYSDK_OFFSET(0xDC5960)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKINVENTORY_B__31_2_OFFSET UNITYSDK_OFFSET(0xDC5990)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKINVENTORY_B__31_0_OFFSET UNITYSDK_OFFSET(0xDC59C0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ONSWITCHPLAYER_OFFSET UNITYSDK_OFFSET(0xDC5AD0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_SET_ISSKILLRUNNING_OFFSET UNITYSDK_OFFSET(0xDC5BD0)
#define MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ISBULLETTIME_OFFSET UNITYSDK_OFFSET(0xDC5BE0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCMainButtonController_TypeDefinitionIndex = 10027;

	class UIUCMainButtonController : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* hideUI; // 0x18
		::MXUnderCover::UIJoystick* joystick; // 0x20
		::MXUnderCover::UIUCHUDButton* tipButton; // 0x28
		::MXUnderCover::UIUCHUDButton* invenButton; // 0x30
		::MXUnderCover::UIUCHUDButton* pauseButton; // 0x38
		::Il2CppArray<::System::Object*>* playerChangeButtons; // 0x40
		UIGrid* playerChangeButtonGrid; // 0x48
		::Il2CppArray<::System::Object*>* playerButtons; // 0x50
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x58
		::System::Boolean _IsQuickSlotOpened_k__BackingField; // 0x60
		::System::Boolean _IsSkillRunning_k__BackingField; // 0x61

		::System::Void _OnClickPause_b__32_1(::MXUnderCover::UIPopup_UCPause* arg)
		{
			((::System::Void(*)(::MXUnderCover::UIPopup_UCPause*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKPAUSE_B__32_1_OFFSET))(arg, nullptr);
		}

		::System::Void CloseQuickSlot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_CLOSEQUICKSLOT_OFFSET))(nullptr);
		}

		::System::Void HandleQuickSlotAction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_HANDLEQUICKSLOTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsQuickSlotOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_GET_ISQUICKSLOTOPENED_OFFSET))(nullptr);
		}

		::MXUnderCover::UIUCPlayerButton* GetButton()
		{
			return ((::MXUnderCover::UIUCPlayerButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_GETBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ONCLICKPAUSE_OFFSET))(nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickTip_b__30_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKTIP_B__30_0_OFFSET))(nullptr);
		}

		::System::Void Init(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void ResetAllButtonPress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_RESETALLBUTTONPRESS_OFFSET))(nullptr);
		}

		::System::Void set_IsQuickSlotOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_SET_ISQUICKSLOTOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickInventory_b__31_1(::MXUnderCover::UIPopup_UndercoverInventory* arg)
		{
			((::System::Void(*)(::MXUnderCover::UIPopup_UndercoverInventory*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKINVENTORY_B__31_1_OFFSET))(arg, nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickPause_b__32_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKPAUSE_B__32_0_OFFSET))(nullptr);
		}

		::System::Void OnClickInventory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ONCLICKINVENTORY_OFFSET))(nullptr);
		}

		::System::Void OnClickTip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ONCLICKTIP_OFFSET))(nullptr);
		}

		::System::Void CheckButtonAvailable(::System::Action* arg, ::MXUnderCover::UIUCHUDButton* arg2)
		{
			((::System::Void(*)(::System::Action*, ::MXUnderCover::UIUCHUDButton*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_CHECKBUTTONAVAILABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean NeedCancelButtonAction(::MXUnderCover::UIUCHUDButton* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UIUCHUDButton*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_NEEDCANCELBUTTONACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSkillRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_GET_ISSKILLRUNNING_OFFSET))(nullptr);
		}

		::System::Void HandleButtonPressRequest(IMessage* arg)
		{
			((::System::Void(*)(IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_HANDLEBUTTONPRESSREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void HandleApplyRefresh(RefreshEventType* arg)
		{
			((::System::Void(*)(RefreshEventType*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_HANDLEAPPLYREFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void ForceEndBulletTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_FORCEENDBULLETTIME_OFFSET))(nullptr);
		}

		::System::Void _OnClickInventory_b__31_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKINVENTORY_B__31_2_OFFSET))(nullptr);
		}

		::System::Void _OnClickInventory_b__31_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER__ONCLICKINVENTORY_B__31_0_OFFSET))(nullptr);
		}

		::System::Void OnSwitchPlayer(::MXUnderCover::SwitchedPlayerMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::SwitchedPlayerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ONSWITCHPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsSkillRunning(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_SET_ISSKILLRUNNING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBulletTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCMAINBUTTONCONTROLLER_ISBULLETTIME_OFFSET))(nullptr);
		}

	};
}

