#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionState; }
namespace UnityEngine::InputSystem { class InputControl&; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x9E6C6B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E6C720)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASBUTTON_OFFSET UNITYSDK_OFFSET(0x9E6C750)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET UNITYSDK_OFFSET(0x9E6C7D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x9E6C800)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_GETPRESSTIME_OFFSET UNITYSDK_OFFSET(0x9E6C830)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBindingCompositeContext_TypeDefinitionIndex = 28440;

	class InputBindingCompositeContext : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputActionState* m_State; // 0x10
		::System::Int32 m_BindingIndex; // 0x18

		Il2CppObject* get_controls()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_GET_CONTROLS_OFFSET))(nullptr);
		}

		::System::Single EvaluateMagnitude(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadValue(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadValue(::System::Int32 arg, ::UnityEngine::InputSystem::InputControl&* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::UnityEngine::InputSystem::InputControl&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadValue(::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadValue(::System::Int32 arg, ::UnityEngine::InputSystem::InputControl&* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::UnityEngine::InputSystem::InputControl&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ReadValueAsButton(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void ReadValue(::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadValueAsObject(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Double GetPressTime(::System::Int32 arg)
		{
			return (return (::System::Double(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_GETPRESSTIME_OFFSET))(arg, nullptr);
		}

	};
}

