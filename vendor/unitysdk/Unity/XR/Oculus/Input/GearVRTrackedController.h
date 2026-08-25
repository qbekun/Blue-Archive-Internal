#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_BACK_OFFSET UNITYSDK_OFFSET(0x9E3F130)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3F150)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_BACK_OFFSET UNITYSDK_OFFSET(0x9E3F170)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3F180)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3F190)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E3F1A0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3F1B0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3F1C0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3F1E0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x9E3F1F0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3F210)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3F230)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x9E3F240)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3F250)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3F270)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3F280)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3F2A0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3F2B0)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x9E3F510)
#define UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3F530)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int GearVRTrackedController_TypeDefinitionIndex = 28367;

	class GearVRTrackedController : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField; // 0x1D0

		::System::Void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_BACK_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEACCELERATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_back()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_BACK_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGER_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEACCELERATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPAD_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARACCELERATION_OFFSET))(nullptr);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET))(nullptr);
		}

		::System::Void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TOUCHPADCLICKED_OFFSET))(nullptr);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TRIGGER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_DEVICEANGULARACCELERATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPAD_OFFSET))(arg, nullptr);
		}

		::System::Void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_GEARVRTRACKEDCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET))(arg, nullptr);
		}

	};
}

