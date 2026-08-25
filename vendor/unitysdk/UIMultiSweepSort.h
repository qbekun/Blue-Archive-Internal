#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class MultiSweepItemInfo;
class UIPopup_FilterSort;

#define UIMULTISWEEPSORT_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0xB01A40)
#define UIMULTISWEEPSORT_SORT_OFFSET UNITYSDK_OFFSET(0xB01BA0)
#define UIMULTISWEEPSORT__SORT_B__24_0_OFFSET UNITYSDK_OFFSET(0xB020F0)
#define UIMULTISWEEPSORT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB02250)
#define UIMULTISWEEPSORT_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB02460)
#define UIMULTISWEEPSORT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB02470)
#define UIMULTISWEEPSORT_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB02480)
#define UIMULTISWEEPSORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB02490)
#define UIMULTISWEEPSORT_ISMULTISWEEPBYFILTER_OFFSET UNITYSDK_OFFSET(0xB02100)
#define UIMULTISWEEPSORT_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0xB025A0)
#define UIMULTISWEEPSORT_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB025C0)
#define UIMULTISWEEPSORT__ONCLICKSORT_B__26_0_OFFSET UNITYSDK_OFFSET(0xB025D0)
#define UIMULTISWEEPSORT__ONCLICKSORT_B__26_1_OFFSET UNITYSDK_OFFSET(0xB026C0)
#define UIMULTISWEEPSORT_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB02720)

	inline static constexpr unsigned int UIMultiSweepSort_TypeDefinitionIndex = 8181;

	class UIMultiSweepSort : public Il2CppObject
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

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT_ONCLICKSORT_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT_SORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _Sort_b__24_0(MultiSweepItemInfo* arg)
		{
			return ((::System::Boolean(*)(MultiSweepItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT__SORT_B__24_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT_AWAKE_OFFSET))(nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT_.CTOR_OFFSET))(nullptr);
		}

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, SortingRule* arg4, SortingOrder* arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, SortingRule*, SortingOrder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean IsMultiSweepByFilter(MultiSweepItemInfo* arg)
		{
			return ((::System::Boolean(*)(MultiSweepItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT_ISMULTISWEEPBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSort_b__26_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT__ONCLICKSORT_B__26_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSort_b__26_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT__ONCLICKSORT_B__26_1_OFFSET))(arg, nullptr);
		}

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSORT_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

	};

