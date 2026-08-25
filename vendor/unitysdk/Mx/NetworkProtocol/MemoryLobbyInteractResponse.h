#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MEMORYLOBBYINTERACTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF481C0)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYINTERACTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF481D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MemoryLobbyInteractResponse_TypeDefinitionIndex = 11858;

	class MemoryLobbyInteractResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYINTERACTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYINTERACTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

