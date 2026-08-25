#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_COLLECTIONHELPER_HASH_OFFSET UNITYSDK_OFFSET(0x9E38800)
#define UNITY_COLLECTIONS_COLLECTIONHELPER_SHOULDDEALLOCATE_OFFSET UNITYSDK_OFFSET(0x9E388A0)
#define UNITY_COLLECTIONS_COLLECTIONHELPER_ASSUMEPOSITIVE_OFFSET UNITYSDK_OFFSET(0x9E388B0)

namespace Unity::Collections
{
	inline static constexpr unsigned int CollectionHelper_TypeDefinitionIndex = 37019;

	class CollectionHelper : public Il2CppObject
	{
	public:
		::System::UInt32 Hash(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_COLLECTIONHELPER_HASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldDeallocate(AllocatorHandle* arg)
		{
			return (return (::System::Boolean(*)(AllocatorHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_COLLECTIONHELPER_SHOULDDEALLOCATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 AssumePositive(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_COLLECTIONHELPER_ASSUMEPOSITIVE_OFFSET))(arg, nullptr);
		}

	};
}

