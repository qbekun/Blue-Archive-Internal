#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem { class Gyroscope; }

#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9F00610)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F00630)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9F006A0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F00730)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F00780)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x9F007C0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F007D0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9F007E0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Gyroscope_TypeDefinitionIndex = 28524;

	class Gyroscope : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Gyroscope* _current_k__BackingField; // 0x0

		::System::Void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_ANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_ONREMOVED_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::Gyroscope* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Gyroscope*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Gyroscope* get_current()
		{
			return (return (::UnityEngine::InputSystem::Gyroscope*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_CURRENT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_ANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_MAKECURRENT_OFFSET))(nullptr);
		}

	};
}

