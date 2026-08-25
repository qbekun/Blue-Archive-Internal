#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_COPY_OFFSET UNITYSDK_OFFSET(0xA386350)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_GET_OFFSET UNITYSDK_OFFSET(0xA386410)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0xA386500)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3865D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementListPool_TypeDefinitionIndex = 30247;

	class VisualElementListPool : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0

		Il2CppObject* Copy(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_COPY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Get(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTLISTPOOL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

