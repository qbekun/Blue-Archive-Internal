#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B859E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B85B30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9B85BD0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x9B85BE0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9B85BF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B85C90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B85D30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9B85D90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x9B85E30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x9B85E90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9B85EF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x9B85FA0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B86050)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9B860F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x9B861A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x9B86200)
#define SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x9B86260)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int ReadOnlyList_TypeDefinitionIndex = 29575;

	class ReadOnlyList : public Il2CppObject
	{
	public:
		::System::Collections::IList* _list; // 0x10

		::System::Void .ctor(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Int32 Add(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_READONLYLIST_REMOVEAT_OFFSET))(arg, nullptr);
		}

	};
}

