#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class TouchPhase; }
namespace UnityEngine::InputSystem { class InputActionPhase; }
namespace UnityEngine::InputSystem { class Key; }

#define UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9F02EF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F03B00)
#define UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISTEXTINPUTKEY_OFFSET UNITYSDK_OFFSET(0x9F03B10)
#define UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISENDEDORCANCELED_OFFSET UNITYSDK_OFFSET(0x9F03B40)
#define UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISMODIFIERKEY_OFFSET UNITYSDK_OFFSET(0x9F03B50)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputExtensions_TypeDefinitionIndex = 28538;

	class InputExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsActive(::UnityEngine::InputSystem::TouchPhase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::TouchPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInProgress(::UnityEngine::InputSystem::InputActionPhase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputActionPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISINPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTextInputKey(::UnityEngine::InputSystem::Key* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Key*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISTEXTINPUTKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEndedOrCanceled(::UnityEngine::InputSystem::TouchPhase* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::TouchPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISENDEDORCANCELED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsModifierKey(::UnityEngine::InputSystem::Key* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Key*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTEXTENSIONS_ISMODIFIERKEY_OFFSET))(arg, nullptr);
		}

	};
}

