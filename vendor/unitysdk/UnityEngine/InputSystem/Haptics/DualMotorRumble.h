#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SET_LOWFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x9F541D0)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9F541E0)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x9F54430)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_ISRUMBLING_OFFSET UNITYSDK_OFFSET(0x9F54340)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_LOWFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x9F54640)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x9F54650)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SET_HIGHFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x9F54810)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x9F54820)
#define UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_HIGHFREQUENCYMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x9F54980)

namespace UnityEngine::InputSystem::Haptics
{
	inline static constexpr unsigned int DualMotorRumble_TypeDefinitionIndex = 28711;

	class DualMotorRumble : public Il2CppObject
	{
	public:
		::System::Single _lowFrequencyMotorSpeed_k__BackingField; // 0x10
		::System::Single _highFrequencyMotorSpeed_k__BackingField; // 0x14

		::System::Void set_lowFrequencyMotorSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SET_LOWFREQUENCYMOTORSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void ResumeHaptics(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_RESUMEHAPTICS_OFFSET))(arg, nullptr);
		}

		::System::Void SetMotorSpeeds(::UnityEngine::InputSystem::InputDevice* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SETMOTORSPEEDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_isRumbling()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_ISRUMBLING_OFFSET))(nullptr);
		}

		::System::Single get_lowFrequencyMotorSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_LOWFREQUENCYMOTORSPEED_OFFSET))(nullptr);
		}

		::System::Void PauseHaptics(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_PAUSEHAPTICS_OFFSET))(arg, nullptr);
		}

		::System::Void set_highFrequencyMotorSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_SET_HIGHFREQUENCYMOTORSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void ResetHaptics(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_RESETHAPTICS_OFFSET))(arg, nullptr);
		}

		::System::Single get_highFrequencyMotorSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_DUALMOTORRUMBLE_GET_HIGHFREQUENCYMOTORSPEED_OFFSET))(nullptr);
		}

	};
}

