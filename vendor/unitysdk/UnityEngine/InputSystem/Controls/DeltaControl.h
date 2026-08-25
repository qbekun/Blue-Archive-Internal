#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x9E773C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x9E773E0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_GET_UP_OFFSET UNITYSDK_OFFSET(0x9E77400)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x9E77410)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x9E77420)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x9E77430)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_SET_UP_OFFSET UNITYSDK_OFFSET(0x9E77450)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E77470)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x9E77550)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E77560)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DeltaControl_TypeDefinitionIndex = 28881;

	class DeltaControl : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _up_k__BackingField; // 0x120
		::UnityEngine::InputSystem::Controls::AxisControl* _down_k__BackingField; // 0x128
		::UnityEngine::InputSystem::Controls::AxisControl* _left_k__BackingField; // 0x130
		::UnityEngine::InputSystem::Controls::AxisControl* _right_k__BackingField; // 0x138

		::System::Void set_left(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::System::Void set_down(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_SET_DOWN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_up()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_GET_UP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_down()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_GET_DOWN_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_left()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_GET_LEFT_OFFSET))(nullptr);
		}

		::System::Void set_right(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_up(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_SET_UP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_right()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DELTACONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

	};
}

