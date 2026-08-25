#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int LinkedListNode`1_TypeDefinitionIndex = 29592;

	class LinkedListNode`1 : public Il2CppObject
	{
	public:
		Il2CppObject* list; // 0x0
		Il2CppObject* next; // 0x0
		Il2CppObject* prev; // 0x0
		Il2CppObject* item; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Next()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_GET_NEXT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Previous()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_GET_PREVIOUS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Invalidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLISTNODE`1_INVALIDATE_OFFSET))(nullptr);
		}

	};
}

