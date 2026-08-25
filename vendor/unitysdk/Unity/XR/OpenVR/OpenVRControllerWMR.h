#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CE60)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3CE70)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3CE80)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3D150)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPADCLICK_OFFSET UNITYSDK_OFFSET(0x9E3D170)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPADTOUCH_OFFSET UNITYSDK_OFFSET(0x9E3D190)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPADCLICK_OFFSET UNITYSDK_OFFSET(0x9E3D1B0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3D1C0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3D1E0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3D1F0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E3D200)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D210)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x9E3D220)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D240)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_MENU_OFFSET UNITYSDK_OFFSET(0x9E3D250)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D270)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E3D290)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x9E3D2B0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3D2C0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPADTOUCH_OFFSET UNITYSDK_OFFSET(0x9E3D2E0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_MENU_OFFSET UNITYSDK_OFFSET(0x9E3D2F0)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3D300)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3D320)
#define UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D330)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int OpenVRControllerWMR_TypeDefinitionIndex = 28356;

	class OpenVRControllerWMR : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClick_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouch_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::Vector2Control* _joystick_k__BackingField; // 0x1E0

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_DEVICEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_GRIP_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void set_touchpadClick(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPADCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void set_touchpadTouch(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPADTOUCH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClick()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPADCLICK_OFFSET))(nullptr);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_DEVICEVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_DEVICEVELOCITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPAD_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_GRIPPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_joystick(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_JOYSTICK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TRIGGERPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_MENU_OFFSET))(arg, nullptr);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TRIGGERPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_TOUCHPAD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_joystick()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_JOYSTICK_OFFSET))(nullptr);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_DEVICEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouch()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TOUCHPADTOUCH_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_menu()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_MENU_OFFSET))(nullptr);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_GRIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_GET_TRIGGER_OFFSET))(nullptr);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRCONTROLLERWMR_SET_GRIPPRESSED_OFFSET))(arg, nullptr);
		}

	};
}

