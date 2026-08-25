#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR`1_PROCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR`1_PROCESSASOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR`1_PROCESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputProcessor`1_TypeDefinitionIndex = 28483;

	class InputProcessor`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Process(Il2CppObject* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR`1_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ProcessAsObject(::System::Object* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR`1_PROCESSASOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Process(::System::Object** arg, ::System::Int32 arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR`1_PROCESS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

