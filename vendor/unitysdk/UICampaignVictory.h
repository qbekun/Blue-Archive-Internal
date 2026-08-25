#pragma once
#include "unitysdk.h"

class MXButton;
class UIGrid;
class UIPanel;
namespace UnityEngine { class Coroutine; }
class PopupType;
class UIBase;

#define UICAMPAIGNVICTORY__COOPENPOPUPS_B__16_0_OFFSET UNITYSDK_OFFSET(0x22AC4D0)
#define UICAMPAIGNVICTORY_AWAKE_OFFSET UNITYSDK_OFFSET(0x22AC820)
#define UICAMPAIGNVICTORY_SHOWPOPUP_OFFSET UNITYSDK_OFFSET(0x22ACCD0)
#define UICAMPAIGNVICTORY_POPUPLISTANDROIDBACKBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0x22ACD70)
#define UICAMPAIGNVICTORY_ONNEXTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x22ACE40)
#define UICAMPAIGNVICTORY_CLOSE_OFFSET UNITYSDK_OFFSET(0x22AD140)
#define UICAMPAIGNVICTORY_HIDEPOPUP_OFFSET UNITYSDK_OFFSET(0x22AD090)
#define UICAMPAIGNVICTORY_ONLOBBYBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x22AD2A0)
#define UICAMPAIGNVICTORY_ACTIVATEBACKBUTTONS_OFFSET UNITYSDK_OFFSET(0x22AD350)
#define UICAMPAIGNVICTORY_ONPREVBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x22AD580)
#define UICAMPAIGNVICTORY_ONCONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x22ACD90)
#define UICAMPAIGNVICTORY_COCLOSE_OFFSET UNITYSDK_OFFSET(0x22AD220)
#define UICAMPAIGNVICTORY_ONSKIPBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x22AD7D0)
#define UICAMPAIGNVICTORY_REORDERFRONTPANEL_OFFSET UNITYSDK_OFFSET(0x22AD980)
#define UICAMPAIGNVICTORY_ACTIVATESKIPBUTTON_OFFSET UNITYSDK_OFFSET(0x22ADA80)
#define UICAMPAIGNVICTORY__ONSKIPBUTTONCLICKED_B__28_0_OFFSET UNITYSDK_OFFSET(0x22ADC50)
#define UICAMPAIGNVICTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x22ADCC0)
#define UICAMPAIGNVICTORY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22ADDA0)
#define UICAMPAIGNVICTORY_SHOWCAMPAIGNEXTRASTAGEOPENEDPOPUP_OFFSET UNITYSDK_OFFSET(0x22AC540)
#define UICAMPAIGNVICTORY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x22AEE90)
#define UICAMPAIGNVICTORY_COOPENPOPUPS_OFFSET UNITYSDK_OFFSET(0x22AEE00)

	inline static constexpr unsigned int UICampaignVictory_TypeDefinitionIndex = 4769;

	class UICampaignVictory : public Il2CppObject
	{
	public:
		::System::Single DELAY; // 0x0
		MXButton* prevButton; // 0xD8
		MXButton* nextButton; // 0xE0
		MXButton* skipButton; // 0xE8
		UIGrid* bottomButtonGrid; // 0xF0
		MXButton* lobbyButton; // 0xF8
		MXButton* confirmButton; // 0x100
		UIPanel* widgetParentToMove; // 0x108
		::UnityEngine::Coroutine* openPopupCoroutine; // 0x110
		PopupType* currentPopup; // 0x118
		Il2CppObject* popupDict; // 0x120
		Il2CppObject* popupList; // 0x128

		::System::Void _CoOpenPopups_b__16_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY__COOPENPOPUPS_B__16_0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ShowPopup(PopupType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(PopupType*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_SHOWPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void PopupListAndroidBackButtonCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_POPUPLISTANDROIDBACKBUTTONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void OnNextButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_ONNEXTBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void Close(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void HidePopup(PopupType* arg)
		{
			((::System::Void(*)(PopupType*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_HIDEPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnLobbyButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_ONLOBBYBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void ActivateBackButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_ACTIVATEBACKBUTTONS_OFFSET))(nullptr);
		}

		::System::Void OnPrevButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_ONPREVBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void OnConfirmButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_ONCONFIRMBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoClose(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_COCLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkipButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_ONSKIPBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void ReorderFrontPanel(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_REORDERFRONTPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void ActivateSkipButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_ACTIVATESKIPBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnSkipButtonClicked_b__28_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY__ONSKIPBUTTONCLICKED_B__28_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void ShowCampaignExtraStageOpenedPopup(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_SHOWCAMPAIGNEXTRASTAGEOPENEDPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenPopups(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNVICTORY_COOPENPOPUPS_OFFSET))(arg, nullptr);
		}

	};

