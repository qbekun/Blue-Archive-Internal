#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACK`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallback`1_TypeDefinitionIndex = 30462;

	class EventCallback`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACK`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACK`1_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

