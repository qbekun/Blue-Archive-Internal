#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTPREPROCESSOR_PREPROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int IEventPreProcessor_TypeDefinitionIndex = 28748;

	class IEventPreProcessor : public Il2CppObject
	{
	public:
		::System::Boolean PreProcessEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTPREPROCESSOR_PREPROCESSEVENT_OFFSET))(arg, nullptr);
		}

	};
}

