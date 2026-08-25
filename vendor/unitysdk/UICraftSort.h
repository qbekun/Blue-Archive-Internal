#pragma once
#include "unitysdk.h"

namespace MX::Data { class CraftType; }
class SortingRule;
class SortingOrder;
class CraftFilter;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIPopup_FilterSort;

#define UICRAFTSORT_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xAF8660)
#define UICRAFTSORT_AWAKE_OFFSET UNITYSDK_OFFSET(0xAF8670)
#define UICRAFTSORT_ONCLICKFILTERSORT_OFFSET UNITYSDK_OFFSET(0xAF8880)
#define UICRAFTSORT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF8A20)
#define UICRAFTSORT__ONCLICKFILTERSORT_B__28_1_OFFSET UNITYSDK_OFFSET(0xAF8A40)
#define UICRAFTSORT_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xAF9330)
#define UICRAFTSORT_GETOFFENUMFLAG_OFFSET UNITYSDK_OFFSET(0xAF9340)
#define UICRAFTSORT_SET_CRAFTFILTER_OFFSET UNITYSDK_OFFSET(0xAF96A0)
#define UICRAFTSORT__ONCLICKFILTERSORT_B__28_0_OFFSET UNITYSDK_OFFSET(0xAF96B0)
#define UICRAFTSORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF98B0)
#define UICRAFTSORT_GET_CRAFTFILTER_OFFSET UNITYSDK_OFFSET(0xAF9930)
#define UICRAFTSORT_SORT_OFFSET UNITYSDK_OFFSET(0xAF8AA0)
#define UICRAFTSORT_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xAF9940)
#define UICRAFTSORT_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0xAF9950)
#define UICRAFTSORT_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xAF9970)

	inline static constexpr unsigned int UICraftSort_TypeDefinitionIndex = 8154;

	class UICraftSort : public Il2CppObject
	{
	public:
		Il2CppObject* onSort; // 0x18
		Il2CppObject* sortingList; // 0x20
		::MX::Data::CraftType* craftType; // 0x28
		SortingRule* _SortingRule_k__BackingField; // 0x2C
		SortingOrder* _SortingOrder_k__BackingField; // 0x30
		CraftFilter* _CraftFilter_k__BackingField; // 0x34
		Il2CppObject* allItems; // 0x38
		MXButton* sortButton; // 0x40
		MXButton* orderButton; // 0x48
		UILabel* sortLabelType1; // 0x50
		UILabel* sortLabelType2; // 0x58
		::UnityEngine::GameObject* sortType1; // 0x60
		::UnityEngine::GameObject* sortType2; // 0x68
		::UnityEngine::GameObject* descendingIcon; // 0x70
		::UnityEngine::GameObject* ascendingIcon; // 0x78
		::UnityEngine::GameObject* filterOn; // 0x80
		::UnityEngine::GameObject* filterOff; // 0x88

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickFilterSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_ONCLICKFILTERSORT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickFilterSort_b__28_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT__ONCLICKFILTERSORT_B__28_1_OFFSET))(arg, nullptr);
		}

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		CraftFilter* GetOffEnumFlag(CraftFilter* arg)
		{
			return ((CraftFilter*(*)(CraftFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_GETOFFENUMFLAG_OFFSET))(arg, nullptr);
		}

		::System::Void set_CraftFilter(CraftFilter* arg)
		{
			((::System::Void(*)(CraftFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_SET_CRAFTFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickFilterSort_b__28_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT__ONCLICKFILTERSORT_B__28_0_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Data::CraftType* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, SortingRule* arg5, SortingOrder* arg6)
		{
			((::System::Void(*)(::MX::Data::CraftType*, Il2CppObject*, Il2CppObject*, Il2CppObject*, SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		CraftFilter* get_CraftFilter()
		{
			return ((CraftFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_GET_CRAFTFILTER_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_SORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_ONCLICKORDER_OFFSET))(nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSORT_GET_SORTINGRULE_OFFSET))(nullptr);
		}

	};

