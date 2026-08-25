#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::XInput::LowLevel { class XInputControllerWindowsState; }

#define UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F28FE0)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x9F29020)

namespace UnityEngine::InputSystem::XInput::LowLevel
{
	inline static constexpr unsigned int XInputControllerWindowsState_TypeDefinitionIndex = 28608;

	class XInputControllerWindowsState : public Il2CppObject
	{
	public:
		::System::UInt16 buttons; // 0x10
		::System::Byte leftTrigger; // 0x12
		::System::Byte rightTrigger; // 0x13
		::System::Int16 leftStickX; // 0x14
		::System::Int16 leftStickY; // 0x16
		::System::Int16 rightStickX; // 0x18
		::System::Int16 rightStickY; // 0x1A

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::XInput::LowLevel::XInputControllerWindowsState* WithButton(Button* arg)
		{
			return (return (::UnityEngine::InputSystem::XInput::LowLevel::XInputControllerWindowsState*(*)(Button*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_WITHBUTTON_OFFSET))(arg, nullptr);
		}

	};
}

