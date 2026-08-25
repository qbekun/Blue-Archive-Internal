#pragma once
#include "unitysdk.h"

#define SYNCHASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D8DA0)
#define SYNCHASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92DA1A0)
#define SYNCHASHTABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x92DA1F0)
#define SYNCHASHTABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92DA240)
#define SYNCHASHTABLE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x92DA270)
#define SYNCHASHTABLE_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x92DA2A0)
#define SYNCHASHTABLE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92DA2D0)
#define SYNCHASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x92DA2E0)
#define SYNCHASHTABLE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x92DA310)
#define SYNCHASHTABLE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92DA450)
#define SYNCHASHTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x92DA480)
#define SYNCHASHTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x92DA5C0)
#define SYNCHASHTABLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x92DA6E0)
#define SYNCHASHTABLE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x92DA710)
#define SYNCHASHTABLE_COPYTO_OFFSET UNITYSDK_OFFSET(0x92DA7B0)
#define SYNCHASHTABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x92DA8F0)
#define SYNCHASHTABLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92DAAA0)
#define SYNCHASHTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92DAAD0)
#define SYNCHASHTABLE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x92DAB00)
#define SYNCHASHTABLE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x92DAC50)
#define SYNCHASHTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x92DADA0)
#define SYNCHASHTABLE_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x92DAED0)

	inline static constexpr unsigned int SyncHashtable_TypeDefinitionIndex = 25094;

	class SyncHashtable : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* _table; // 0x50

		::System::Void .ctor(::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsKey(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_CONTAINSKEY_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_CLONE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Values()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCHASHTABLE_ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

	};

