#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F56770)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x9F567B0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int GyroscopeState_TypeDefinitionIndex = 28760;

	class GyroscopeState : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* angularVelocity; // 0x10

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_kFormat()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GYROSCOPESTATE_GET_KFORMAT_OFFSET))(nullptr);
		}

	};
}

