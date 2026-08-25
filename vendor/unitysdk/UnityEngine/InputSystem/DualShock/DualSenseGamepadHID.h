#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine { class Color; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F513C0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F513D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F513F0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x9F51400)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x9F51420)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x9F51430)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F51450)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9F51530)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x9F518F0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9F51970)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x9F519F0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x9F51AA0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETMOTORSPEEDSANDLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x9F515E0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x9F51BE0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x9F51C30)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x9F51C80)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IEVENTMERGER.MERGEFORWARD_OFFSET UNITYSDK_OFFSET(0x9F51CD0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IEVENTPREPROCESSOR.PREPROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x9F51FF0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9F522C0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9F522D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x9F52580)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F52590)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualSenseGamepadHID_TypeDefinitionIndex = 28693;

	class DualSenseGamepadHID : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftTriggerButton_k__BackingField; // 0x238
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightTriggerButton_k__BackingField; // 0x240
		::UnityEngine::InputSystem::Controls::ButtonControl* _playStationButton_k__BackingField; // 0x248
		Il2CppObject* m_LowFrequencyMotorSpeed; // 0x250
		Il2CppObject* m_HighFrequenceyMotorSpeed; // 0x258
		Il2CppObject* m_LightBarColor; // 0x260
		::System::Byte outputSequenceId; // 0x274
		::System::Byte JitterMaskLow; // 0x0
		::System::Byte JitterMaskHigh; // 0x0

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftTriggerButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_leftTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightTriggerButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_rightTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_playStationButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_playStationButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void PauseHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_PAUSEHAPTICS_OFFSET))(nullptr);
		}

		::System::Void ResetHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_RESETHAPTICS_OFFSET))(nullptr);
		}

		::System::Void ResumeHaptics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_RESUMEHAPTICS_OFFSET))(nullptr);
		}

		::System::Void SetLightBarColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETLIGHTBARCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetMotorSpeeds(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETMOTORSPEEDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetMotorSpeedsAndLightBarColor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_SETMOTORSPEEDSANDLIGHTBARCOLOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MergeForward(::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MergeForward(::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MergeForward(::System::Object** arg, ::System::Object** arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_MERGEFORWARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IEVENTMERGER.MERGEFORWARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UnityEngine.InputSystem.LowLevel.IEventPreProcessor.PreProcessEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IEVENTPREPROCESSOR.PREPROCESSEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnNextUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_ONNEXTUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_ONSTATEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_GETSTATEOFFSETFOREVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSENSEGAMEPADHID_.CTOR_OFFSET))(nullptr);
		}

	};
}

