#pragma once
#include "unitysdk.h"

#define SORTERGENERICARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x938E960)
#define SORTERGENERICARRAY_SWAPIFGREATERWITHITEMS_OFFSET UNITYSDK_OFFSET(0x938EA00)
#define SORTERGENERICARRAY_SWAP_OFFSET UNITYSDK_OFFSET(0x938EBB0)
#define SORTERGENERICARRAY_SORT_OFFSET UNITYSDK_OFFSET(0x938EC90)
#define SORTERGENERICARRAY_INTROSPECTIVESORT_OFFSET UNITYSDK_OFFSET(0x938ECA0)
#define SORTERGENERICARRAY_INTROSORT_OFFSET UNITYSDK_OFFSET(0x938EE30)
#define SORTERGENERICARRAY_PICKPIVOTANDPARTITION_OFFSET UNITYSDK_OFFSET(0x938F240)
#define SORTERGENERICARRAY_HEAPSORT_OFFSET UNITYSDK_OFFSET(0x938F1A0)
#define SORTERGENERICARRAY_DOWNHEAP_OFFSET UNITYSDK_OFFSET(0x938F490)
#define SORTERGENERICARRAY_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0x938EFA0)

	inline static constexpr unsigned int SorterGenericArray_TypeDefinitionIndex = 23904;

	class SorterGenericArray : public Il2CppObject
	{
	public:
		::System::Array* keys; // 0x10
		::System::Array* items; // 0x18
		::System::Collections::IComparer* comparer; // 0x20

		::System::Void .ctor(::System::Array* arg, ::System::Array* arg, ::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SORTERGENERICARRAY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SwapIfGreaterWithItems(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTERGENERICARRAY_SWAPIFGREATERWITHITEMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Swap(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTERGENERICARRAY_SWAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Sort(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTERGENERICARRAY_SORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IntrospectiveSort(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTERGENERICARRAY_INTROSPECTIVESORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IntroSort(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTERGENERICARRAY_INTROSORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 PickPivotAndPartition(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTERGENERICARRAY_PICKPIVOTANDPARTITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Heapsort(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTERGENERICARRAY_HEAPSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DownHeap(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTERGENERICARRAY_DOWNHEAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InsertionSort(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SORTERGENERICARRAY_INSERTIONSORT_OFFSET))(arg, arg, nullptr);
		}

	};

