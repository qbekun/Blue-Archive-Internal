#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OPENVR_OPENVRHMD_SET_RIGHTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CAD0)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CAF0)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_RIGHTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CB10)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_CENTEREYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CB20)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_CENTEREYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CB40)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CB50)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_LEFTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CB60)
#define UNITY_XR_OPENVR_OPENVRHMD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3CB80)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_LEFTEYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CB90)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_LEFTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CBB0)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CBC0)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_LEFTEYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CBE0)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_RIGHTEYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CBF0)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_CENTEREYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CC00)
#define UNITY_XR_OPENVR_OPENVRHMD_SET_RIGHTEYEVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CC20)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CC40)
#define UNITY_XR_OPENVR_OPENVRHMD_GET_CENTEREYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3CC50)
#define UNITY_XR_OPENVR_OPENVRHMD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3CC60)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int OpenVRHMD_TypeDefinitionIndex = 28355;

	class OpenVRHMD : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeVelocity_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularVelocity_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeVelocity_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularVelocity_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeVelocity_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularVelocity_k__BackingField; // 0x1F8

		::System::Void set_rightEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_RIGHTEYEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_DEVICEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_RIGHTEYEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_centerEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_CENTEREYEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_CENTEREYEVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_DEVICEVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_leftEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_LEFTEYEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_leftEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_LEFTEYEVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_LEFTEYEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_DEVICEVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_LEFTEYEVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_RIGHTEYEVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_centerEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_CENTEREYEVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_rightEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_SET_RIGHTEYEVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_DEVICEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_GET_CENTEREYEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVRHMD_FINISHSETUP_OFFSET))(nullptr);
		}

	};
}

