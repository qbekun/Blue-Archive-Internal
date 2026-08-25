#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class SetIMECursorPositionCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9F55D80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F55D90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F55DD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F55E30)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int SetIMECursorPositionCommand_TypeDefinitionIndex = 28739;

	class SetIMECursorPositionCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::UnityEngine::Vector2* m_Position; // 0x18

		::UnityEngine::Vector2* get_position()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_POSITION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand* Create(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_CREATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SETIMECURSORPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

	};
}

