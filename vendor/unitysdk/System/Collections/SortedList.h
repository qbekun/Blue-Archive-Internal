#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_SORTEDLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CC570)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INIT_OFFSET UNITYSDK_OFFSET(0x92CC590)
#define SYSTEM_COLLECTIONS_SORTEDLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CC750)
#define SYSTEM_COLLECTIONS_SORTEDLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CC8B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_ADD_OFFSET UNITYSDK_OFFSET(0x92CC900)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x92CCBD0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92CCE60)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x92CCE70)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x92CCE90)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x92CCEB0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x92CCEC0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92CCED0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92CCEE0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x92CCF50)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x92CCF90)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x92CD050)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x92CD080)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x92CD0B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x92CD0E0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x92CD3A0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETBYINDEX_OFFSET UNITYSDK_OFFSET(0x92CD400)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92CD4B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92CD5A0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETKEY_OFFSET UNITYSDK_OFFSET(0x92CD630)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETKEYLIST_OFFSET UNITYSDK_OFFSET(0x92CD6E0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETVALUELIST_OFFSET UNITYSDK_OFFSET(0x92CD7A0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x92CD860)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x92CD8B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0x92CD9E0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFVALUE_OFFSET UNITYSDK_OFFSET(0x92CDA90)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x92CCA40)
#define SYSTEM_COLLECTIONS_SORTEDLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x92CDAE0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x92CDC40)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92CDC90)

namespace System::Collections
{
	inline static constexpr unsigned int SortedList_TypeDefinitionIndex = 25080;

	class SortedList : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* keys; // 0x10
		::Il2CppArray<::System::Object*>* values; // 0x18
		::System::Int32 _size; // 0x20
		::System::Int32 version; // 0x24
		::System::Collections::IComparer* comparer; // 0x28
		KeyList* keyList; // 0x30
		ValueList* valueList; // 0x38
		::System::Object* _syncRoot; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Values()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsKey(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINSKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINSVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnsureCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_ENSURECAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Object* GetByIndex(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Object* GetKey(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETKEY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* GetKeyList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETKEYLIST_OFFSET))(nullptr);
		}

		::System::Collections::IList* GetValueList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETVALUELIST_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOfKey(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOfValue(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INSERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Collections::SortedList* Synchronized(::System::Collections::SortedList* arg)
		{
			return (return (::System::Collections::SortedList*(*)(::System::Collections::SortedList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCHRONIZED_OFFSET))(arg, nullptr);
		}

	};
}

