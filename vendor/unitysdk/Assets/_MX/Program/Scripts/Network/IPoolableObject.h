#pragma once
#include "../../../../../unitysdk.h"

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IPOOLABLEOBJECT_RESPAWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IPOOLABLEOBJECT_NEW_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int IPoolableObject_TypeDefinitionIndex = 10425;

	class IPoolableObject : public Il2CppObject
	{
	public:
		::System::Void Respawn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IPOOLABLEOBJECT_RESPAWN_OFFSET))(nullptr);
		}

		::System::Void New()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_IPOOLABLEOBJECT_NEW_OFFSET))(nullptr);
		}

	};
}

