#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_GET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_SET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_SIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ObjectPool`1_TypeDefinitionIndex = 30125;

	class ObjectPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Stack; // 0x0
		::System::Int32 m_MaxSize; // 0x0

		::System::Int32 get_maxSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_GET_MAXSIZE_OFFSET))(nullptr);
		}

		::System::Void set_maxSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_SET_MAXSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_SIZE_OFFSET))(nullptr);
		}

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_GET_OFFSET))(nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_OBJECTPOOL`1_RELEASE_OFFSET))(arg, nullptr);
		}

	};
}

