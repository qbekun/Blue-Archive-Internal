#pragma once
#include "../../../unitysdk.h"

#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4C8980)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x4C8AD0)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4C8B00)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x4C8BC0)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x4C8BF0)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x4C8C70)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x4C8CD0)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x4C8D00)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x4C8D50)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_ADD_OFFSET UNITYSDK_OFFSET(0x4C8DF0)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x4C8E50)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x4C8EF0)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x4C8F20)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x4C8F50)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x4C8F80)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x4C9150)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_COPYKEYSTO_OFFSET UNITYSDK_OFFSET(0x4C9180)
#define ANTLR_RUNTIME_COLLECTIONS_HASHLIST_COPYVALUESTO_OFFSET UNITYSDK_OFFSET(0x4C9230)

namespace Antlr::Runtime::Collections
{
	inline static constexpr unsigned int HashList_TypeDefinitionIndex = 37404;

	class HashList : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* _dictionary; // 0x10
		::System::Collections::ArrayList* _insertionOrderList; // 0x18
		::System::Int32 _version; // 0x20

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Values()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void CopyKeysTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_COPYKEYSTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyValuesTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_COLLECTIONS_HASHLIST_COPYVALUESTO_OFFSET))(arg, arg, nullptr);
		}

	};
}

