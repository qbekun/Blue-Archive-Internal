#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIPopup_FilterSort;

#define UIITEMSORT__ONCLICKSORT_B__25_1_OFFSET UNITYSDK_OFFSET(0xB00CE0)
#define UIITEMSORT_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB01240)
#define UIITEMSORT_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB01250)
#define UIITEMSORT_SORT_OFFSET UNITYSDK_OFFSET(0xB00D40)
#define UIITEMSORT_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0xB01260)
#define UIITEMSORT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB01400)
#define UIITEMSORT_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB01410)
#define UIITEMSORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB01420)
#define UIITEMSORT__ONCLICKSORT_B__25_0_OFFSET UNITYSDK_OFFSET(0xB01590)
#define UIITEMSORT_REFRESHSORT_OFFSET UNITYSDK_OFFSET(0xB01680)
#define UIITEMSORT_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0xB016A0)
#define UIITEMSORT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB016C0)
#define UIITEMSORT_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB018D0)

	inline static constexpr unsigned int UIItemSort_TypeDefinitionIndex = 8179;

	class UIItemSort : public Il2CppObject
	{
	public:
		Il2CppObject* onSort; // 0x18
		Il2CppObject* sortingList; // 0x20
		SortingRule* _SortingRule_k__BackingField; // 0x28
		SortingOrder* _SortingOrder_k__BackingField; // 0x2C
		Il2CppObject* allItems; // 0x30
		MXButton* sortButton; // 0x38
		MXButton* orderButton; // 0x40
		UILabel* sortLabelType1; // 0x48
		UILabel* sortLabelType2; // 0x50
		::UnityEngine::GameObject* sortType1; // 0x58
		::UnityEngine::GameObject* sortType2; // 0x60
		::UnityEngine::GameObject* descendingIcon; // 0x68
		::UnityEngine::GameObject* ascendingIcon; // 0x70
		::UnityEngine::GameObject* filterOn; // 0x78
		::UnityEngine::GameObject* filterOff; // 0x80
		::System::Boolean isWillSaveData; // 0x88

		::System::Void _OnClickSort_b__25_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT__ONCLICKSORT_B__25_1_OFFSET))(arg, nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT_SORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT_ONCLICKSORT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT_.CTOR_OFFSET))(nullptr);
		}

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, SortingRule* arg4, SortingOrder* arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, SortingRule*, SortingOrder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void _OnClickSort_b__25_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT__ONCLICKSORT_B__25_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT_REFRESHSORT_OFFSET))(nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIITEMSORT_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

	};

