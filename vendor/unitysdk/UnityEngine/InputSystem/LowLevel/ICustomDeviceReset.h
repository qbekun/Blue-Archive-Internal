#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ICUSTOMDEVICERESET_RESET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int ICustomDeviceReset_TypeDefinitionIndex = 28746;

	class ICustomDeviceReset : public Il2CppObject
	{
	public:
		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ICUSTOMDEVICERESET_RESET_OFFSET))(nullptr);
		}

	};
}

