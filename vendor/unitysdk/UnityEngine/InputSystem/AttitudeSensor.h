#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem { class AttitudeSensor; }

#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x9F00A70)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9F00A90)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F00AF0)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F00B60)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F00BB0)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F00BC0)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x9F00C00)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9F00C10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int AttitudeSensor_TypeDefinitionIndex = 28526;

	class AttitudeSensor : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::QuaternionControl* _attitude_k__BackingField; // 0x170
		::UnityEngine::InputSystem::AttitudeSensor* _current_k__BackingField; // 0x0

		::System::Void set_attitude(::UnityEngine::InputSystem::Controls::QuaternionControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::QuaternionControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_ATTITUDE_OFFSET))(arg, nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::AttitudeSensor* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::AttitudeSensor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::AttitudeSensor* get_current()
		{
			return (return (::UnityEngine::InputSystem::AttitudeSensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_attitude()
		{
			return (return (::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_ATTITUDE_OFFSET))(nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_ONREMOVED_OFFSET))(nullptr);
		}

	};
}

