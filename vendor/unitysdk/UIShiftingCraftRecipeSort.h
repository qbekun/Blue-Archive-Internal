#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;
class ShiftingCraftRecipeFilter;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIPopup_FilterSort;

#define UISHIFTINGCRAFTRECIPESORT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB08E70)
#define UISHIFTINGCRAFTRECIPESORT__ONCLICKSORT_B__27_0_OFFSET UNITYSDK_OFFSET(0xB08E90)
#define UISHIFTINGCRAFTRECIPESORT_GETOFFENUMFLAG_OFFSET UNITYSDK_OFFSET(0xB08F80)
#define UISHIFTINGCRAFTRECIPESORT_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB092E0)
#define UISHIFTINGCRAFTRECIPESORT_SET_RECIPEFILTER_OFFSET UNITYSDK_OFFSET(0xB092F0)
#define UISHIFTINGCRAFTRECIPESORT_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0xB09300)
#define UISHIFTINGCRAFTRECIPESORT_GET_RECIPEFILTER_OFFSET UNITYSDK_OFFSET(0xB09850)
#define UISHIFTINGCRAFTRECIPESORT__ONCLICKSORT_B__27_1_OFFSET UNITYSDK_OFFSET(0xB09860)
#define UISHIFTINGCRAFTRECIPESORT_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB098C0)
#define UISHIFTINGCRAFTRECIPESORT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB098D0)
#define UISHIFTINGCRAFTRECIPESORT_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0xB09AE0)
#define UISHIFTINGCRAFTRECIPESORT_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0xB09AF0)
#define UISHIFTINGCRAFTRECIPESORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB09C90)
#define UISHIFTINGCRAFTRECIPESORT_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0xB09DF0)
#define UISHIFTINGCRAFTRECIPESORT_SORT_OFFSET UNITYSDK_OFFSET(0xB09320)

	inline static constexpr unsigned int UIShiftingCraftRecipeSort_TypeDefinitionIndex = 8192;

	class UIShiftingCraftRecipeSort : public Il2CppObject
	{
	public:
		Il2CppObject* onSort; // 0x18
		Il2CppObject* sortingList; // 0x20
		SortingRule* _SortingRule_k__BackingField; // 0x28
		SortingOrder* _SortingOrder_k__BackingField; // 0x2C
		ShiftingCraftRecipeFilter* _RecipeFilter_k__BackingField; // 0x30
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

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__27_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT__ONCLICKSORT_B__27_0_OFFSET))(arg, nullptr);
		}

		ShiftingCraftRecipeFilter* GetOffEnumFlag(ShiftingCraftRecipeFilter* arg)
		{
			return ((ShiftingCraftRecipeFilter*(*)(ShiftingCraftRecipeFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_GETOFFENUMFLAG_OFFSET))(arg, nullptr);
		}

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void set_RecipeFilter(ShiftingCraftRecipeFilter* arg)
		{
			((::System::Void(*)(ShiftingCraftRecipeFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_SET_RECIPEFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_ONCLICKORDER_OFFSET))(nullptr);
		}

		ShiftingCraftRecipeFilter* get_RecipeFilter()
		{
			return ((ShiftingCraftRecipeFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_GET_RECIPEFILTER_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__27_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT__ONCLICKSORT_B__27_1_OFFSET))(arg, nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_ONCLICKSORT_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, SortingRule* arg4, SortingOrder* arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFTRECIPESORT_SORT_OFFSET))(arg, arg2, nullptr);
		}

	};

