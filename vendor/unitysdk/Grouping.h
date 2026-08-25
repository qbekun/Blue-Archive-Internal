#pragma once
#include "unitysdk.h"

#define GROUPING_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ILIST_TELEMENT_.INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ILIST_TELEMENT_.INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ILIST_TELEMENT_.REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ILIST_TELEMENT_.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_SYSTEM.COLLECTIONS.GENERIC.ILIST_TELEMENT_.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Grouping_TypeDefinitionIndex = 32958;

	class Grouping : public Il2CppObject
	{
	public:
		Il2CppObject* key; // 0x0
		::System::Int32 hashCode; // 0x0
		::Il2CppArray<::System::Object*>* elements; // 0x0
		::System::Int32 count; // 0x0
		Il2CppObject* hashNext; // 0x0
		Il2CppObject* next; // 0x0

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPING_ADD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPING_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Key()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPING_GET_KEY_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.Generic.ICollection_TElement_.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_TElement_.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_TElement_.Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.ADD_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_TElement_.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_TElement_.Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_TElement_.CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_TElement_.Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_TELEMENT_.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.Generic.IList_TElement_.IndexOf(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ILIST_TELEMENT_.INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.IList_TElement_.Insert(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ILIST_TELEMENT_.INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.Generic.IList_TElement_.RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ILIST_TELEMENT_.REMOVEAT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IList_TElement_.get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ILIST_TELEMENT_.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.IList_TElement_.set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPING_SYSTEM.COLLECTIONS.GENERIC.ILIST_TELEMENT_.SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPING_.CTOR_OFFSET))(nullptr);
		}

	};

