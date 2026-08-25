#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class UseWindowsGamingInputCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_USEWINDOWSGAMINGINPUTCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F55F50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_USEWINDOWSGAMINGINPUTCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F55F90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_USEWINDOWSGAMINGINPUTCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F56010)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int UseWindowsGamingInputCommand_TypeDefinitionIndex = 28741;

	class UseWindowsGamingInputCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Byte enable; // 0x18

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_USEWINDOWSGAMINGINPUTCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::UseWindowsGamingInputCommand* Create(::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::UseWindowsGamingInputCommand*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_USEWINDOWSGAMINGINPUTCOMMAND_CREATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_USEWINDOWSGAMINGINPUTCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

	};
}

