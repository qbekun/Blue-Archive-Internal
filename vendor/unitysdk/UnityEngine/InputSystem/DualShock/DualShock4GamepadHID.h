#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine { class Color; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9F52680)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F52690)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9F526A0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F52930)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F52A10)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F52A20)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x9F52A30)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETMOTORSPEEDSANDLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x9F52A50)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IEVENTPREPROCESSOR.PREPROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x9F52D10)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x9F52EF0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x9F52F00)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x9F52F10)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x9F530A0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x9F53250)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F53370)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9F53390)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9F53580)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F53800)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualShock4GamepadHID_TypeDefinitionIndex = 28695;

	class DualShock4GamepadHID : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftTriggerButton_k__BackingField; // 0x238
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightTriggerButton_k__BackingField; // 0x240
		::UnityEngine::InputSystem::Controls::ButtonControl* _playStationButton_k__BackingField; // 0x248
		Il2CppObject* m_LowFrequencyMotorSpeed; // 0x250
		Il2CppObject* m_HighFrequenceyMotorSpeed; // 0x258
		Il2CppObject* m_LightBarColor; // 0x260
		::System::Byte JitterMaskLow; // 0x0
		::System::Byte JitterMaskHigh; // 0x0

		::System::Void OnNextUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_ONNEXTUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightTriggerButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET))(nullptr);
		}

		::System::Void PauseHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_PAUSEHAPTICS_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftTriggerButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_playStationButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetMotorSpeedsAndLightBarColor(::System::Single arg, ::System::Single arg, ::UnityEngine::Color* arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETMOTORSPEEDSANDLIGHTBARCOLOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean UnityEngine.InputSystem.LowLevel.IEventPreProcessor.PreProcessEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IEVENTPREPROCESSOR.PREPROCESSEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_playStationButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_GETSTATEOFFSETFOREVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetMotorSpeeds(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETMOTORSPEEDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLightBarColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SETLIGHTBARCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void ResetHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_RESETHAPTICS_OFFSET))(nullptr);
		}

		::System::Void set_leftTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_ONSTATEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void ResumeHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_RESUMEHAPTICS_OFFSET))(nullptr);
		}

		::System::Void set_rightTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK4GAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET))(arg, nullptr);
		}

	};
}

