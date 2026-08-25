#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }

#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3FCF0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3FD00)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_BATTERYLEVEL_OFFSET UNITYSDK_OFFSET(0x9E3FD20)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x9E3FD30)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9E3FD40)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x9E3FD50)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3FD60)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3FD70)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x9E3FD80)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x9E3FD90)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3FDB0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E3FDC0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3FDD0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERROTATION_OFFSET UNITYSDK_OFFSET(0x9E3FDF0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERROTATION_OFFSET UNITYSDK_OFFSET(0x9E3FE00)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3FE20)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E40250)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x9E40270)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E40290)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E402A0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_MENU_OFFSET UNITYSDK_OFFSET(0x9E402B0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E402D0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E402F0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E40310)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E40330)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSRISK_OFFSET UNITYSDK_OFFSET(0x9E40340)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSMITIGATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x9E40350)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSRISK_OFFSET UNITYSDK_OFFSET(0x9E40370)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x9E40390)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_BATTERYLEVEL_OFFSET UNITYSDK_OFFSET(0x9E403B0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_MENU_OFFSET UNITYSDK_OFFSET(0x9E403D0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSMITIGATIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x9E403E0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E403F0)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E40410)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E40420)
#define UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x9E40440)

namespace UnityEngine::XR::WindowsMR::Input
{
	inline static constexpr unsigned int WMRSpatialController_TypeDefinitionIndex = 28372;

	class WMRSpatialController : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _joystick_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _joystickClicked_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::AxisControl* _batteryLevel_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::AxisControl* _sourceLossRisk_k__BackingField; // 0x1F8
		::UnityEngine::InputSystem::Controls::Vector3Control* _sourceLossMitigationDirection_k__BackingField; // 0x200
		::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField; // 0x208
		::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField; // 0x210

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET))(nullptr);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_batteryLevel()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_BATTERYLEVEL_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_joystickClicked()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICKCLICKED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPADCLICKED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_joystick()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_JOYSTICK_OFFSET))(nullptr);
		}

		::System::Void set_joystick(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TOUCHPAD_OFFSET))(nullptr);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation()
		{
			return (return (::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_POINTERROTATION_OFFSET))(nullptr);
		}

		::System::Void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::QuaternionControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_POINTERPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_MENU_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_GRIPPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPAD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_GRIPPRESSED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_sourceLossRisk()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSRISK_OFFSET))(nullptr);
		}

		::System::Void set_sourceLossMitigationDirection(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSMITIGATIONDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_sourceLossRisk(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_SOURCELOSSRISK_OFFSET))(arg, nullptr);
		}

		::System::Void set_joystickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_JOYSTICKCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void set_batteryLevel(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_BATTERYLEVEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_menu()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_MENU_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_sourceLossMitigationDirection()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_SOURCELOSSMITIGATIONDIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_WINDOWSMR_INPUT_WMRSPATIALCONTROLLER_SET_TOUCHPADCLICKED_OFFSET))(arg, nullptr);
		}

	};
}

