#pragma once
#include "../../../../unitysdk.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVESLICEUNSAFEUTILITY_CONVERTEXISTINGDATATONATIVESLICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVESLICEUNSAFEUTILITY_GETUNSAFEPTR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVESLICEUNSAFEUTILITY_GETUNSAFEREADONLYPTR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeSliceUnsafeUtility_TypeDefinitionIndex = 30923;

	class NativeSliceUnsafeUtility : public Il2CppObject
	{
	public:
		Il2CppObject* ConvertExistingDataToNativeSlice(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVESLICEUNSAFEUTILITY_CONVERTEXISTINGDATATONATIVESLICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object** GetUnsafePtr(Il2CppObject* arg)
		{
			return (return (::System::Object**(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVESLICEUNSAFEUTILITY_GETUNSAFEPTR_OFFSET))(arg, nullptr);
		}

		::System::Object** GetUnsafeReadOnlyPtr(Il2CppObject* arg)
		{
			return (return (::System::Object**(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVESLICEUNSAFEUTILITY_GETUNSAFEREADONLYPTR_OFFSET))(arg, nullptr);
		}

	};
}

