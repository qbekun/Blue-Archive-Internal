#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_PERMANENTRAIDGIVEUPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B480)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDGIVEUPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B490)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int PermanentRaidGiveUpRequest_TypeDefinitionIndex = 11997;

	class PermanentRaidGiveUpRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDGIVEUPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDGIVEUPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

