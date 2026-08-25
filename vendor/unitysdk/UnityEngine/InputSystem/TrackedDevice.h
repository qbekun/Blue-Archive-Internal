#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }

#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x9F038F0)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_TRACKINGSTATE_OFFSET UNITYSDK_OFFSET(0x9F03900)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEROTATION_OFFSET UNITYSDK_OFFSET(0x9F03920)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F03930)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEROTATION_OFFSET UNITYSDK_OFFSET(0x9F03950)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x9F03970)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0x9F03980)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F039A0)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F039B0)
#define UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F039C0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int TrackedDevice_TypeDefinitionIndex = 28537;

	class TrackedDevice : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField; // 0x188

		::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState()
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_TRACKINGSTATE_OFFSET))(nullptr);
		}

		::System::Void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::IntegerControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_TRACKINGSTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation()
		{
			return (return (::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEROTATION_OFFSET))(nullptr);
		}

		::System::Void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::QuaternionControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_DEVICEROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_ISTRACKED_OFFSET))(nullptr);
		}

		::System::Void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_SET_ISTRACKED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_GET_DEVICEPOSITION_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_TRACKEDDEVICE_FINISHSETUP_OFFSET))(nullptr);
		}

	};
}

