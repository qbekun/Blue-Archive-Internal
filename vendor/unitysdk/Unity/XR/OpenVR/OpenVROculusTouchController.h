#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3DB60)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3DB80)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x9E3DB90)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3DBB0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3DBC0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3DBE0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3DBF0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3DEC0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3DED0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3DEE0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x9E3DEF0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x9E3DF00)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3DF10)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3DF30)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3DF50)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3DF70)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3DF80)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x9E3DFA0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3DFB0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x9E3DFC0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x9E3DFE0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x9E3E000)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3E010)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x9E3E030)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int OpenVROculusTouchController_TypeDefinitionIndex = 28361;

	class OpenVROculusTouchController : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _thumbstick_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _primaryButton_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryButton_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickClicked_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickTouched_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1E0

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickTouched()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET))(nullptr);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET))(nullptr);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET))(arg, nullptr);
		}

		::System::Void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET))(arg, nullptr);
		}

		::System::Void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET))(arg, nullptr);
		}

	};
}

