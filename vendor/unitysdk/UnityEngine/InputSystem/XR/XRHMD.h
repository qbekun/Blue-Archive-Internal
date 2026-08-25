#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }

#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F22EF0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F22F10)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F22F30)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F230D0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F230F0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F23100)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F23110)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F23120)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F23130)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F23150)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F23160)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEROTATION_OFFSET UNITYSDK_OFFSET(0x9F23170)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F23190)
#define UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F231B0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRHMD_TypeDefinitionIndex = 28572;

	class XRHMD : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyePosition_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::QuaternionControl* _leftEyeRotation_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyePosition_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::QuaternionControl* _rightEyeRotation_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyePosition_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::QuaternionControl* _centerEyeRotation_k__BackingField; // 0x1B8

		::System::Void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::QuaternionControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_centerEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::QuaternionControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation()
		{
			return (return (::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation()
		{
			return (return (::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_RIGHTEYEPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_LEFTEYEPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_centerEyeRotation()
		{
			return (return (::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyePosition()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_CENTEREYEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_centerEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::QuaternionControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_CENTEREYEROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_SET_RIGHTEYEPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRHMD_GET_LEFTEYEPOSITION_OFFSET))(nullptr);
		}

	};
}

