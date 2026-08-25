#pragma once
#include "unitysdk.h"

#define LISTWITHEVENTS`1_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_ADD_ONELEMENTADDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_REMOVE_ONELEMENTADDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_INVOKEADDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_ADD_ONELEMENTREMOVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_INVOKEREMOVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_REMOVE_ONELEMENTREMOVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTWITHEVENTS`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ListWithEvents`1_TypeDefinitionIndex = 36345;

	class ListWithEvents`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_List; // 0x0
		Il2CppObject* OnElementAdded; // 0x0
		Il2CppObject* OnElementRemoved; // 0x0

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void add_OnElementAdded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_ADD_ONELEMENTADDED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void remove_OnElementAdded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_REMOVE_ONELEMENTADDED_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeAdded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_INVOKEADDED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnElementRemoved(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_ADD_ONELEMENTREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Insert(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_INSERT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeRemoved(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_INVOKEREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnElementRemoved(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_REMOVE_ONELEMENTREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTWITHEVENTS`1_GET_COUNT_OFFSET))(nullptr);
		}

	};

