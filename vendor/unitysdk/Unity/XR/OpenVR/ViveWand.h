#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OPENVR_VIVEWAND_GET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x9E3D350)
#define UNITY_XR_OPENVR_VIVEWAND_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3D360)
#define UNITY_XR_OPENVR_VIVEWAND_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D370)
#define UNITY_XR_OPENVR_VIVEWAND_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9E3D380)
#define UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPADPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D3A0)
#define UNITY_XR_OPENVR_VIVEWAND_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D3C0)
#define UNITY_XR_OPENVR_VIVEWAND_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3D3E0)
#define UNITY_XR_OPENVR_VIVEWAND_SET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x9E3D3F0)
#define UNITY_XR_OPENVR_VIVEWAND_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D410)
#define UNITY_XR_OPENVR_VIVEWAND_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D420)
#define UNITY_XR_OPENVR_VIVEWAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3D440)
#define UNITY_XR_OPENVR_VIVEWAND_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3D450)
#define UNITY_XR_OPENVR_VIVEWAND_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3D470)
#define UNITY_XR_OPENVR_VIVEWAND_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3D480)
#define UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPAD_OFFSET UNITYSDK_OFFSET(0x9E3D490)
#define UNITY_XR_OPENVR_VIVEWAND_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3D4A0)
#define UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPADPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D730)
#define UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPAD_OFFSET UNITYSDK_OFFSET(0x9E3D740)
#define UNITY_XR_OPENVR_VIVEWAND_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3D760)
#define UNITY_XR_OPENVR_VIVEWAND_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3D780)
#define UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3D7A0)
#define UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x9E3D7B0)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int ViveWand_TypeDefinitionIndex = 28357;

	class ViveWand : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _primary_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadPressed_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadTouched_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector2Control* _trackpad_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1D8

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primary()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_PRIMARY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_TRIGGER_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_GRIPPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_TRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPADPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_TRIGGERPRESSED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_DEVICEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_PRIMARY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_TRIGGERPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_GRIPPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_GRIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_GRIP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_DEVICEVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_trackpad()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPAD_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPADPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_trackpad(::UnityEngine::InputSystem::Controls::Vector2Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector2Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPAD_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_DEVICEVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_DEVICEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadTouched()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_GET_TRACKPADTOUCHED_OFFSET))(nullptr);
		}

		::System::Void set_trackpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVEWAND_SET_TRACKPADTOUCHED_OFFSET))(arg, nullptr);
		}

	};
}

