#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEventListener; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x9F50A50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x9F50D80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x9F59230)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventListener_TypeDefinitionIndex = 28786;

	class InputEventListener : public Il2CppObject
	{
	public:
		ObserverState* s_ObserverState; // 0x0

		::UnityEngine::InputSystem::LowLevel::InputEventListener* op_Addition(::UnityEngine::InputSystem::LowLevel::InputEventListener* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventListener*(*)(::UnityEngine::InputSystem::LowLevel::InputEventListener*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventListener* op_Subtraction(::UnityEngine::InputSystem::LowLevel::InputEventListener* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventListener*(*)(::UnityEngine::InputSystem::LowLevel::InputEventListener*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::IDisposable* Subscribe(Il2CppObject* arg)
		{
			return (return (::System::IDisposable*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_SUBSCRIBE_OFFSET))(arg, nullptr);
		}

	};
}

