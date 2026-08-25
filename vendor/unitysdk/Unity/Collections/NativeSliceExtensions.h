#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_NATIVESLICEEXTENSIONS_SLICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICEEXTENSIONS_SLICE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeSliceExtensions_TypeDefinitionIndex = 30906;

	class NativeSliceExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* Slice(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICEEXTENSIONS_SLICE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Slice(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICEEXTENSIONS_SLICE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

