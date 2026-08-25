#pragma once
#include "unitysdk.h"

#define SORTEROBJECTARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x938D750)
#define SORTEROBJECTARRAY_SWAPIFGREATERWITHITEMS_OFFSET UNITYSDK_OFFSET(0x938D7F0)
#define SORTEROBJECTARRAY_SWAP_OFFSET UNITYSDK_OFFSET(0x938DA70)
#define SORTEROBJECTARRAY_SORT_OFFSET UNITYSDK_OFFSET(0x938DC30)
#define SORTEROBJECTARRAY_INTROSPECTIVESORT_OFFSET UNITYSDK_OFFSET(0x938DC40)
#define SORTEROBJECTARRAY_INTROSORT_OFFSET UNITYSDK_OFFSET(0x938DDD0)
#define SORTEROBJECTARRAY_PICKPIVOTANDPARTITION_OFFSET UNITYSDK_OFFSET(0x938E310)
#define SORTEROBJECTARRAY_HEAPSORT_OFFSET UNITYSDK_OFFSET(0x938E270)
#define SORTEROBJECTARRAY_DOWNHEAP_OFFSET UNITYSDK_OFFSET(0x938E560)
#define SORTEROBJECTARRAY_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0x938DF40)

	inline static constexpr unsigned int SorterObjectArray_TypeDefinitionIndex = 23903;

	class SorterObjectArray : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* keys; // 0x10
		::Il2CppArray<::System::Object*>* items; // 0x18
		::System::Collections::IComparer* comparer; // 0x20

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SORTEROBJECTARRAY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SwapIfGreaterWithItems(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTEROBJECTARRAY_SWAPIFGREATERWITHITEMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Swap(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTEROBJECTARRAY_SWAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Sort(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTEROBJECTARRAY_SORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IntrospectiveSort(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTEROBJECTARRAY_INTROSPECTIVESORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IntroSort(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTEROBJECTARRAY_INTROSORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 PickPivotAndPartition(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTEROBJECTARRAY_PICKPIVOTANDPARTITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Heapsort(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTEROBJECTARRAY_HEAPSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DownHeap(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTEROBJECTARRAY_DOWNHEAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InsertionSort(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTEROBJECTARRAY_INSERTIONSORT_OFFSET))(arg, arg, nullptr);
		}

	};

