#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKSUPPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9F539C0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualShockSupport_TypeDefinitionIndex = 28697;

	class DualShockSupport : public Il2CppObject
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCKSUPPORT_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

