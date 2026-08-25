#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_ADDUNIQUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_ENABLEITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_DISABLEITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_SWAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_SORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI::Collections
{
	inline static constexpr unsigned int IndexedSet`1_TypeDefinitionIndex = 34874;

	class IndexedSet`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_List; // 0x0
		Il2CppObject* m_Dictionary; // 0x0
		::System::Int32 m_EnabledObjectCount; // 0x0

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddUnique(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_ADDUNIQUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EnableItem(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_ENABLEITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean DisableItem(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_DISABLEITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void Swap(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_SWAP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveAll(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_REMOVEALL_OFFSET))(arg, nullptr);
		}

		::System::Void Sort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_SORT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLLECTIONS_INDEXEDSET`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

