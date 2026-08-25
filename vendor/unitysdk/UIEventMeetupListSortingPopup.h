#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class MXButton;
class MessangerStudentSortingTab;
class UIEventMeetupList;
class SortingRule;

#define UIEVENTMEETUPLISTSORTINGPOPUP_SHOW_OFFSET UNITYSDK_OFFSET(0x24B0CB0)
#define UIEVENTMEETUPLISTSORTINGPOPUP_HIDE_OFFSET UNITYSDK_OFFSET(0x24B1230)
#define UIEVENTMEETUPLISTSORTINGPOPUP_GET_CURRENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x24B11B0)
#define UIEVENTMEETUPLISTSORTINGPOPUP_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x24B13F0)
#define UIEVENTMEETUPLISTSORTINGPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24B1510)
#define UIEVENTMEETUPLISTSORTINGPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B1720)
#define UIEVENTMEETUPLISTSORTINGPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x24B1730)
#define UIEVENTMEETUPLISTSORTINGPOPUP_CLOSEPOPUP_OFFSET UNITYSDK_OFFSET(0x24B1420)
#define UIEVENTMEETUPLISTSORTINGPOPUP_SHOWOPENANI_OFFSET UNITYSDK_OFFSET(0x24B1360)

	inline static constexpr unsigned int UIEventMeetupListSortingPopup_TypeDefinitionIndex = 5849;

	class UIEventMeetupListSortingPopup : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* openPopupAnimation; // 0x18
		MXButton* closeButton; // 0x20
		MessangerStudentSortingTab* sortingTab; // 0x28
		MXButton* confirmButton; // 0x30
		UIEventMeetupList* meetupList; // 0x38

		::System::Void Show(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLISTSORTINGPOPUP_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLISTSORTINGPOPUP_HIDE_OFFSET))(nullptr);
		}

		SortingRule* get_CurrentSortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLISTSORTINGPOPUP_GET_CURRENTSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLISTSORTINGPOPUP_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLISTSORTINGPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLISTSORTINGPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLISTSORTINGPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void ClosePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLISTSORTINGPOPUP_CLOSEPOPUP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ShowOpenAni(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLISTSORTINGPOPUP_SHOWOPENANI_OFFSET))(arg, arg2, nullptr);
		}

	};

