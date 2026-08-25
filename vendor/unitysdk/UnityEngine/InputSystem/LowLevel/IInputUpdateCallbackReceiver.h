#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTUPDATECALLBACKRECEIVER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int IInputUpdateCallbackReceiver_TypeDefinitionIndex = 28749;

	class IInputUpdateCallbackReceiver : public Il2CppObject
	{
	public:
		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTUPDATECALLBACKRECEIVER_ONUPDATE_OFFSET))(nullptr);
		}

	};
}

