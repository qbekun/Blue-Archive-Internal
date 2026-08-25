#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class GuideMissionArchiveScrollViewController;
class SortingRule;

#define UIGUIDEMISSIONARCHIVE_SORT_OFFSET UNITYSDK_OFFSET(0x246CE80)
#define UIGUIDEMISSIONARCHIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x246D4F0)
#define UIGUIDEMISSIONARCHIVE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x246D620)
#define UIGUIDEMISSIONARCHIVE__SORT_G__SORTBYINCOMPLETE|15_1_OFFSET UNITYSDK_OFFSET(0x246D1D0)
#define UIGUIDEMISSIONARCHIVE_START_OFFSET UNITYSDK_OFFSET(0x246DB90)
#define UIGUIDEMISSIONARCHIVE_GET_SCROLLVIEWCONTROLLER_OFFSET UNITYSDK_OFFSET(0x246DE60)
#define UIGUIDEMISSIONARCHIVE_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x246DB00)
#define UIGUIDEMISSIONARCHIVE_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0x246E200)
#define UIGUIDEMISSIONARCHIVE__SORT_G__SORTBYDEFAULT|15_0_OFFSET UNITYSDK_OFFSET(0x246CF90)
#define UIGUIDEMISSIONARCHIVE_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0x246E3B0)
#define UIGUIDEMISSIONARCHIVE_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x246DED0)
#define UIGUIDEMISSIONARCHIVE_GET_CURRENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x246D850)
#define UIGUIDEMISSIONARCHIVE_SETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x246D930)

	inline static constexpr unsigned int UIGuideMissionArchive_TypeDefinitionIndex = 5639;

	class UIGuideMissionArchive : public Il2CppObject
	{
	public:
		UILabel* sortLabel; // 0x18
		MXButton* sortButton; // 0x20
		MXButton* orderButton; // 0x28
		::UnityEngine::GameObject* ascendingIconRoot; // 0x30
		::UnityEngine::GameObject* descendingIconRoot; // 0x38
		::UnityEngine::GameObject* emptyObject; // 0x40
		::Il2CppArray<::System::Object*>* seasonInfos; // 0x48
		Il2CppObject* sortingRuleList; // 0x50
		GuideMissionArchiveScrollViewController* scrollViewController; // 0x58

		::System::Void Sort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE_SORT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE_INITIALIZE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* _Sort_g__SortByIncomplete|15_1(<>c__DisplayClass15_0&* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(<>c__DisplayClass15_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE__SORT_G__SORTBYINCOMPLETE|15_1_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE_START_OFFSET))(nullptr);
		}

		GuideMissionArchiveScrollViewController* get_ScrollViewController()
		{
			return ((GuideMissionArchiveScrollViewController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE_GET_SCROLLVIEWCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE_ONCLICKSORT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* _Sort_g__SortByDefault|15_0(<>c__DisplayClass15_0&* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(<>c__DisplayClass15_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE__SORT_G__SORTBYDEFAULT|15_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Void RefreshItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE_REFRESHITEMS_OFFSET))(nullptr);
		}

		SortingRule* get_CurrentSortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE_GET_CURRENTSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void SetSortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONARCHIVE_SETSORTINGRULE_OFFSET))(arg, nullptr);
		}

	};

