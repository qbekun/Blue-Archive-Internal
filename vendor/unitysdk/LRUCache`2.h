#pragma once
#include "unitysdk.h"

#define LRUCACHE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define LRUCACHE`2_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define LRUCACHE`2_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define LRUCACHE`2_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int LRUCache`2_TypeDefinitionIndex = 3955;

	class LRUCache`2 : public Il2CppObject
	{
	public:
		::System::Int32 capacity; // 0x0
		Il2CppObject* cache; // 0x0
		Il2CppObject* list; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LRUCACHE`2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + LRUCACHE`2_TRYGETVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LRUCACHE`2_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LRUCACHE`2_CLEAR_OFFSET))(nullptr);
		}

	};

