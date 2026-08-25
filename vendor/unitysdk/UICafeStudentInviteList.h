#pragma once
#include "unitysdk.h"

class UICafeStudentInviteListSortingPopup;
class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class UICafeStudentInviteNameSearch;
class SortingRule;
class SortingOrder;
class NameSearchResult;

#define UICAFESTUDENTINVITELIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x2288C70)
#define UICAFESTUDENTINVITELIST_GET_STUDENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x2288F90)
#define UICAFESTUDENTINVITELIST_ONCLICKOPENSORTING_OFFSET UNITYSDK_OFFSET(0x2288FA0)
#define UICAFESTUDENTINVITELIST_SET_STUDENTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x2289110)
#define UICAFESTUDENTINVITELIST_SET_STUDENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x2289120)
#define UICAFESTUDENTINVITELIST_ONNAMESEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0x2289130)
#define UICAFESTUDENTINVITELIST_ONSORTCHANGED_OFFSET UNITYSDK_OFFSET(0x22899E0)
#define UICAFESTUDENTINVITELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x2289B90)
#define UICAFESTUDENTINVITELIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2289BE0)
#define UICAFESTUDENTINVITELIST_CLOSESORTINGPOPUP_OFFSET UNITYSDK_OFFSET(0x2289C40)
#define UICAFESTUDENTINVITELIST_ONCLICKTOGGLEORDER_OFFSET UNITYSDK_OFFSET(0x2289CB0)
#define UICAFESTUDENTINVITELIST_GET_STUDENTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x2289DC0)
#define UICAFESTUDENTINVITELIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2289DD0)
#define UICAFESTUDENTINVITELIST_SETSORTUI_OFFSET UNITYSDK_OFFSET(0x2289E60)
#define UICAFESTUDENTINVITELIST_SETITEMS_OFFSET UNITYSDK_OFFSET(0x2289140)
#define UICAFESTUDENTINVITELIST_ONSENDINVITE_OFFSET UNITYSDK_OFFSET(0x228A060)

	inline static constexpr unsigned int UICafeStudentInviteList_TypeDefinitionIndex = 4682;

	class UICafeStudentInviteList : public State
	{
	public:
		UICafeStudentInviteListSortingPopup* sortingPopup; // 0x90
		UILabel* studentCount; // 0x98
		MXButton* openSortingButton; // 0xA0
		MXButton* toggleOrderButton; // 0xA8
		UILabel* currentSortingLabel; // 0xB0
		::UnityEngine::GameObject* sortAsc; // 0xB8
		::UnityEngine::GameObject* sortDesc; // 0xC0
		UICafeStudentInviteNameSearch* nameSearch; // 0xC8
		::UnityEngine::GameObject* emptyStudent; // 0xD0
		SortingRule* _StudentSortingRule_k__BackingField; // 0xD8
		SortingOrder* _StudentSortingOrder_k__BackingField; // 0xDC

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_AWAKE_OFFSET))(nullptr);
		}

		SortingRule* get_StudentSortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_GET_STUDENTSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void OnClickOpenSorting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_ONCLICKOPENSORTING_OFFSET))(nullptr);
		}

		::System::Void set_StudentSortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_SET_STUDENTSORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void set_StudentSortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_SET_STUDENTSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void OnNameSearchResultUpdated(NameSearchResult* arg)
		{
			((::System::Void(*)(NameSearchResult*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_ONNAMESEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSortChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_ONSORTCHANGED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void CloseSortingPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_CLOSESORTINGPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnClickToggleOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_ONCLICKTOGGLEORDER_OFFSET))(nullptr);
		}

		SortingOrder* get_StudentSortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_GET_STUDENTSORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetSortUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_SETSORTUI_OFFSET))(nullptr);
		}

		::System::Void SetItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_SETITEMS_OFFSET))(nullptr);
		}

		::System::Void OnSendInvite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFESTUDENTINVITELIST_ONSENDINVITE_OFFSET))(nullptr);
		}

	};

