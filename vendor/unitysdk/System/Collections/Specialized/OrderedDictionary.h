#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B82B50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B72B50)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B82B90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B82BD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B82C00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM.COLLECTIONS.IDICTIONARY.GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x9B82D10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9B82D20)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9B82D30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x9B82D40)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSARRAY_OFFSET UNITYSDK_OFFSET(0x9B82C90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSTABLE_OFFSET UNITYSDK_OFFSET(0x9B82E80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9B82F10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B72EE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B72B90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x9B73180)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x9B831E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x9B833D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9B72E30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x9B83550)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0x9B82F90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x9B72F90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B83600)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B83770)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9B83890)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x9B83A30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x9B83A50)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int OrderedDictionary_TypeDefinitionIndex = 29569;

	class OrderedDictionary : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* _objectsArray; // 0x10
		::System::Collections::Hashtable* _objectsTable; // 0x18
		::System::Int32 _initialCapacity; // 0x20
		::System::Collections::IEqualityComparer* _comparer; // 0x28
		::System::Boolean _readOnly; // 0x30
		::System::Object* _syncRoot; // 0x38
		::System::Runtime::Serialization::SerializationInfo* _siInfo; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Collections::IEqualityComparer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IDictionary.get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM.COLLECTIONS.IDICTIONARY.GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_objectsArray()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSARRAY_OFFSET))(nullptr);
		}

		::System::Collections::Hashtable* get_objectsTable()
		{
			return (return (::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_OBJECTSTABLE_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ICollection* get_Values()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOfKey(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_INDEXOFKEY_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_ORDEREDDICTIONARY_ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

	};
}

