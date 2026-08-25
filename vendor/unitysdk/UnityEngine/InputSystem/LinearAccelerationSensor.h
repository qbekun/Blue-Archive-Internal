#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem { class LinearAccelerationSensor; }

#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9F00CA0)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x9F00D30)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F00D40)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x9F00D90)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F00DB0)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9F00DC0)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F00E20)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F00E90)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int LinearAccelerationSensor_TypeDefinitionIndex = 28527;

	class LinearAccelerationSensor : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _acceleration_k__BackingField; // 0x170
		::UnityEngine::InputSystem::LinearAccelerationSensor* _current_k__BackingField; // 0x0

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_ONREMOVED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_acceleration()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_ACCELERATION_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::LinearAccelerationSensor* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LinearAccelerationSensor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_ACCELERATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LinearAccelerationSensor* get_current()
		{
			return (return (::UnityEngine::InputSystem::LinearAccelerationSensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

