#pragma once
#include "unitysdk.h"

#define ILISTWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D2890)
#define ILISTWRAPPER_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x92D3C00)
#define ILISTWRAPPER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x92D3C90)
#define ILISTWRAPPER_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x92D3D30)
#define ILISTWRAPPER_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x92D3DD0)
#define ILISTWRAPPER_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x92D3E70)
#define ILISTWRAPPER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x92D3F10)
#define ILISTWRAPPER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x92D3FB0)
#define ILISTWRAPPER_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x92D4060)
#define ILISTWRAPPER_ADD_OFFSET UNITYSDK_OFFSET(0x92D4100)
#define ILISTWRAPPER_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x92D41B0)
#define ILISTWRAPPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x92D41F0)
#define ILISTWRAPPER_CLONE_OFFSET UNITYSDK_OFFSET(0x92D4360)
#define ILISTWRAPPER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x92D43D0)
#define ILISTWRAPPER_COPYTO_OFFSET UNITYSDK_OFFSET(0x92D4480)
#define ILISTWRAPPER_COPYTO_OFFSET UNITYSDK_OFFSET(0x92D4530)
#define ILISTWRAPPER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x92D4890)
#define ILISTWRAPPER_INDEXOF_OFFSET UNITYSDK_OFFSET(0x92D4930)
#define ILISTWRAPPER_INSERT_OFFSET UNITYSDK_OFFSET(0x92D49E0)
#define ILISTWRAPPER_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x92D4A90)
#define ILISTWRAPPER_REMOVE_OFFSET UNITYSDK_OFFSET(0x92D4E60)
#define ILISTWRAPPER_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x92D4EB0)
#define ILISTWRAPPER_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x92D4F60)
#define ILISTWRAPPER_REVERSE_OFFSET UNITYSDK_OFFSET(0x92D5190)
#define ILISTWRAPPER_SORT_OFFSET UNITYSDK_OFFSET(0x92D5510)
#define ILISTWRAPPER_TOARRAY_OFFSET UNITYSDK_OFFSET(0x92D57D0)
#define ILISTWRAPPER_TOARRAY_OFFSET UNITYSDK_OFFSET(0x92D5940)

	inline static constexpr unsigned int IListWrapper_TypeDefinitionIndex = 25086;

	class IListWrapper : public LifetimeByEmitterSpeedModule
	{
	public:
		::System::Collections::IList* _list; // 0x28

		::System::Void .ctor(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Int32 Add(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_CLEAR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyTo(::System::Int32 arg, ::System::Array* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_COPYTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InsertRange(::System::Int32 arg, ::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_INSERTRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveRange(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_REMOVERANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reverse(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_REVERSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Sort(::System::Int32 arg, ::System::Int32 arg, ::System::Collections::IComparer* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_SORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_TOARRAY_OFFSET))(nullptr);
		}

		::System::Array* ToArray(::System::Type* arg)
		{
			return (return (::System::Array*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + ILISTWRAPPER_TOARRAY_OFFSET))(arg, nullptr);
		}

	};

