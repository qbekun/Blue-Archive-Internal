#pragma once
#include "unitysdk.h"

class UIEventMeetupListSortingPopup;
class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class SortingRule;
class SortingOrder;
class EventMeetupCharacter;

#define UIEVENTMEETUPLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x24AFDC0)
#define UIEVENTMEETUPLIST_GET_STUDENTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x24B0470)
#define UIEVENTMEETUPLIST_ONCLICKTOGGLEORDERBUTTON_OFFSET UNITYSDK_OFFSET(0x24B0480)
#define UIEVENTMEETUPLIST_ONCLICKOPENSORTINGBUTTON_OFFSET UNITYSDK_OFFSET(0x24B0C80)
#define UIEVENTMEETUPLIST_ADD_MEETUPCHARACTERSELECTED_OFFSET UNITYSDK_OFFSET(0x24B0DA0)
#define UIEVENTMEETUPLIST_REMOVE_MEETUPCHARACTERSELECTED_OFFSET UNITYSDK_OFFSET(0x24B0E40)
#define UIEVENTMEETUPLIST_SET_STUDENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x24B0EE0)
#define UIEVENTMEETUPLIST_SETSORTUI_OFFSET UNITYSDK_OFFSET(0x24B0EF0)
#define UIEVENTMEETUPLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x24B1020)
#define UIEVENTMEETUPLIST_ONMEETUPCHARACTERSELECTED_OFFSET UNITYSDK_OFFSET(0x24B1030)
#define UIEVENTMEETUPLIST_SET_STUDENTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x24B1050)
#define UIEVENTMEETUPLIST_GET_STUDENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x24B1060)
#define UIEVENTMEETUPLIST_ONSORTINGRULECHANGED_OFFSET UNITYSDK_OFFSET(0x24B1070)
#define UIEVENTMEETUPLIST_HIDESORTINGPOPUP_OFFSET UNITYSDK_OFFSET(0x24B11F0)
#define UIEVENTMEETUPLIST_SETITEMS_OFFSET UNITYSDK_OFFSET(0x24B0590)
#define UIEVENTMEETUPLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B1260)

	inline static constexpr unsigned int UIEventMeetupList_TypeDefinitionIndex = 5847;

	class UIEventMeetupList : public ::System::Xml::XPathNodeList
	{
	public:
		UIEventMeetupListSortingPopup* sortingPopup; // 0x90
		UILabel* studentCount; // 0x98
		MXButton* openSortingButton; // 0xA0
		UILabel* currentSortingLabel; // 0xA8
		MXButton* toggleOrderButton; // 0xB0
		::UnityEngine::GameObject* orderAscendingObject; // 0xB8
		::UnityEngine::GameObject* orderDescendingObject; // 0xC0
		SortingRule* _StudentSortingRule_k__BackingField; // 0xC8
		SortingOrder* _StudentSortingOrder_k__BackingField; // 0xCC
		Il2CppObject* MeetupCharacterSelected; // 0xD0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_AWAKE_OFFSET))(nullptr);
		}

		SortingOrder* get_StudentSortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_GET_STUDENTSORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void OnClickToggleOrderButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_ONCLICKTOGGLEORDERBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickOpenSortingButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_ONCLICKOPENSORTINGBUTTON_OFFSET))(nullptr);
		}

		::System::Void add_MeetupCharacterSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_ADD_MEETUPCHARACTERSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_MeetupCharacterSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_REMOVE_MEETUPCHARACTERSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_StudentSortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_SET_STUDENTSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSortUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_SETSORTUI_OFFSET))(nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_SETDATA_OFFSET))(nullptr);
		}

		::System::Void OnMeetupCharacterSelected(EventMeetupCharacter* arg)
		{
			((::System::Void(*)(EventMeetupCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_ONMEETUPCHARACTERSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_StudentSortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_SET_STUDENTSORTINGORDER_OFFSET))(arg, nullptr);
		}

		SortingRule* get_StudentSortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_GET_STUDENTSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void OnSortingRuleChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_ONSORTINGRULECHANGED_OFFSET))(nullptr);
		}

		::System::Void HideSortingPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_HIDESORTINGPOPUP_OFFSET))(nullptr);
		}

		::System::Void SetItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_SETITEMS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPLIST_.CTOR_OFFSET))(nullptr);
		}

	};

