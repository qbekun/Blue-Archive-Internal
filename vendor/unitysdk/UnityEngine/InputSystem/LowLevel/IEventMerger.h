#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int IEventMerger_TypeDefinitionIndex = 28747;

	class IEventMerger : public Il2CppObject
	{
	public:
		::System::Boolean MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IEVENTMERGER_MERGEFORWARD_OFFSET))(arg, arg, nullptr);
		}

	};
}

