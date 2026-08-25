#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLERWINDOWS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F28EC0)

namespace UnityEngine::InputSystem::XInput
{
	inline static constexpr unsigned int XInputControllerWindows_TypeDefinitionIndex = 28605;

	class XInputControllerWindows : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_XINPUTCONTROLLERWINDOWS_.CTOR_OFFSET))(nullptr);
		}

	};
}

