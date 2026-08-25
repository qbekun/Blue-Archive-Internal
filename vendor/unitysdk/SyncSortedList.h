#pragma once
#include "unitysdk.h"

#define SYNCSORTEDLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CDD80)
#define SYNCSORTEDLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92CDDF0)
#define SYNCSORTEDLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92CDF10)
#define SYNCSORTEDLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x92CDF20)
#define SYNCSORTEDLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x92CDF50)
#define SYNCSORTEDLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92CDF80)
#define SYNCSORTEDLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x92CDF90)
#define SYNCSORTEDLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x92CE0C0)
#define SYNCSORTEDLIST_ADD_OFFSET UNITYSDK_OFFSET(0x92CE1E0)
#define SYNCSORTEDLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x92CE300)
#define SYNCSORTEDLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x92CE400)
#define SYNCSORTEDLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x92CE530)
#define SYNCSORTEDLIST_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x92CE660)
#define SYNCSORTEDLIST_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x92CE790)
#define SYNCSORTEDLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x92CE8C0)
#define SYNCSORTEDLIST_GETBYINDEX_OFFSET UNITYSDK_OFFSET(0x92CE9E0)
#define SYNCSORTEDLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92CEB10)
#define SYNCSORTEDLIST_GETKEY_OFFSET UNITYSDK_OFFSET(0x92CEC40)
#define SYNCSORTEDLIST_GETKEYLIST_OFFSET UNITYSDK_OFFSET(0x92CED70)
#define SYNCSORTEDLIST_GETVALUELIST_OFFSET UNITYSDK_OFFSET(0x92CEEA0)
#define SYNCSORTEDLIST_INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0x92CEFD0)
#define SYNCSORTEDLIST_INDEXOFVALUE_OFFSET UNITYSDK_OFFSET(0x92CF170)
#define SYNCSORTEDLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x92CF2A0)
#define SYNCSORTEDLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x92CF3B0)

	inline static constexpr unsigned int SyncSortedList_TypeDefinitionIndex = 25075;

	class SyncSortedList : public Il2CppObject
	{
	public:
		::System::Collections::SortedList* _list; // 0x48
		::System::Object* _root; // 0x50

		::System::Void .ctor(::System::Collections::SortedList* arg)
		{
			((::System::Void(*)(::System::Collections::SortedList*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsKey(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_CONTAINSKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_CONTAINSVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetByIndex(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_GETBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Object* GetKey(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_GETKEY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* GetKeyList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_GETKEYLIST_OFFSET))(nullptr);
		}

		::System::Collections::IList* GetValueList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_GETVALUELIST_OFFSET))(nullptr);
		}

		::System::Int32 IndexOfKey(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_INDEXOFKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOfValue(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_INDEXOFVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCSORTEDLIST_REMOVE_OFFSET))(arg, nullptr);
		}

	};

