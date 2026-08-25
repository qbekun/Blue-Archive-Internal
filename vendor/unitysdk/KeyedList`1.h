#pragma once
#include "unitysdk.h"

#define KEYEDLIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_ADDNEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_REMOVEATSWAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_REMOVESWAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define KEYEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int KeyedList`1_TypeDefinitionIndex = 35088;

	class KeyedList`1 : public Il2CppObject
	{
	public:
		::System::String* SingleUse; // 0x0
		::System::String* NotFound; // 0x0
		Il2CppObject* Items; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddNew(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_ADDNEW_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAtSwap(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_REMOVEATSWAP_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RemoveSwap(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_REMOVESWAP_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_T_.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.GET_ISREADONLY_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_T_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

	};

