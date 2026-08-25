#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GET_ELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ListProvider`1_TypeDefinitionIndex = 33578;

	class ListProvider`1 : public Il2CppObject
	{
	public:
		Il2CppObject* get_First()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GET_FIRST_OFFSET))(nullptr);
		}

		::System::Int32 get_ElementCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GET_ELEMENTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetElement(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GETELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_REMOVEAT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTPROVIDER`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

