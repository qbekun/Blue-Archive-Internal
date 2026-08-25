#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionReference; }
namespace UnityEngine::InputSystem { class InputActionProperty; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x9E59820)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_REFERENCE_OFFSET UNITYSDK_OFFSET(0x9E59970)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_SERIALIZEDACTION_OFFSET UNITYSDK_OFFSET(0x9E59980)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_SERIALIZEDREFERENCE_OFFSET UNITYSDK_OFFSET(0x9E59990)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E599A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E599E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E59A20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E59AB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E59B40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E59BA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E59D30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E59DC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E59E50)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionProperty_TypeDefinitionIndex = 28410;

	class InputActionProperty : public Il2CppObject
	{
	public:
		::System::Boolean m_UseReference; // 0x10
		::UnityEngine::InputSystem::InputAction* m_Action; // 0x18
		::UnityEngine::InputSystem::InputActionReference* m_Reference; // 0x20

		::UnityEngine::InputSystem::InputAction* get_action()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_ACTION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_reference()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_REFERENCE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_serializedAction()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_SERIALIZEDACTION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionReference* get_serializedReference()
		{
			return (return (::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_SERIALIZEDREFERENCE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::InputActionReference* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::InputActionProperty* arg, ::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputActionProperty*, ::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::InputActionProperty* arg, ::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputActionProperty*, ::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};
}

