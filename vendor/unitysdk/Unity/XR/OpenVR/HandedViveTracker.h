#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D900)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRACKPADPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D920)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3D930)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D950)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3D960)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x9E3D970)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D980)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRACKPADPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3D990)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3D9B0)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x9E3DB10)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x9E3DB30)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x9E3DB50)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int HandedViveTracker_TypeDefinitionIndex = 28360;

	class HandedViveTracker : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _primary_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadPressed_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x1C0

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRIGGERPRESSED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRACKPADPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIPPRESSED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primary()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_PRIMARY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRIGGERPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRACKPADPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIPPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_PRIMARY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIP_OFFSET))(nullptr);
		}

	};
}

