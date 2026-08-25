#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingOrder;

#define FRIENDSORTINGSERVICE_SORT_OFFSET UNITYSDK_OFFSET(0x1FCA0B0)
#define FRIENDSORTINGSERVICE_GETDEFAULTFRIENDSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1FCA1A0)

	inline static constexpr unsigned int FriendSortingService_TypeDefinitionIndex = 2982;

	class FriendSortingService : public Il2CppObject
	{
	public:
		::System::Void Sort(SortingRule* arg, SortingOrder* arg2, Il2CppObject&* arg3)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDSORTINGSERVICE_SORT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		SortingOrder* GetDefaultFriendSortingOrder(SortingRule* arg)
		{
			return ((SortingOrder*(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDSORTINGSERVICE_GETDEFAULTFRIENDSORTINGORDER_OFFSET))(arg, nullptr);
		}

	};

