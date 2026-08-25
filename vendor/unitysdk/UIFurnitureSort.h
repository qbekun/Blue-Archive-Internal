#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIPopup_FilterSort;

#define UIFURNITURESORT_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB004C0)
#define UIFURNITURESORT__ONCLICKSORT_B__19_0_OFFSET UNITYSDK_OFFSET(0xB004D0)
#define UIFURNITURESORT_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0xB005C0)
#define UIFURNITURESORT__ONCLICKSORT_B__19_1_OFFSET UNITYSDK_OFFSET(0xB006A0)
#define UIFURNITURESORT_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0xB009D0)
#define UIFURNITURESORT_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB009F0)
#define UIFURNITURESORT_SORT_OFFSET UNITYSDK_OFFSET(0xB00700)
#define UIFURNITURESORT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB00A00)
#define UIFURNITURESORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB00A20)
#define UIFURNITURESORT_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB00A90)
#define UIFURNITURESORT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB00AA0)
#define UIFURNITURESORT_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB00CB0)
#define UIFURNITURESORT_REFRESHSORT_OFFSET UNITYSDK_OFFSET(0xB00CC0)

	inline static constexpr unsigned int UIFurnitureSort_TypeDefinitionIndex = 8177;

	class UIFurnitureSort : public Il2CppObject
	{
	public:
		Il2CppObject* onSort; // 0x18
		Il2CppObject* sortingList; // 0x20
		SortingRule* _SortingRule_k__BackingField; // 0x28
		SortingOrder* _SortingOrder_k__BackingField; // 0x2C
		Il2CppObject* allItems; // 0x30
		MXButton* sortButton; // 0x38
		MXButton* orderButton; // 0x40
		UILabel* sortLabel; // 0x48
		UILabel* orderLabel; // 0x50
		::UnityEngine::GameObject* descendingIcon; // 0x58
		::UnityEngine::GameObject* ascendingIcon; // 0x60

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__19_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT__ONCLICKSORT_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT_ONCLICKSORT_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__19_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT__ONCLICKSORT_B__19_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT_SORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, SortingRule* arg4, SortingOrder* arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITURESORT_REFRESHSORT_OFFSET))(nullptr);
		}

	};

