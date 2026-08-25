#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENADAILYREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11160)
#define MX_NETWORKPROTOCOL_ARENADAILYREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11170)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaDailyRewardRequest_TypeDefinitionIndex = 11295;

	class ArenaDailyRewardRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENADAILYREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENADAILYREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

