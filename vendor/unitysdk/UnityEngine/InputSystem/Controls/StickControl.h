#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_UP_OFFSET UNITYSDK_OFFSET(0x9E79480)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x9E79490)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_UP_OFFSET UNITYSDK_OFFSET(0x9E794A0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x9E794C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E794E0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x9E79600)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x9E79610)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E79630)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x9E796A0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x9E796C0)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int StickControl_TypeDefinitionIndex = 28891;

	class StickControl : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _up_k__BackingField; // 0x120
		::UnityEngine::InputSystem::Controls::ButtonControl* _down_k__BackingField; // 0x128
		::UnityEngine::InputSystem::Controls::ButtonControl* _left_k__BackingField; // 0x130
		::UnityEngine::InputSystem::Controls::ButtonControl* _right_k__BackingField; // 0x138

		::UnityEngine::InputSystem::Controls::ButtonControl* get_up()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_UP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_right()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_up(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_UP_OFFSET))(arg, nullptr);
		}

		::System::Void set_right(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_down()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_DOWN_OFFSET))(nullptr);
		}

		::System::Void set_down(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_DOWN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_left(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_left()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_STICKCONTROL_GET_LEFT_OFFSET))(nullptr);
		}

	};
}

