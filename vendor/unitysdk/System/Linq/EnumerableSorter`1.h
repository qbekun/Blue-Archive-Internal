#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_ENUMERABLESORTER`1_COMPUTEKEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ENUMERABLESORTER`1_COMPAREKEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ENUMERABLESORTER`1_SORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ENUMERABLESORTER`1_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_ENUMERABLESORTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int EnumerableSorter`1_TypeDefinitionIndex = 32969;

	class EnumerableSorter`1 : public Il2CppObject
	{
	public:
		::System::Void ComputeKeys(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLESORTER`1_COMPUTEKEYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareKeys(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLESORTER`1_COMPAREKEYS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Sort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLESORTER`1_SORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void QuickSort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLESORTER`1_QUICKSORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_ENUMERABLESORTER`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

