#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DYNAMIC_UTILS_CACHEDICT`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_CACHEDICT`2_ALIGNSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_CACHEDICT`2_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_CACHEDICT`2_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_CACHEDICT`2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int CacheDict`2_TypeDefinitionIndex = 33571;

	class CacheDict`2 : public Il2CppObject
	{
	public:
		::System::Int32 _mask; // 0x0
		::Il2CppArray<::System::Object*>* _entries; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CACHEDICT`2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 AlignSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CACHEDICT`2_ALIGNSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CACHEDICT`2_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CACHEDICT`2_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Item(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_CACHEDICT`2_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

	};
}

