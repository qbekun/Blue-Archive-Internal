#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANKICKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16A00)
#define MX_NETWORKPROTOCOL_CLANKICKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16A10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanKickResponse_TypeDefinitionIndex = 11509;

	class ClanKickResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANKICKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANKICKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

