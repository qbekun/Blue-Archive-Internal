#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class QueryDimensionsCommand; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F55220)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F55260)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_CREATE_OFFSET UNITYSDK_OFFSET(0x9F552A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int QueryDimensionsCommand_TypeDefinitionIndex = 28724;

	class QueryDimensionsCommand : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* baseCommand; // 0x10
		::UnityEngine::Vector2* outDimensions; // 0x18

		::UnityEngine::InputSystem::Utilities::FourCC* get_Type()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand* Create()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_QUERYDIMENSIONSCOMMAND_CREATE_OFFSET))(nullptr);
		}

	};
}

