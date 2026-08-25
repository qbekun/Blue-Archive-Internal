#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class EnableIMECompositionCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F54B30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_IMEENABLED_OFFSET UNITYSDK_OFFSET(0x9F54B70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F54B80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F54BC0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int EnableIMECompositionCommand_TypeDefinitionIndex = 28716;

	class EnableIMECompositionCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::System::Byte m_ImeEnabled; // 0x18

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_imeEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_IMEENABLED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::EnableIMECompositionCommand* Create(::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::EnableIMECompositionCommand*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ENABLEIMECOMPOSITIONCOMMAND_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

