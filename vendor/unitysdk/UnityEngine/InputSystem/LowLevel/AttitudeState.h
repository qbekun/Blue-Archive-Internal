#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Quaternion; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F56870)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x9F568B0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int AttitudeState_TypeDefinitionIndex = 28762;

	class AttitudeState : public Il2CppObject
	{
	public:
		::UnityEngine::Quaternion* attitude; // 0x10

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_FORMAT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_kFormat()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ATTITUDESTATE_GET_KFORMAT_OFFSET))(nullptr);
		}

	};
}

