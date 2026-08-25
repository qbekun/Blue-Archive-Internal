#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_FINDINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_RESERVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_DYNAMICARRAY`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicArray`1_TypeDefinitionIndex = 33899;

	class DynamicArray`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Array; // 0x0
		::System::Int32 _size_k__BackingField; // 0x0

		::System::Int32 get_size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void set_size(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int32 Add(Il2CppObject&* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveRange(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_REMOVERANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FindIndex(::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_FINDINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_INDEXOF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_INDEXOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Resize(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_RESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reserve(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_RESERVE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject&* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* op_Implicit(Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DYNAMICARRAY`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

