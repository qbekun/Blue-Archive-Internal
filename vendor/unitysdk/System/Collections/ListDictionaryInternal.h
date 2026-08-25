#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C87A0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x92C87B0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x92C8880)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92C8A10)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x92C8A20)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x92C8AD0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x92C8AE0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92C8AF0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92C8B00)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x92C8B70)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_ADD_OFFSET UNITYSDK_OFFSET(0x92C8BE0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_CLEAR_OFFSET UNITYSDK_OFFSET(0x92C8DC0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_CONTAINS_OFFSET UNITYSDK_OFFSET(0x92C8DF0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_COPYTO_OFFSET UNITYSDK_OFFSET(0x92C8EC0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92C90F0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92C91E0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_REMOVE_OFFSET UNITYSDK_OFFSET(0x92C9270)

namespace System::Collections
{
	inline static constexpr unsigned int ListDictionaryInternal_TypeDefinitionIndex = 25066;

	class ListDictionaryInternal : public Il2CppObject
	{
	public:
		DictionaryNode* head; // 0x10
		::System::Int32 version; // 0x18
		::System::Int32 count; // 0x1C
		::System::Object* _syncRoot; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Values()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_REMOVE_OFFSET))(arg, nullptr);
		}

	};
}

