#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MEMORYLOBBYINTERACTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF481A0)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYINTERACTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF481B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MemoryLobbyInteractRequest_TypeDefinitionIndex = 11857;

	class MemoryLobbyInteractRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYINTERACTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYINTERACTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

