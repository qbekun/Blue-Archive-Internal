#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_UP_OFFSET UNITYSDK_OFFSET(0x9E77CE0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_UP_OFFSET UNITYSDK_OFFSET(0x9E77CF0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x9E77D10)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x9E77D20)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x9E77D40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x9E77D50)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x9E77D70)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x9E77D80)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E77DA0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E77E60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E77F80)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x9E78380)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_OFFSET UNITYSDK_OFFSET(0x9E782D0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_OFFSET UNITYSDK_OFFSET(0x9E78650)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DpadControl_TypeDefinitionIndex = 28887;

	class DpadControl : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _up_k__BackingField; // 0x120
		::UnityEngine::InputSystem::Controls::ButtonControl* _down_k__BackingField; // 0x128
		::UnityEngine::InputSystem::Controls::ButtonControl* _left_k__BackingField; // 0x130
		::UnityEngine::InputSystem::Controls::ButtonControl* _right_k__BackingField; // 0x138

		::UnityEngine::InputSystem::Controls::ButtonControl* get_up()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_UP_OFFSET))(nullptr);
		}

		::System::Void set_up(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_UP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_down()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_DOWN_OFFSET))(nullptr);
		}

		::System::Void set_down(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_DOWN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_left()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_LEFT_OFFSET))(nullptr);
		}

		::System::Void set_left(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_right()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_right(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::Vector2* arg, ::System::Object** arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_WRITEVALUEINTOSTATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* MakeDpadVector(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* MakeDpadVector(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_MAKEDPADVECTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

