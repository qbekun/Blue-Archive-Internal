#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48180)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48190)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MemoryLobbyUpdateLobbyModeResponse_TypeDefinitionIndex = 11856;

	class MemoryLobbyUpdateLobbyModeResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

