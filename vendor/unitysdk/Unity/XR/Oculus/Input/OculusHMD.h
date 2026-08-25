#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E050)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E070)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E090)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E0B0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E0D0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E0E0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E0F0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E110)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_USERPRESENCE_OFFSET UNITYSDK_OFFSET(0x9E3E130)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E140)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E150)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3E170)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E3E180)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E4A0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E4C0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E4D0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E4E0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E500)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E510)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E520)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E540)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E550)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E560)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEANGULARACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E580)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E590)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9E3E5A0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_USERPRESENCE_OFFSET UNITYSDK_OFFSET(0x9E3E5B0)
#define UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x9E3E5D0)

namespace Unity::XR::Oculus::Input
{
	inline static constexpr unsigned int OculusHMD_TypeDefinitionIndex = 28362;

	class OculusHMD : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField; // 0x1D8
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularVelocity_k__BackingField; // 0x1E0
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAcceleration_k__BackingField; // 0x1E8
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularAcceleration_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularVelocity_k__BackingField; // 0x1F8
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAcceleration_k__BackingField; // 0x200
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularAcceleration_k__BackingField; // 0x208
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularVelocity_k__BackingField; // 0x210
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAcceleration_k__BackingField; // 0x218
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularAcceleration_k__BackingField; // 0x220

		::System::Void set_leftEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEANGULARACCELERATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_centerEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEANGULARACCELERATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEACCELERATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEANGULARACCELERATION_OFFSET))(nullptr);
		}

		::System::Void set_rightEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_centerEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEACCELERATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_USERPRESENCE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEANGULARACCELERATION_OFFSET))(nullptr);
		}

		::System::Void set_rightEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEANGULARACCELERATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_leftEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEACCELERATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEANGULARACCELERATION_OFFSET))(nullptr);
		}

		::System::Void set_rightEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_RIGHTEYEACCELERATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_CENTEREYEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEACCELERATION_OFFSET))(nullptr);
		}

		::System::Void set_centerEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_CENTEREYEANGULARACCELERATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_DEVICEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_leftEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_LEFTEYEACCELERATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEANGULARACCELERATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAcceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_RIGHTEYEACCELERATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_GET_LEFTEYEANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_USERPRESENCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OCULUS_INPUT_OCULUSHMD_SET_DEVICEACCELERATION_OFFSET))(arg, nullptr);
		}

	};
}

