#pragma once
#include "unitysdk.h"

#define READONLYARRAYLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D3440)
#define READONLYARRAYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92D5AE0)
#define READONLYARRAYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x92D5B10)
#define READONLYARRAYLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x92D5B20)
#define READONLYARRAYLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92D5B30)
#define READONLYARRAYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x92D5B60)
#define READONLYARRAYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x92D5B90)
#define READONLYARRAYLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92D5BF0)
#define READONLYARRAYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x92D5C20)
#define READONLYARRAYLIST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x92D5C80)
#define READONLYARRAYLIST_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x92D5CE0)
#define READONLYARRAYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x92D5D40)
#define READONLYARRAYLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x92D5DA0)
#define READONLYARRAYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x92D5EC0)
#define READONLYARRAYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x92D5EF0)
#define READONLYARRAYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x92D5F20)
#define READONLYARRAYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92D5F60)
#define READONLYARRAYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x92D5F90)
#define READONLYARRAYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x92D5FC0)
#define READONLYARRAYLIST_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x92D6020)
#define READONLYARRAYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x92D6080)
#define READONLYARRAYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x92D60E0)
#define READONLYARRAYLIST_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x92D6140)
#define READONLYARRAYLIST_REVERSE_OFFSET UNITYSDK_OFFSET(0x92D61A0)
#define READONLYARRAYLIST_SORT_OFFSET UNITYSDK_OFFSET(0x92D6200)
#define READONLYARRAYLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x92D6260)
#define READONLYARRAYLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x92D6290)

	inline static constexpr unsigned int ReadOnlyArrayList_TypeDefinitionIndex = 25087;

	class ReadOnlyArrayList : public LifetimeByEmitterSpeedModule
	{
	public:
		::System::Collections::ArrayList* _list; // 0x28

		::System::Void .ctor(::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Int32 Add(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyTo(::System::Int32 arg, ::System::Array* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_COPYTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InsertRange(::System::Int32 arg, ::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_INSERTRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveRange(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_REMOVERANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reverse(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_REVERSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Sort(::System::Int32 arg, ::System::Int32 arg, ::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_SORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_TOARRAY_OFFSET))(nullptr);
		}

		::System::Array* ToArray(::System::Type* arg)
		{
			return (return (::System::Array*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + READONLYARRAYLIST_TOARRAY_OFFSET))(arg, nullptr);
		}

	};

