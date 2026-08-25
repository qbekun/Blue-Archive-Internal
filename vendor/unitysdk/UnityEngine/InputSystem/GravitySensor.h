#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem { class GravitySensor; }

#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9F00840)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F008A0)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9F008F0)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x9F00980)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F009A0)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x9F00A10)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F00A20)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F00A30)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int GravitySensor_TypeDefinitionIndex = 28525;

	class GravitySensor : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _gravity_k__BackingField; // 0x170
		::UnityEngine::InputSystem::GravitySensor* _current_k__BackingField; // 0x0

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::GravitySensor* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::GravitySensor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_ONREMOVED_OFFSET))(nullptr);
		}

		::System::Void set_gravity(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_GRAVITY_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_gravity()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_GRAVITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::GravitySensor* get_current()
		{
			return (return (::UnityEngine::InputSystem::GravitySensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

