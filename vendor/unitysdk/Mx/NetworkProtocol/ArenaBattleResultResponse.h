#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENABATTLERESULTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10EC0)
#define MX_NETWORKPROTOCOL_ARENABATTLERESULTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10ED0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaBattleResultResponse_TypeDefinitionIndex = 11288;

	class ArenaBattleResultResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENABATTLERESULTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENABATTLERESULTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

