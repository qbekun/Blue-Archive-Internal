#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem { class Accelerometer; }

#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x9F003E0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x9F00400)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9F00410)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F004A0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9F00510)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F00570)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F00580)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F005C0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Accelerometer_TypeDefinitionIndex = 28523;

	class Accelerometer : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _acceleration_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Accelerometer* _current_k__BackingField; // 0x0

		::System::Void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_ACCELERATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_acceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_ACCELERATION_OFFSET))(nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_ONREMOVED_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Accelerometer* get_current()
		{
			return (return (::UnityEngine::InputSystem::Accelerometer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::Accelerometer* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Accelerometer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_CURRENT_OFFSET))(arg, nullptr);
		}

	};
}

