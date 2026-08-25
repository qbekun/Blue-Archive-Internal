#pragma once
#include "../../unitysdk.h"

#define SYSTEM_LINQ_SET`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_SET`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_SET`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_SET`1_FIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_SET`1_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_SET`1_INTERNALGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq
{
	inline static constexpr unsigned int Set`1_TypeDefinitionIndex = 32963;

	class Set`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* buckets; // 0x0
		::Il2CppArray<::System::Object*>* slots; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 freeList; // 0x0
		Il2CppObject* comparer; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_SET`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Add(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_SET`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_SET`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Find(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_SET`1_FIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Resize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_SET`1_RESIZE_OFFSET))(nullptr);
		}

		::System::Int32 InternalGetHashCode(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_SET`1_INTERNALGETHASHCODE_OFFSET))(arg, nullptr);
		}

	};
}

