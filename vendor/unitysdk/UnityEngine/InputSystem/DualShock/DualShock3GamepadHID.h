#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F53840)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F53860)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x9F53880)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x9F538A0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F538B0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F538C0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F539A0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F539B0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualShock3GamepadHID_TypeDefinitionIndex = 28696;

	class DualShock3GamepadHID : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftTriggerButton_k__BackingField; // 0x238
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightTriggerButton_k__BackingField; // 0x240
		::UnityEngine::InputSystem::Controls::ButtonControl* _playStationButton_k__BackingField; // 0x248

		::System::Void set_leftTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_rightTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_playStationButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_playStationButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftTriggerButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightTriggerButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET))(nullptr);
		}

	};
}

