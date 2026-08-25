#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_EVENTS_UNITYACTION`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTS_UNITYACTION`3_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityAction`3_TypeDefinitionIndex = 31302;

	class UnityAction`3 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYACTION`3_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYACTION`3_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

