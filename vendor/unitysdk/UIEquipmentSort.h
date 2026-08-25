#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;
class EquipmentFilter;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIPopup_FilterSort;

#define UIEQUIPMENTSORT_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xAF9BB0)
#define UIEQUIPMENTSORT_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0xAF9BC0)
#define UIEQUIPMENTSORT_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xAF9CA0)
#define UIEQUIPMENTSORT_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xAF9CB0)
#define UIEQUIPMENTSORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF9CC0)
#define UIEQUIPMENTSORT_REFRESHSORTLIST_OFFSET UNITYSDK_OFFSET(0xAFA060)
#define UIEQUIPMENTSORT_SORT_OFFSET UNITYSDK_OFFSET(0xAF9D50)
#define UIEQUIPMENTSORT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAFA090)
#define UIEQUIPMENTSORT_GET_EQUIPMENTFILTER_OFFSET UNITYSDK_OFFSET(0xAFA0A0)
#define UIEQUIPMENTSORT_SET_EQUIPMENTFILTER_OFFSET UNITYSDK_OFFSET(0xAFA0B0)
#define UIEQUIPMENTSORT__ONCLICKSORT_B__29_1_OFFSET UNITYSDK_OFFSET(0xAFA0C0)
#define UIEQUIPMENTSORT_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0xAFA130)
#define UIEQUIPMENTSORT_AWAKE_OFFSET UNITYSDK_OFFSET(0xAFA160)
#define UIEQUIPMENTSORT_ONFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0xAFA370)
#define UIEQUIPMENTSORT_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xAFA3A0)
#define UIEQUIPMENTSORT__ONCLICKSORT_B__29_0_OFFSET UNITYSDK_OFFSET(0xAFA3B0)

	inline static constexpr unsigned int UIEquipmentSort_TypeDefinitionIndex = 8155;

	class UIEquipmentSort : public Il2CppObject
	{
	public:
		Il2CppObject* onSort; // 0x18
		Il2CppObject* sortingList; // 0x20
		SortingRule* _SortingRule_k__BackingField; // 0x28
		SortingOrder* _SortingOrder_k__BackingField; // 0x2C
		EquipmentFilter* _EquipmentFilter_k__BackingField; // 0x30
		Il2CppObject* allItems; // 0x38
		MXButton* sortButton; // 0x40
		MXButton* orderButton; // 0x48
		MXButton* filterButton; // 0x50
		UILabel* sortLabelType1; // 0x58
		UILabel* sortLabelType2; // 0x60
		::UnityEngine::GameObject* sortType1; // 0x68
		::UnityEngine::GameObject* sortType2; // 0x70
		::UnityEngine::GameObject* descendingIcon; // 0x78
		::UnityEngine::GameObject* ascendingIcon; // 0x80
		::UnityEngine::GameObject* filterOn; // 0x88
		::UnityEngine::GameObject* filterOff; // 0x90

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_ONCLICKSORT_OFFSET))(nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, SortingRule* arg4, SortingOrder* arg5, EquipmentFilter* arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, SortingRule*, SortingOrder*, EquipmentFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void RefreshSortList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_REFRESHSORTLIST_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, EquipmentFilter* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, EquipmentFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_.CTOR_OFFSET))(nullptr);
		}

		EquipmentFilter* get_EquipmentFilter()
		{
			return ((EquipmentFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_GET_EQUIPMENTFILTER_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentFilter(EquipmentFilter* arg)
		{
			((::System::Void(*)(EquipmentFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_SET_EQUIPMENTFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSort_b__29_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT__ONCLICKSORT_B__29_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnFilterChanged(EquipmentFilter* arg)
		{
			((::System::Void(*)(EquipmentFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_ONFILTERCHANGED_OFFSET))(arg, nullptr);
		}

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__29_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTSORT__ONCLICKSORT_B__29_0_OFFSET))(arg, nullptr);
		}

	};

