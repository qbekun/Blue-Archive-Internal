#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_GET_LAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDBEFORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDBEFORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDFIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDFIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDLAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDLAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_FIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_REMOVEFIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_REMOVELAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_INTERNALINSERTNODEBEFORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_INTERNALINSERTNODETOEMPTYLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_INTERNALREMOVENODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_VALIDATENEWNODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_VALIDATENODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int LinkedList`1_TypeDefinitionIndex = 29591;

	class LinkedList`1 : public Il2CppObject
	{
	public:
		Il2CppObject* head; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 version; // 0x0
		::System::Object* _syncRoot; // 0x0
		::System::Runtime::Serialization::SerializationInfo* _siInfo; // 0x0
		::System::String* VersionName; // 0x0
		::System::String* CountName; // 0x0
		::System::String* ValuesName; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_First()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_GET_FIRST_OFFSET))(nullptr);
		}

		Il2CppObject* get_Last()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_GET_LAST_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_T_.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_T_.Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.ADD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AddBefore(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDBEFORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBefore(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDBEFORE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* AddFirst(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDFIRST_OFFSET))(arg, nullptr);
		}

		::System::Void AddFirst(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDFIRST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AddLast(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDLAST_OFFSET))(arg, nullptr);
		}

		::System::Void AddLast(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ADDLAST_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Find(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_FIND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_T_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveFirst()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_REMOVEFIRST_OFFSET))(nullptr);
		}

		::System::Void RemoveLast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_REMOVELAST_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void InternalInsertNodeBefore(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_INTERNALINSERTNODEBEFORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalInsertNodeToEmptyList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_INTERNALINSERTNODETOEMPTYLIST_OFFSET))(arg, nullptr);
		}

		::System::Void InternalRemoveNode(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_INTERNALREMOVENODE_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateNewNode(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_VALIDATENEWNODE_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateNode(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_VALIDATENODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_LINKEDLIST`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

