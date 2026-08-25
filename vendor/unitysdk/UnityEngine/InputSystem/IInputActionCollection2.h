#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputBinding; }
namespace UnityEngine::InputSystem { class InputAction&; }

#define UNITYENGINE_INPUTSYSTEM_IINPUTACTIONCOLLECTION2_FINDACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_IINPUTACTIONCOLLECTION2_FINDBINDING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_IINPUTACTIONCOLLECTION2_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int IInputActionCollection2_TypeDefinitionIndex = 28374;

	class IInputActionCollection2 : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputAction* FindAction(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_IINPUTACTIONCOLLECTION2_FINDACTION_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 FindBinding(::UnityEngine::InputSystem::InputBinding* arg, ::UnityEngine::InputSystem::InputAction&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputBinding*, ::UnityEngine::InputSystem::InputAction&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_IINPUTACTIONCOLLECTION2_FINDBINDING_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_bindings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_IINPUTACTIONCOLLECTION2_GET_BINDINGS_OFFSET))(nullptr);
		}

	};
}

