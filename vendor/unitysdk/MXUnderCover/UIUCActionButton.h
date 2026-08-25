#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MXUnderCover { class UIUCWalkButton; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Collider; }
namespace MXUnderCover { class UIUCHUDButton; }
class UILabel;
namespace MXUnderCover { class UIUCMainButtonController; }
namespace MXUnderCover { class SwitchedPlayerMessage; }
namespace MXUnderCover { class ChangedActionButtonTriggerMessage; }
class RefreshEventType;

#define MXUNDERCOVER_UIUCACTIONBUTTON_INIT_OFFSET UNITYSDK_OFFSET(0xDC0EC0)
#define MXUNDERCOVER_UIUCACTIONBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDC1200)
#define MXUNDERCOVER_UIUCACTIONBUTTON_ONDESTROYINTERNAL_OFFSET UNITYSDK_OFFSET(0xDC14C0)
#define MXUNDERCOVER_UIUCACTIONBUTTON_ONPRESSEND_OFFSET UNITYSDK_OFFSET(0xDC1570)
#define MXUNDERCOVER_UIUCACTIONBUTTON_ONSWITCHPLAYER_OFFSET UNITYSDK_OFFSET(0xDC1600)
#define MXUNDERCOVER_UIUCACTIONBUTTON_ONCHANGEACTIONBUTTONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDC1690)
#define MXUNDERCOVER_UIUCACTIONBUTTON_ONCHANGEACTIONBUTTONTRIGGER_OFFSET UNITYSDK_OFFSET(0xDC1220)
#define MXUNDERCOVER_UIUCACTIONBUTTON_SETBUTTONINTERACTIONMODE_OFFSET UNITYSDK_OFFSET(0xDC16A0)
#define MXUNDERCOVER_UIUCACTIONBUTTON_SETENABLE_OFFSET UNITYSDK_OFFSET(0xDC1810)
#define MXUNDERCOVER_UIUCACTIONBUTTON_APPLYREFRESHEVENT_OFFSET UNITYSDK_OFFSET(0xDC1A80)
#define MXUNDERCOVER_UIUCACTIONBUTTON_ONCLICKACTION_OFFSET UNITYSDK_OFFSET(0xDC15C0)
#define MXUNDERCOVER_UIUCACTIONBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xDC1B10)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCActionButton_TypeDefinitionIndex = 10017;

	class UIUCActionButton : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* interactionButtonParent; // 0xA8
		::MXUnderCover::UIUCWalkButton* walkButton; // 0xB0
		::UnityEngine::Animation* ActionBarAni; // 0xB8
		::UnityEngine::Collider* ActionBarCollider; // 0xC0
		::MXUnderCover::UIUCHUDButton* ActionBarButton; // 0xC8
		UILabel* ActionBarLabel; // 0xD0
		::System::Boolean isInteractionMode; // 0xD8
		::System::String* actionBarOpenAniName; // 0xE0
		::System::String* actionBarCloseAniName; // 0xE8

		::System::Void Init(::MXUnderCover::UIUCMainButtonController* arg)
		{
			((::System::Void(*)(::MXUnderCover::UIUCMainButtonController*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroyInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_ONDESTROYINTERNAL_OFFSET))(nullptr);
		}

		::System::Void OnPressEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_ONPRESSEND_OFFSET))(nullptr);
		}

		::System::Void OnSwitchPlayer(::MXUnderCover::SwitchedPlayerMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::SwitchedPlayerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_ONSWITCHPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeActionButtonTrigger(::MXUnderCover::ChangedActionButtonTriggerMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::ChangedActionButtonTriggerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_ONCHANGEACTIONBUTTONTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeActionButtonTrigger(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_ONCHANGEACTIONBUTTONTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtonInteractionMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_SETBUTTONINTERACTIONMODE_OFFSET))(nullptr);
		}

		::System::Void SetEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_SETENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyRefreshEvent(RefreshEventType* arg)
		{
			((::System::Void(*)(RefreshEventType*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_APPLYREFRESHEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_ONCLICKACTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCACTIONBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};
}

