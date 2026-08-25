#pragma once
#include "../../../../../unitysdk.h"

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IPOOLABLECOMPONENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IPOOLABLECOMPONENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int IPoolableComponent_TypeDefinitionIndex = 10424;

	class IPoolableComponent : public Il2CppObject
	{
	public:
		::System::Void Despawned()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IPOOLABLECOMPONENT_DESPAWNED_OFFSET))(nullptr);
		}

		::System::Void Spawned()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IPOOLABLECOMPONENT_SPAWNED_OFFSET))(nullptr);
		}

	};
}

