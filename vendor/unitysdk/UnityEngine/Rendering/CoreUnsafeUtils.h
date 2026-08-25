#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_CALCULATERADIXPARAMS_OFFSET UNITYSDK_OFFSET(0x9FA7760)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_CALCULATERADIXSUPPORTSIZE_OFFSET UNITYSDK_OFFSET(0x9FA77E0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_CALCULATERADIXSORTSUPPORTARRAYS_OFFSET UNITYSDK_OFFSET(0x9FA77F0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_MERGESORT_OFFSET UNITYSDK_OFFSET(0x9FA7820)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_MERGESORT_OFFSET UNITYSDK_OFFSET(0x9FA7A20)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_MERGESORT_OFFSET UNITYSDK_OFFSET(0x9FA7B10)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0x9FA7C10)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0x9FA7C60)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_INSERTIONSORT_OFFSET UNITYSDK_OFFSET(0x9FA7D10)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_RADIXSORT_OFFSET UNITYSDK_OFFSET(0x9FA7DF0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_RADIXSORT_OFFSET UNITYSDK_OFFSET(0x9FA8070)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_RADIXSORT_OFFSET UNITYSDK_OFFSET(0x9FA81E0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x9FA8360)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_OFFSET UNITYSDK_OFFSET(0x9FA83C0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_OFFSET UNITYSDK_OFFSET(0x9FA8460)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_PARTITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_HAVEDUPLICATES_OFFSET UNITYSDK_OFFSET(0x9FA84B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUnsafeUtils_TypeDefinitionIndex = 33898;

	class CoreUnsafeUtils : public Il2CppObject
	{
	public:
		::System::Void CopyTo(Il2CppObject* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COPYTO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COPYTO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CalculateRadixParams(::System::Int32 arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_CALCULATERADIXPARAMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CalculateRadixSupportSize(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_CALCULATERADIXSUPPORTSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CalculateRadixSortSupportArrays(::System::Int32 arg, ::System::Int32 arg, ::System::Object** arg, ::System::Object*&* arg, ::System::Object*&* arg, ::System::Object*&* arg, ::System::Object*&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Object**, ::System::Object*&*, ::System::Object*&*, ::System::Object*&*, ::System::Object*&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_CALCULATERADIXSORTSUPPORTARRAYS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MergeSort(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_MERGESORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MergeSort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_MERGESORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MergeSort(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_MERGESORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InsertionSort(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_INSERTIONSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InsertionSort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_INSERTIONSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InsertionSort(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_INSERTIONSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RadixSort(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_RADIXSORT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RadixSort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Object[]&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Object[]&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_RADIXSORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RadixSort(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_RADIXSORT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void QuickSort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void QuickSort(::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void QuickSort(::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void QuickSort(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Object** arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_INDEXOF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CompareHashes(::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Object**, ::System::Object**, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CompareHashes(::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Object**, ::System::Object**, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CombineHashes(::System::Int32 arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CombineHashes(::System::Int32 arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Partition(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_PARTITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HaveDuplicates(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_HAVEDUPLICATES_OFFSET))(arg, nullptr);
		}

	};
}

