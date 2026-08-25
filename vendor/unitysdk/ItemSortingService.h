#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;

#define ITEMSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FCFA60)
#define ITEMSORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1FCFB80)
#define ITEMSORTINGSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCFBA0)
#define ITEMSORTINGSERVICE_GET_ITEMINVENTORYSORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FCFD90)
#define ITEMSORTINGSERVICE_GETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1FCFDE0)

	inline static constexpr unsigned int ItemSortingService_TypeDefinitionIndex = 3010;

	class ItemSortingService : public Il2CppObject
	{
	public:
		Il2CppObject* itemInventorySortingList; // 0x0

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		SortingOrder* GetDefaultSortingOrder(SortingRule* arg, ::System::Boolean arg2)
		{
			return ((SortingOrder*(*)(SortingRule*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ITEMSORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMSORTINGSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ItemInventorySortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMSORTINGSERVICE_GET_ITEMINVENTORYSORTINGLIST_OFFSET))(nullptr);
		}

		Il2CppObject* GetSortingRule(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMSORTINGSERVICE_GETSORTINGRULE_OFFSET))(arg, nullptr);
		}

	};

