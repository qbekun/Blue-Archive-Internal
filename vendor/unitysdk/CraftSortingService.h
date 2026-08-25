#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;
class CraftFilter;
class ShiftingCraftRecipeFilter;
namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }
class AssetObjectBase;

#define CRAFTSORTINGSERVICE_GET_CRAFTINVENTORYSORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FC3B50)
#define CRAFTSORTINGSERVICE_GET_SHIFTINGRECIPESORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FC3BA0)
#define CRAFTSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FC3BF0)
#define CRAFTSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FC4C90)
#define CRAFTSORTINGSERVICE_ADDSORTITEM_OFFSET UNITYSDK_OFFSET(0x1FC42D0)
#define CRAFTSORTINGSERVICE_ADDSORTFURNITURE_OFFSET UNITYSDK_OFFSET(0x1FC4B20)
#define CRAFTSORTINGSERVICE_ADDSORTEUIPMENT_OFFSET UNITYSDK_OFFSET(0x1FC4520)
#define CRAFTSORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1FC42C0)
#define CRAFTSORTINGSERVICE_GETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1FC4DA0)
#define CRAFTSORTINGSERVICE_APPLYFILTER_OFFSET UNITYSDK_OFFSET(0x1FC4E20)
#define CRAFTSORTINGSERVICE_APPLYFILTER_OFFSET UNITYSDK_OFFSET(0x1FC4F00)
#define CRAFTSORTINGSERVICE_CONTAINSFILTER_OFFSET UNITYSDK_OFFSET(0x1FC4FE0)
#define CRAFTSORTINGSERVICE_CONTAINSFILTER_OFFSET UNITYSDK_OFFSET(0x1FC5570)
#define CRAFTSORTINGSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC5770)
#define CRAFTSORTINGSERVICE__ADDSORTITEM_G__ISNOTSORTFIRSTITEM|9_2_OFFSET UNITYSDK_OFFSET(0x1FC5A00)

	inline static constexpr unsigned int CraftSortingService_TypeDefinitionIndex = 2966;

	class CraftSortingService : public Il2CppObject
	{
	public:
		Il2CppObject* craftInventorySortingList; // 0x0
		Il2CppObject* shiftingRecipeSortingList; // 0x8
		::System::Int32 isSame; // 0x0

		Il2CppObject* get_CraftInventorySortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_GET_CRAFTINVENTORYSORTINGLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShiftingRecipeSortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_GET_SHIFTINGRECIPESORTINGLIST_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddSortItem(Il2CppObject&* arg, Il2CppObject* arg2, SortingRule* arg3)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_ADDSORTITEM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddSortFurniture(Il2CppObject&* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_ADDSORTFURNITURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSortEuipment(Il2CppObject&* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_ADDSORTEUIPMENT_OFFSET))(arg, arg2, nullptr);
		}

		SortingOrder* GetDefaultSortingOrder(SortingRule* arg, ::System::Boolean arg2)
		{
			return ((SortingOrder*(*)(SortingRule*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetSortingRule(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_GETSORTINGRULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ApplyFilter(CraftFilter* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(CraftFilter*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_APPLYFILTER_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* ApplyFilter(ShiftingCraftRecipeFilter* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(ShiftingCraftRecipeFilter*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_APPLYFILTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ContainsFilter(ShiftingCraftRecipeFilter* arg, ::MX::Data::ShiftingCraftRecipeExcelInfo* arg2)
		{
			return ((::System::Boolean(*)(ShiftingCraftRecipeFilter*, ::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_CONTAINSFILTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ContainsFilter(CraftFilter* arg, AssetObjectBase* arg2)
		{
			return ((::System::Boolean(*)(CraftFilter*, AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_CONTAINSFILTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean _AddSortItem_g__IsNotSortFirstItem|9_2(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSORTINGSERVICE__ADDSORTITEM_G__ISNOTSORTFIRSTITEM|9_2_OFFSET))(arg, nullptr);
		}

	};

