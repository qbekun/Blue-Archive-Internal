#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_ADD_ITEMADDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_REMOVE_ITEMADDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_ADD_ITEMREMOVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_REMOVE_ITEMREMOVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_ONEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBSERVABLELIST`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ObservableList`1_TypeDefinitionIndex = 33926;

	class ObservableList`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_List; // 0x0
		Il2CppObject* ItemAdded; // 0x0
		Il2CppObject* ItemRemoved; // 0x0

		::System::Void add_ItemAdded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_ADD_ITEMADDED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ItemAdded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_REMOVE_ITEMADDED_OFFSET))(arg, nullptr);
		}

		::System::Void add_ItemRemoved(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_ADD_ITEMREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ItemRemoved(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_REMOVE_ITEMREMOVED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnEvent(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_ONEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Remove(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBSERVABLELIST`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

