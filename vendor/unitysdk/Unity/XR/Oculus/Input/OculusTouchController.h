#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x9E3E5F0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3E600)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3E610)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x9E3E620)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3E630)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3E640)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E660)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3E670)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3E690)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E6B0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x9E3E6D0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3E6F0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_START_OFFSET UNITYSDK_OFFSET(0x9E3E710)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E730)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3E740)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3E750)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E760)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x9E3E780)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E790)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_START_OFFSET UNITYSDK_OFFSET(0x9E3E7A0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x9E3E7B0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E7D0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3E7F0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E810)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3E830)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3E850)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x9E3E860)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3E880)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3E890)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x9E3E8A0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3E8B0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3ECD0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3ECF0)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x9E3ED00)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3ED20)
#define UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3ED30)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusTouchController_TypeDefinitionIndex = 28363;

	class OculusTouchController : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _thumbstick_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _primaryButton_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryButton_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _start_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickClicked_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _primaryTouched_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryTouched_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::AxisControl* _triggerTouched_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickTouched_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1F8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x200
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField; // 0x208
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField; // 0x210

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryTouched()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYTOUCHED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET))(nullptr);
		}

		::System::Void set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYTOUCHED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYTOUCHED_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void set_start(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_START_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickTouched()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryTouched()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYTOUCHED_OFFSET))(nullptr);
		}

		::System::Void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEACCELERATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_start()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_START_OFFSET))(nullptr);
		}

		::System::Void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_triggerTouched(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGERTOUCHED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_triggerTouched()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERTOUCHED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET))(nullptr);
		}

		::System::Void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_GET_DEVICEACCELERATION_OFFSET))(nullptr);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET))(arg, nullptr);
		}

	};
}

