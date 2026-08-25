#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F234A0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE_SENDIMPULSE_OFFSET UNITYSDK_OFFSET(0x9F234B0)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRControllerWithRumble_TypeDefinitionIndex = 28574;

	class XRControllerWithRumble : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SendImpulse(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRCONTROLLERWITHRUMBLE_SENDIMPULSE_OFFSET))(arg, arg, nullptr);
		}

	};
}

