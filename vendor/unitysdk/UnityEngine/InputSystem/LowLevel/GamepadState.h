#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem::LowLevel { class GamepadState; }
namespace UnityEngine::InputSystem::LowLevel { class GamepadButton; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F56130)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x9F561C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F56200)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F56240)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int GamepadState_TypeDefinitionIndex = 28743;

	class GamepadState : public Il2CppObject
	{
	public:
		::System::String* ButtonSouthShortDisplayName; // 0x0
		::System::String* ButtonNorthShortDisplayName; // 0x0
		::System::String* ButtonWestShortDisplayName; // 0x0
		::System::String* ButtonEastShortDisplayName; // 0x0
		::System::UInt32 buttons; // 0x10
		::UnityEngine::Vector2* leftStick; // 0x14
		::UnityEngine::Vector2* rightStick; // 0x1C
		::System::Single leftTrigger; // 0x24
		::System::Single rightTrigger; // 0x28

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::GamepadState* WithButton(::UnityEngine::InputSystem::LowLevel::GamepadButton* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::GamepadState*(*)(::UnityEngine::InputSystem::LowLevel::GamepadButton*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_WITHBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

	};
}

