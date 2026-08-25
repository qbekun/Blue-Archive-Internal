#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_SORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_BINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_SORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_INTERNALBINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_SWAPIFGREATER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_SWAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_INTROSPECTIVESORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_INTROSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_PICKPIVOTANDPARTITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_HEAPSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_DOWNHEAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ArraySortHelper`1_TypeDefinitionIndex = 25171;

	class ArraySortHelper`1 : public Il2CppObject
	{
	public:
		Il2CppObject* s_defaultArraySortHelper; // 0x0

		::System::Void Sort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_SORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 BinarySearch(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_BINARYSEARCH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Sort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_SORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 InternalBinarySearch(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_INTERNALBINARYSEARCH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SwapIfGreater(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_SWAPIFGREATER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Swap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_SWAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void IntrospectiveSort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_INTROSPECTIVESORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void IntroSort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_INTROSORT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 PickPivotAndPartition(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_PICKPIVOTANDPARTITION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Heapsort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_HEAPSORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DownHeap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_DOWNHEAP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InsertionSort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_INSERTIONSORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* get_Default()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_ARRAYSORTHELPER`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

