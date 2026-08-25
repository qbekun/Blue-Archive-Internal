#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MEMORYLOBBYLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48060)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48070)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MemoryLobbyListRequest_TypeDefinitionIndex = 11851;

	class MemoryLobbyListRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

