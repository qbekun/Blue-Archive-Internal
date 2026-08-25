#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_HASHTABLE_GET_SERIALIZATIONINFOTABLE_OFFSET UNITYSDK_OFFSET(0x92D66D0)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6720)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6730)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6A50)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D67C0)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6A60)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6A90)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6B90)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6C30)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6C70)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6C90)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6AC0)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6CB0)
#define SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D6FF0)
#define SYSTEM_COLLECTIONS_HASHTABLE_INITHASH_OFFSET UNITYSDK_OFFSET(0x92D7090)
#define SYSTEM_COLLECTIONS_HASHTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x92D70E0)
#define SYSTEM_COLLECTIONS_HASHTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x92D7630)
#define SYSTEM_COLLECTIONS_HASHTABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x92D7760)
#define SYSTEM_COLLECTIONS_HASHTABLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x92D7870)
#define SYSTEM_COLLECTIONS_HASHTABLE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x92D7890)
#define SYSTEM_COLLECTIONS_HASHTABLE_COPYKEYS_OFFSET UNITYSDK_OFFSET(0x92D7A40)
#define SYSTEM_COLLECTIONS_HASHTABLE_COPYENTRIES_OFFSET UNITYSDK_OFFSET(0x92D7B30)
#define SYSTEM_COLLECTIONS_HASHTABLE_COPYTO_OFFSET UNITYSDK_OFFSET(0x92D7CD0)
#define SYSTEM_COLLECTIONS_HASHTABLE_COPYVALUES_OFFSET UNITYSDK_OFFSET(0x92D7E80)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x92D7F70)
#define SYSTEM_COLLECTIONS_HASHTABLE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x92D8200)
#define SYSTEM_COLLECTIONS_HASHTABLE_EXPAND_OFFSET UNITYSDK_OFFSET(0x92D8220)
#define SYSTEM_COLLECTIONS_HASHTABLE_REHASH_OFFSET UNITYSDK_OFFSET(0x92D8410)
#define SYSTEM_COLLECTIONS_HASHTABLE_UPDATEVERSION_OFFSET UNITYSDK_OFFSET(0x92D7730)
#define SYSTEM_COLLECTIONS_HASHTABLE_REHASH_OFFSET UNITYSDK_OFFSET(0x92D82F0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92D8540)
#define SYSTEM_COLLECTIONS_HASHTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92D8630)
#define SYSTEM_COLLECTIONS_HASHTABLE_GETHASH_OFFSET UNITYSDK_OFFSET(0x92D86C0)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x92D8790)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x92D87A0)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92D87B0)
#define SYSTEM_COLLECTIONS_HASHTABLE_KEYEQUALS_OFFSET UNITYSDK_OFFSET(0x92D87C0)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x92D88A0)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x92D8960)
#define SYSTEM_COLLECTIONS_HASHTABLE_INSERT_OFFSET UNITYSDK_OFFSET(0x92D7100)
#define SYSTEM_COLLECTIONS_HASHTABLE_PUTENTRY_OFFSET UNITYSDK_OFFSET(0x92D8430)
#define SYSTEM_COLLECTIONS_HASHTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x92D8A20)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92D8C60)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92D8CD0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92D8CE0)
#define SYSTEM_COLLECTIONS_HASHTABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x92D8DD0)
#define SYSTEM_COLLECTIONS_HASHTABLE_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x92D92F0)

namespace System::Collections
{
	inline static constexpr unsigned int Hashtable_TypeDefinitionIndex = 25097;

	class Hashtable : public Il2CppObject
	{
	public:
		::System::Int32 HashPrime; // 0x0
		::System::Int32 InitialSize; // 0x0
		::System::String* LoadFactorName; // 0x0
		::System::String* VersionName; // 0x0
		::System::String* ComparerName; // 0x0
		::System::String* HashCodeProviderName; // 0x0
		::System::String* HashSizeName; // 0x0
		::System::String* KeysName; // 0x0
		::System::String* ValuesName; // 0x0
		::System::String* KeyComparerName; // 0x0
		::Il2CppArray<::System::Object*>* _buckets; // 0x10
		::System::Int32 _count; // 0x18
		::System::Int32 _occupancy; // 0x1C
		::System::Int32 _loadsize; // 0x20
		::System::Single _loadFactor; // 0x24
		::System::Int32 _version; // 0x28
		::System::Boolean _isWriterInProgress; // 0x2C
		::System::Collections::ICollection* _keys; // 0x30
		::System::Collections::ICollection* _values; // 0x38
		::System::Collections::IEqualityComparer* _keycomparer; // 0x40
		::System::Object* _syncRoot; // 0x48
		Il2CppObject* s_serializationInfoTable; // 0x0

		Il2CppObject* get_SerializationInfoTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_SERIALIZATIONINFOTABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Single arg, ::System::Collections::IEqualityComparer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IHashCodeProvider* arg, ::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::System::Collections::IHashCodeProvider*, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IEqualityComparer* arg)
		{
			((::System::Void(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Collections::IEqualityComparer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IDictionary* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Single arg, ::System::Collections::IHashCodeProvider* arg, ::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Collections::IHashCodeProvider*, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IDictionary* arg, ::System::Single arg, ::System::Collections::IEqualityComparer* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::System::Single, ::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 InitHash(::System::Object* arg, ::System::Int32 arg, uint32_t&* arg, uint32_t&* arg)
		{
			return (return (::System::UInt32(*)(::System::Object*, ::System::Int32, uint32_t&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_INITHASH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Add(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_CLEAR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsKey(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_CONTAINSKEY_OFFSET))(arg, nullptr);
		}

		::System::Void CopyKeys(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_COPYKEYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyEntries(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_COPYENTRIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyValues(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_COPYVALUES_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_Item(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void expand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_EXPAND_OFFSET))(nullptr);
		}

		::System::Void rehash()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_REHASH_OFFSET))(nullptr);
		}

		::System::Void UpdateVersion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_UPDATEVERSION_OFFSET))(nullptr);
		}

		::System::Void rehash(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_REHASH_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHash(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GETHASH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Boolean KeyEquals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_KEYEQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Values()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void Insert(::System::Object* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_INSERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void putEntry(::Il2CppArray<::System::Object*>* arg, ::System::Object* arg, ::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Object*, ::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_PUTENTRY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::Hashtable* Synchronized(::System::Collections::Hashtable* arg)
		{
			return (return (::System::Collections::Hashtable*(*)(::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHRONIZED_OFFSET))(arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

	};
}

