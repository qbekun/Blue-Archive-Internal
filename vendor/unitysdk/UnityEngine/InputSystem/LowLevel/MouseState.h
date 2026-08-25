#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class MouseState; }
namespace UnityEngine::InputSystem::LowLevel { class MouseButton; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F564E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F56520)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x9F56560)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int MouseState_TypeDefinitionIndex = 28755;

	class MouseState : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* position; // 0x10
		::UnityEngine::Vector2* delta; // 0x18
		::UnityEngine::Vector2* scroll; // 0x20
		::System::UInt16 buttons; // 0x28
		::System::UInt16 displayIndex; // 0x2A
		::System::UInt16 clickCount; // 0x2C

		::UnityEngine::InputSystem::Utilities::FourCC* get_Format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::MouseState* WithButton(::UnityEngine::InputSystem::LowLevel::MouseButton* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::MouseState*(*)(::UnityEngine::InputSystem::LowLevel::MouseButton*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_MOUSESTATE_WITHBUTTON_OFFSET))(arg, arg, nullptr);
		}

	};
}

