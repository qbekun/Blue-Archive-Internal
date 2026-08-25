#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTRESETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10720)
#define MX_NETWORKPROTOCOL_ACCOUNTRESETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10730)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountResetResponse_TypeDefinitionIndex = 11270;

	class AccountResetResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTRESETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTRESETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

