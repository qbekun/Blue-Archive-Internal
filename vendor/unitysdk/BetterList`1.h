#pragma once
#include "unitysdk.h"

#define BETTERLIST`1_POP_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_TRIM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_SORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BETTERLIST`1_ALLOCATEMORE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int BetterList`1_TypeDefinitionIndex = 93;

	class BetterList`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* buffer; // 0x0
		::System::Int32 size; // 0x0

		Il2CppObject* Pop()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_POP_OFFSET))(nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_SET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_INSERT_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_TOARRAY_OFFSET))(nullptr);
		}

		::System::Void Trim()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_TRIM_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Sort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_SORT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_RELEASE_OFFSET))(nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_CLEAR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void AllocateMore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BETTERLIST`1_ALLOCATEMORE_OFFSET))(nullptr);
		}

	};

