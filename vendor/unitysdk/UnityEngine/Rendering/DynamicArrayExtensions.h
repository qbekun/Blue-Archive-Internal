#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_DYNAMICARRAYEXTENSIONS_PARTITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAYEXTENSIONS_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAYEXTENSIONS_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicArrayExtensions_TypeDefinitionIndex = 33900;

	class DynamicArrayExtensions : public Il2CppObject
	{
	public:
		::System::Int32 Partition(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAYEXTENSIONS_PARTITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void QuickSort(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAYEXTENSIONS_QUICKSORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void QuickSort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAYEXTENSIONS_QUICKSORT_OFFSET))(arg, nullptr);
		}

	};
}

