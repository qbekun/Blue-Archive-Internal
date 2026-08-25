#pragma once
#include "unitysdk.h"

#define ORDEREDDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_GETKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ILIST_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ILIST_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ILIST_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ILIST_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_TKEY_TVALUE_.GET_KEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_TKEY_TVALUE_.GET_VALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int OrderedDictionary`2_TypeDefinitionIndex = 3558;

	class OrderedDictionary`2 : public Il2CppObject
	{
	public:
		Il2CppObject* dictionary; // 0x0
		Il2CppObject* keys; // 0x0
		Il2CppObject* values; // 0x0
		::System::Int32 version; // 0x0
		::System::String* CollectionModifiedMessage; // 0x0
		::System::String* EditReadOnlyListMessage; // 0x0
		::System::String* IndexOutOfRangeMessage; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_Comparer()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_GET_COMPARER_OFFSET))(nullptr);
		}

		::System::Void Add(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_INSERT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ContainsKey(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_CONTAINSKEY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetKey(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_GETKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_INDEXOF_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Keys()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_TRYGETVALUE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_Values()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_GET_VALUES_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_Item(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.Generic.IList_System.Collections.Generic.KeyValuePair_TKey_TValue__.IndexOf(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ILIST_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.IList_System.Collections.Generic.KeyValuePair_TKey_TValue__.Insert(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ILIST_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.INSERT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IList_System.Collections.Generic.KeyValuePair_TKey_TValue__.get_Item(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ILIST_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.IList_System.Collections.Generic.KeyValuePair_TKey_TValue__.set_Item(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ILIST_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.SET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IDictionary_TKey_TValue_.get_Keys()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_TKEY_TVALUE_.GET_KEYS_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IDictionary_TKey_TValue_.get_Values()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_TKEY_TVALUE_.GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_TKey_TValue__.Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_TKey_TValue__.Contains(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_TKey_TValue__.CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.COPYTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_TKey_TValue__.get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_TKey_TValue__.Remove(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARY`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

