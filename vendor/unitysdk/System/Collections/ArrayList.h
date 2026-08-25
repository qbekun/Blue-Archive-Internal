#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_ARRAYLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CA4F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D2130)
#define SYSTEM_COLLECTIONS_ARRAYLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D2290)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x92D2470)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92D2590)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x92D25A0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x92D25B0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92D25C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92D25D0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x92D2640)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x92D26E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ADAPTER_OFFSET UNITYSDK_OFFSET(0x92D27D0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x92D28C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x92D2A10)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x92D2A30)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x92D2A60)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x92D2AF0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x92D2BA0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x92D2BC0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x92D2C80)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x92D29B0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92D2D90)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x92D2EF0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x92D2F20)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x92D30C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_OFFSET UNITYSDK_OFFSET(0x92D3380)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x92D3470)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x92D34C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x92D35B0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REVERSE_OFFSET UNITYSDK_OFFSET(0x92D3750)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REVERSE_OFFSET UNITYSDK_OFFSET(0x92D3790)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SORT_OFFSET UNITYSDK_OFFSET(0x92D38D0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SORT_OFFSET UNITYSDK_OFFSET(0x92D3920)
#define SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x92D3A40)
#define SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x92D3B20)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_TypeDefinitionIndex = 25090;

	class ArrayList : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _items; // 0x10
		::System::Int32 _size; // 0x18
		::System::Int32 _version; // 0x1C
		::System::Object* _syncRoot; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ArrayList* Adapter(::System::Collections::IList* arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADAPTER_OFFSET))(arg, nullptr);
		}

		::System::Int32 Add(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg)
		{
			((::System::Void(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyTo(::System::Int32 arg, ::System::Array* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EnsureCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ENSURECAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InsertRange(::System::Int32 arg, ::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INSERTRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ArrayList* ReadOnly(::System::Collections::ArrayList* arg)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveRange(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVERANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reverse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REVERSE_OFFSET))(nullptr);
		}

		::System::Void Reverse(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REVERSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Sort(::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SORT_OFFSET))(arg, nullptr);
		}

		::System::Void Sort(::System::Int32 arg, ::System::Int32 arg, ::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_OFFSET))(nullptr);
		}

		::System::Array* ToArray(::System::Type* arg)
		{
			return (return (::System::Array*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_OFFSET))(arg, nullptr);
		}

	};
}

