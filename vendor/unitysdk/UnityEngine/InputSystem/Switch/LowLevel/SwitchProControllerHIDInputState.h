#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::Switch::LowLevel { class SwitchProControllerHIDInputState; }

#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_PRESS_OFFSET UNITYSDK_OFFSET(0x9F3D810)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_SET_OFFSET UNITYSDK_OFFSET(0x9F3D8A0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F3D900)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_RELEASE_OFFSET UNITYSDK_OFFSET(0x9F3D950)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F3D9E0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x9F3DA50)

namespace UnityEngine::InputSystem::Switch::LowLevel
{
	inline static constexpr unsigned int SwitchProControllerHIDInputState_TypeDefinitionIndex = 28650;

	class SwitchProControllerHIDInputState : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::FourCC* Format; // 0x0
		::System::Byte leftStickX; // 0x10
		::System::Byte leftStickY; // 0x11
		::System::Byte rightStickX; // 0x12
		::System::Byte rightStickY; // 0x13
		::System::UInt16 buttons1; // 0x14
		::System::Byte buttons2; // 0x16

		::System::Void Press(Button* arg)
		{
			((::System::Void(*)(Button*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_PRESS_OFFSET))(arg, nullptr);
		}

		::System::Void Set(Button* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Button*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_SET_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Void Release(Button* arg)
		{
			((::System::Void(*)(Button*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState* WithButton(Button* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState*(*)(Button*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_WITHBUTTON_OFFSET))(arg, arg, nullptr);
		}

	};
}

