#pragma once
#include "../../../../unitysdk.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVELISTUNSAFEUTILITY_GETUNSAFEPTR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeListUnsafeUtility_TypeDefinitionIndex = 37053;

	class NativeListUnsafeUtility : public Il2CppObject
	{
	public:
		::System::Object** GetUnsafePtr(Il2CppObject* arg)
		{
			return (return (::System::Object**(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_NATIVELISTUNSAFEUTILITY_GETUNSAFEPTR_OFFSET))(arg, nullptr);
		}

	};
}

