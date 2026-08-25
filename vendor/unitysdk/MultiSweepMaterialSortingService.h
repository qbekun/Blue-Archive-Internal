#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;

#define MULTISWEEPMATERIALSORTINGSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD1720)
#define MULTISWEEPMATERIALSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FD1870)
#define MULTISWEEPMATERIALSORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1FD1980)
#define MULTISWEEPMATERIALSORTINGSERVICE_GET_MULTISWEEPMATERIALSORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FD19A0)
#define MULTISWEEPMATERIALSORTINGSERVICE_GETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1FD19F0)

	inline static constexpr unsigned int MultiSweepMaterialSortingService_TypeDefinitionIndex = 3018;

	class MultiSweepMaterialSortingService : public Il2CppObject
	{
	public:
		Il2CppObject* multiSweepMaterialSortingList; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPMATERIALSORTINGSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPMATERIALSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		SortingOrder* GetDefaultSortingOrder(SortingRule* arg, ::System::Boolean arg2)
		{
			return ((SortingOrder*(*)(SortingRule*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPMATERIALSORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_MultiSweepMaterialSortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPMATERIALSORTINGSERVICE_GET_MULTISWEEPMATERIALSORTINGLIST_OFFSET))(nullptr);
		}

		Il2CppObject* GetSortingRule(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPMATERIALSORTINGSERVICE_GETSORTINGRULE_OFFSET))(arg, nullptr);
		}

	};

