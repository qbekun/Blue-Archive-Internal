#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F568F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x9F56930)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int LinearAccelerationState_TypeDefinitionIndex = 28763;

	class LinearAccelerationState : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* acceleration; // 0x10

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_kFormat()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_LINEARACCELERATIONSTATE_GET_KFORMAT_OFFSET))(nullptr);
		}

	};
}

