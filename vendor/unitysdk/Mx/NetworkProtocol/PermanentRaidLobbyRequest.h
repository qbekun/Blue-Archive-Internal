#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B240)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B250)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int PermanentRaidLobbyRequest_TypeDefinitionIndex = 11991;

	class PermanentRaidLobbyRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

