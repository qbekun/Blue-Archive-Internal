#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_XINPUT_IXBOXONERUMBLE_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int IXboxOneRumble_TypeDefinitionIndex = 28599;

	class IXboxOneRumble : public Il2CppObject
	{
	public:
		::System::Void SetMotorSpeeds(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_IXBOXONERUMBLE_SETMOTORSPEEDS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

