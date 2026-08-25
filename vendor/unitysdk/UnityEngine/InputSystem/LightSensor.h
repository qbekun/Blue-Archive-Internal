#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem { class LightSensor; }

#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9F01100)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_LIGHTLEVEL_OFFSET UNITYSDK_OFFSET(0x9F01190)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F011A0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F011E0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_LIGHTLEVEL_OFFSET UNITYSDK_OFFSET(0x9F01230)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F01250)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F012C0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9F012D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int LightSensor_TypeDefinitionIndex = 28529;

	class LightSensor : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _lightLevel_k__BackingField; // 0x170
		::UnityEngine::InputSystem::LightSensor* _current_k__BackingField; // 0x0

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_ONREMOVED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_lightLevel()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_LIGHTLEVEL_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LightSensor* get_current()
		{
			return (return (::UnityEngine::InputSystem::LightSensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::LightSensor* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LightSensor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_lightLevel(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_LIGHTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_MAKECURRENT_OFFSET))(nullptr);
		}

	};
}

