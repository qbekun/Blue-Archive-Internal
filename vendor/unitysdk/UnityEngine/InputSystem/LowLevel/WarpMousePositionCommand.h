#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class WarpMousePositionCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F56050)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F56090)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F560F0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int WarpMousePositionCommand_TypeDefinitionIndex = 28742;

	class WarpMousePositionCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::UnityEngine::Vector2* warpPositionInPlayerDisplaySpace; // 0x18

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::WarpMousePositionCommand* Create(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::WarpMousePositionCommand*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_CREATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_WARPMOUSEPOSITIONCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

	};
}

