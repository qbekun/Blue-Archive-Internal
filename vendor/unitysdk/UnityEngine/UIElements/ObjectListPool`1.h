#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_OBJECTLISTPOOL`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_OBJECTLISTPOOL`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_OBJECTLISTPOOL`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ObjectListPool`1_TypeDefinitionIndex = 30248;

	class ObjectListPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_OBJECTLISTPOOL`1_GET_OFFSET))(nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_OBJECTLISTPOOL`1_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_OBJECTLISTPOOL`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

