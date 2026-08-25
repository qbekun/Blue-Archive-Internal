#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_COLLECTIONBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CA480)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_INNERLIST_OFFSET UNITYSDK_OFFSET(0x92CA5A0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_LIST_OFFSET UNITYSDK_OFFSET(0x92CA5B0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92CA5C0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x92CA5F0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x92CA650)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x92CA860)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x92CA890)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92CA8C0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92CA8F0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x92CA920)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x92CA950)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x92CAA10)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET UNITYSDK_OFFSET(0x92CAC40)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET UNITYSDK_OFFSET(0x92CAC70)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET UNITYSDK_OFFSET(0x92CADD0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET UNITYSDK_OFFSET(0x92CAFA0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET UNITYSDK_OFFSET(0x92CAFD0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92CB1C0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONSET_OFFSET UNITYSDK_OFFSET(0x92CB1F0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONINSERT_OFFSET UNITYSDK_OFFSET(0x92CB200)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x92CB210)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x92CB220)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x92CB230)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONSETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x92CB2A0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONINSERTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x92CB2B0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONCLEARCOMPLETE_OFFSET UNITYSDK_OFFSET(0x92CB2C0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONREMOVECOMPLETE_OFFSET UNITYSDK_OFFSET(0x92CB2D0)

namespace System::Collections
{
	inline static constexpr unsigned int CollectionBase_TypeDefinitionIndex = 25070;

	class CollectionBase : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* _list; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_InnerList()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_INNERLIST_OFFSET))(nullptr);
		}

		::System::Collections::IList* get_List()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_LIST_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IList.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IList.get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* System.Collections.IList.get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.IList.Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.IList.Add(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.IList.IndexOf(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.Insert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void OnSet(::System::Int32 arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnInsert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONINSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONCLEAR_OFFSET))(nullptr);
		}

		::System::Void OnRemove(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONREMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnValidate(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONVALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSetComplete(::System::Int32 arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONSETCOMPLETE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnInsertComplete(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONINSERTCOMPLETE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnClearComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONCLEARCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void OnRemoveComplete(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONREMOVECOMPLETE_OFFSET))(arg, arg, nullptr);
		}

	};
}

