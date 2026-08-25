#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_FIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_UNCHECKEDADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_EXPANDBUCKETS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_GETBUCKET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int LowLevelDictionary`2_TypeDefinitionIndex = 25157;

	class LowLevelDictionary`2 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _buckets; // 0x0
		::System::Int32 _numEntries; // 0x0
		::System::Int32 _version; // 0x0
		Il2CppObject* _comparer; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Item(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Find(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_FIND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* UncheckedAdd(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_UNCHECKEDADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExpandBuckets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_EXPANDBUCKETS_OFFSET))(nullptr);
		}

		::System::Int32 GetBucket(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LOWLEVELDICTIONARY`2_GETBUCKET_OFFSET))(arg, arg, nullptr);
		}

	};
}

