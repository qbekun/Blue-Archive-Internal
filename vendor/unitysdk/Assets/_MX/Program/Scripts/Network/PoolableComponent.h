#pragma once
#include "../../../../../unitysdk.h"

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLECOMPONENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE2B490)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLECOMPONENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE2B4A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLECOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE2B4B0)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int PoolableComponent_TypeDefinitionIndex = 10427;

	class PoolableComponent : public Il2CppObject
	{
	public:
		::System::Void Despawned()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLECOMPONENT_DESPAWNED_OFFSET))(nullptr);
		}

		::System::Void Spawned()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLECOMPONENT_SPAWNED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_POOLABLECOMPONENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

