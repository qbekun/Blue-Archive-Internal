#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;

#define FURNITURESORTINGSERVICE_GET_FURNITURELISTSORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FCA260)
#define FURNITURESORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FCA2B0)
#define FURNITURESORTINGSERVICE_GETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1FCA400)
#define FURNITURESORTINGSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCA550)
#define FURNITURESORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1FCA3E0)

	inline static constexpr unsigned int FurnitureSortingService_TypeDefinitionIndex = 2984;

	class FurnitureSortingService : public Il2CppObject
	{
	public:
		Il2CppObject* furnitureListSortingList; // 0x0

		Il2CppObject* get_FurnitureListSortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURESORTINGSERVICE_GET_FURNITURELISTSORTINGLIST_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITURESORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetSortingRule(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITURESORTINGSERVICE_GETSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURESORTINGSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		SortingOrder* GetDefaultSortingOrder(SortingRule* arg, ::System::Boolean arg2)
		{
			return ((SortingOrder*(*)(SortingRule*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FURNITURESORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET))(arg, arg2, nullptr);
		}

	};

