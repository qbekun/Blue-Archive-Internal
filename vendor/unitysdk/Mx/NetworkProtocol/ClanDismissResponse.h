#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANDISMISSRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16C00)
#define MX_NETWORKPROTOCOL_CLANDISMISSRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16C10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanDismissResponse_TypeDefinitionIndex = 11515;

	class ClanDismissResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANDISMISSRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANDISMISSRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

