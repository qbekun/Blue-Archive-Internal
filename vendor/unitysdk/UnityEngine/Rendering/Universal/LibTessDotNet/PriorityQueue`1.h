#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::LibTessDotNet { class PQHandle; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_SWAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_EXTRACTMIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_MINIMUM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int PriorityQueue`1_TypeDefinitionIndex = 32836;

	class PriorityQueue`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _leq; // 0x0
		Il2CppObject* _heap; // 0x0
		::Il2CppArray<::System::Object*>* _keys; // 0x0
		::Il2CppArray<::System::Object*>* _order; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _max; // 0x0
		::System::Boolean _initialized; // 0x0

		::System::Void Swap(int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_SWAP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle* Insert(Il2CppObject* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_INSERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_INIT_OFFSET))(nullptr);
		}

		Il2CppObject* ExtractMin()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_EXTRACTMIN_OFFSET))(nullptr);
		}

		::System::Boolean get_Empty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_GET_EMPTY_OFFSET))(nullptr);
		}

		Il2CppObject* Minimum()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_MINIMUM_OFFSET))(nullptr);
		}

		::System::Void Remove(::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_PRIORITYQUEUE`1_REMOVE_OFFSET))(arg, nullptr);
		}

	};
}

