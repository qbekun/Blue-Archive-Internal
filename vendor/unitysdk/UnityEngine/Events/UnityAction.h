#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_EVENTS_UNITYACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24B000)
#define UNITYENGINE_EVENTS_UNITYACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA24B0C0)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityAction_TypeDefinitionIndex = 31296;

	class UnityAction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYACTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYACTION_INVOKE_OFFSET))(nullptr);
		}

	};
}

