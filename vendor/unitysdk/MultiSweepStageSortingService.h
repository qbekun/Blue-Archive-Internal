#pragma once
#include "unitysdk.h"

class SortingOrder;
class SortingRule;

#define MULTISWEEPSTAGESORTINGSERVICE_GET_MULTISWEEPSTAGESORTINGLIST_OFFSET UNITYSDK_OFFSET(0x1FD1C60)
#define MULTISWEEPSTAGESORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1FD1CB0)
#define MULTISWEEPSTAGESORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FD1CD0)
#define MULTISWEEPSTAGESORTINGSERVICE_GETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x1FD1DE0)
#define MULTISWEEPSTAGESORTINGSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD1E60)

	inline static constexpr unsigned int MultiSweepStageSortingService_TypeDefinitionIndex = 3020;

	class MultiSweepStageSortingService : public Il2CppObject
	{
	public:
		Il2CppObject* multiSweepStageSortingList; // 0x0

		Il2CppObject* get_MultiSweepStageSortingList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGESORTINGSERVICE_GET_MULTISWEEPSTAGESORTINGLIST_OFFSET))(nullptr);
		}

		SortingOrder* GetDefaultSortingOrder(SortingRule* arg, ::System::Boolean arg2)
		{
			return ((SortingOrder*(*)(SortingRule*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGESORTINGSERVICE_GETDEFAULTSORTINGORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGESORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetSortingRule(SortingRule* arg)
		{
			return ((Il2CppObject*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGESORTINGSERVICE_GETSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPSTAGESORTINGSERVICE_.CCTOR_OFFSET))(nullptr);
		}

	};

