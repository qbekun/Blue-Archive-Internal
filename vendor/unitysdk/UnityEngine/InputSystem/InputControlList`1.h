#pragma once
#include "../../unitysdk.h"

namespace Unity::Collections { class Allocator; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_ADDSLICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_SWAPELEMENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_SORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_APPENDTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_TOINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_FROMINDEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlList`1_TypeDefinitionIndex = 28472;

	class InputControlList`1 : public Il2CppObject
	{
	public:
		::System::Int32 m_Count; // 0x0
		Il2CppObject* m_Indices; // 0x0
		::Unity::Collections::Allocator* m_Allocator; // 0x0
		::System::UInt64 kInvalidIndex; // 0x0

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_GET_ISREADONLY_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Unity::Collections::Allocator* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Unity::Collections::Allocator*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::Unity::Collections::Allocator* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Resize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_RESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddSlice(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_ADDSLICE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddRange(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_ADDRANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_INDEXOF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_CONTAINS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SwapElements(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_SWAPELEMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Sort(::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_SORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_TOARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void AppendTo(::System::Object[]&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_APPENDTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_DISPOSE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_TOSTRING_OFFSET))(nullptr);
		}

		::System::UInt64 ToIndex(Il2CppObject* arg)
		{
			return (return (::System::UInt64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_TOINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FromIndex(::System::UInt64 arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLLIST`1_FROMINDEX_OFFSET))(arg, nullptr);
		}

	};
}

