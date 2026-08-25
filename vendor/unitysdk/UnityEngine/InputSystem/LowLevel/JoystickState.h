#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F56300)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x9F56340)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int JoystickState_TypeDefinitionIndex = 28752;

	class JoystickState : public Il2CppObject
	{
	public:
		::System::Int32 buttons; // 0x10
		::UnityEngine::Vector2* stick; // 0x14

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_kFormat()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_KFORMAT_OFFSET))(nullptr);
		}

	};
}

