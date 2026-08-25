#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_HAPTICS_IDUALMOTORRUMBLE_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Haptics
{
	inline static constexpr unsigned int IDualMotorRumble_TypeDefinitionIndex = 28712;

	class IDualMotorRumble : public Il2CppObject
	{
	public:
		::System::Void SetMotorSpeeds(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HAPTICS_IDUALMOTORRUMBLE_SETMOTORSPEEDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

