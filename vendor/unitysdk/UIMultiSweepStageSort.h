#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;
class MXButton;
namespace UnityEngine { class GameObject; }
class UIPopup_FilterSort;

#define UIMULTISWEEPSTAGESORT_REFRESHSORT_OFFSET UNITYSDK_OFFSET(0xB02820)
#define UIMULTISWEEPSTAGESORT_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB02B40)
#define UIMULTISWEEPSTAGESORT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB02B50)
#define UIMULTISWEEPSTAGESORT__ONCLICKSORT_B__23_0_OFFSET UNITYSDK_OFFSET(0xB02B70)
#define UIMULTISWEEPSTAGESORT_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0xB02C60)
#define UIMULTISWEEPSTAGESORT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB02C80)
#define UIMULTISWEEPSTAGESORT__ONCLICKSORT_B__23_1_OFFSET UNITYSDK_OFFSET(0xB02E90)
#define UIMULTISWEEPSTAGESORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB02EB0)
#define UIMULTISWEEPSTAGESORT_RESETFILTER_OFFSET UNITYSDK_OFFSET(0xB02FD0)
#define UIMULTISWEEPSTAGESORT_SORT_OFFSET UNITYSDK_OFFSET(0xB02850)
#define UIMULTISWEEPSTAGESORT_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0xB031F0)
#define UIMULTISWEEPSTAGESORT_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB03350)
#define UIMULTISWEEPSTAGESORT_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB03360)
#define UIMULTISWEEPSTAGESORT_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB03370)

	inline static constexpr unsigned int UIMultiSweepStageSort_TypeDefinitionIndex = 8183;

	class UIMultiSweepStageSort : public Il2CppObject
	{
	public:
		SortingRule* _SortingRule_k__BackingField; // 0x18
		SortingOrder* _SortingOrder_k__BackingField; // 0x1C
		Il2CppObject* onSort; // 0x20
		Il2CppObject* sortingList; // 0x28
		Il2CppObject* allMultiSweepStage; // 0x30
		MXButton* sortButton; // 0x38
		MXButton* orderButton; // 0x40
		::UnityEngine::GameObject* descendingIcon; // 0x48
		::UnityEngine::GameObject* ascendingIcon; // 0x50
		::UnityEngine::GameObject* filterOn; // 0x58
		::UnityEngine::GameObject* filterOff; // 0x60
		::System::Boolean isWillSaveData; // 0x68

		::System::Void RefreshSort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_REFRESHSORT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__23_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT__ONCLICKSORT_B__23_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__23_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT__ONCLICKSORT_B__23_1_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2, SortingRule* arg3, SortingOrder* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, SortingRule*, SortingOrder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void ResetFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_RESETFILTER_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_ONCLICKSORT_OFFSET))(nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTISWEEPSTAGESORT_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

	};

