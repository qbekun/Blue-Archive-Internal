#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::Rendering { class DebugActionDesc; }

#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_ACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9FAE580)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9FAE590)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_RUNNINGACTION_OFFSET UNITYSDK_OFFSET(0x9FAE630)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FAB170)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x9FAE640)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHBUTTON_OFFSET UNITYSDK_OFFSET(0x9FAB2B0)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_ACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x9FAE660)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_RUNNINGACTION_OFFSET UNITYSDK_OFFSET(0x9FAE670)
#define UNITYENGINE_RENDERING_DEBUGACTIONSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FAB400)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugActionState_TypeDefinitionIndex = 33939;

	class DebugActionState : public Il2CppObject
	{
	public:
		DebugActionKeyType* m_Type; // 0x10
		::UnityEngine::InputSystem::InputAction* inputAction; // 0x18
		::Il2CppArray<::System::Object*>* m_TriggerPressedUp; // 0x20
		::System::Single m_Timer; // 0x28
		::System::Boolean _runningAction_k__BackingField; // 0x2C
		::System::Single _actionState_k__BackingField; // 0x30

		::System::Single get_actionState()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_ACTIONSTATE_OFFSET))(nullptr);
		}

		::System::Void Trigger(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_runningAction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_RUNNINGACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_RESET_OFFSET))(nullptr);
		}

		::System::Void TriggerWithButton(::UnityEngine::InputSystem::InputAction* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_TRIGGERWITHBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_actionState(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_SET_ACTIONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_runningAction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_GET_RUNNINGACTION_OFFSET))(nullptr);
		}

		::System::Void Update(::UnityEngine::Rendering::DebugActionDesc* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::DebugActionDesc*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGACTIONSTATE_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

