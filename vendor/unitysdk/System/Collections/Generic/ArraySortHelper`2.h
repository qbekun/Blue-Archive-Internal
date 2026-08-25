#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_SORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_SWAPIFGREATERWITHITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_SWAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_INTROSPECTIVESORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_INTROSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_PICKPIVOTANDPARTITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_HEAPSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_DOWNHEAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ArraySortHelper`2_TypeDefinitionIndex = 25172;

	class ArraySortHelper`2 : public Il2CppObject
	{
	public:
		Il2CppObject* s_defaultArraySortHelper; // 0x0

		::System::Void Sort(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_SORT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SwapIfGreaterWithItems(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_SWAPIFGREATERWITHITEMS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Swap(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_SWAP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void IntrospectiveSort(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_INTROSPECTIVESORT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void IntroSort(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_INTROSORT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 PickPivotAndPartition(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_PICKPIVOTANDPARTITION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Heapsort(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_HEAPSORT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DownHeap(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_DOWNHEAP_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InsertionSort(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_INSERTIONSORT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* get_Default()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`2_.CCTOR_OFFSET))(nullptr);
		}

	};
}

