#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3D7E0)
#define UNITY_XR_OPENVR_VIVETRACKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3D800)
#define UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3D810)
#define UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3D820)
#define UNITY_XR_OPENVR_VIVETRACKER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3D840)
#define UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3D8F0)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int ViveTracker_TypeDefinitionIndex = 28359;

	class ViveTracker : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x198

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_SET_DEVICEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_VIVETRACKER_GET_DEVICEVELOCITY_OFFSET))(nullptr);
		}

	};
}

