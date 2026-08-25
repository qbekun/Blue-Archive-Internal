#pragma once
#include "../../../../unitysdk.h"

namespace Unity::Collections { class Allocator; }

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEARRAYUNSAFEUTILITY_CONVERTEXISTINGDATATONATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEARRAYUNSAFEUTILITY_GETUNSAFEPTR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEARRAYUNSAFEUTILITY_GETUNSAFEREADONLYPTR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEARRAYUNSAFEUTILITY_GETUNSAFEBUFFERPOINTERWITHOUTCHECKS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeArrayUnsafeUtility_TypeDefinitionIndex = 30922;

	class NativeArrayUnsafeUtility : public Il2CppObject
	{
	public:
		Il2CppObject* ConvertExistingDataToNativeArray(::System::Object** arg, ::System::Int32 arg, ::Unity::Collections::Allocator* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object**, ::System::Int32, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEARRAYUNSAFEUTILITY_CONVERTEXISTINGDATATONATIVEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object** GetUnsafePtr(Il2CppObject* arg)
		{
			return (return (::System::Object**(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEARRAYUNSAFEUTILITY_GETUNSAFEPTR_OFFSET))(arg, nullptr);
		}

		::System::Object** GetUnsafeReadOnlyPtr(Il2CppObject* arg)
		{
			return (return (::System::Object**(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEARRAYUNSAFEUTILITY_GETUNSAFEREADONLYPTR_OFFSET))(arg, nullptr);
		}

		::System::Object** GetUnsafeBufferPointerWithoutChecks(Il2CppObject* arg)
		{
			return (return (::System::Object**(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVEARRAYUNSAFEUTILITY_GETUNSAFEBUFFERPOINTERWITHOUTCHECKS_OFFSET))(arg, nullptr);
		}

	};
}

