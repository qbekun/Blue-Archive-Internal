#pragma once
#include "../../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_FIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_MIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_INSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Dict`1_TypeDefinitionIndex = 32821;

	class Dict`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _leq; // 0x0
		Il2CppObject* _head; // 0x0

		Il2CppObject* Insert(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_INSERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Find(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_FIND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Min()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_MIN_OFFSET))(nullptr);
		}

		Il2CppObject* InsertBefore(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_INSERTBEFORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_DICT`1_REMOVE_OFFSET))(arg, nullptr);
		}

	};
}

