#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_PERMANENTRAIDGIVEUPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B4A0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDGIVEUPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B4B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int PermanentRaidGiveUpResponse_TypeDefinitionIndex = 11998;

	class PermanentRaidGiveUpResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDGIVEUPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDGIVEUPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

