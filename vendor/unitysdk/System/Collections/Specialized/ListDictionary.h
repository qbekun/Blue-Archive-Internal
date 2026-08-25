#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B80040)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B80050)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B80080)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B80210)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B80420)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x9B80430)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9B804E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x9B804F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9B80500)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9B80510)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x9B80590)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x9B80600)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x9B80850)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9B80880)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_COPYTO_OFFSET UNITYSDK_OFFSET(0x9B809F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B80BF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B80CE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x9B80D70)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int ListDictionary_TypeDefinitionIndex = 29565;

	class ListDictionary : public Il2CppObject
	{
	public:
		DictionaryNode* head; // 0x10
		::System::Int32 version; // 0x18
		::System::Int32 count; // 0x1C
		::System::Collections::IComparer* comparer; // 0x20
		::System::Object* _syncRoot; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Item(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Values()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_LISTDICTIONARY_REMOVE_OFFSET))(arg, nullptr);
		}

	};
}

