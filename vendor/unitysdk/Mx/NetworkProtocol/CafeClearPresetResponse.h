#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFECLEARPRESETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13BD0)
#define MX_NETWORKPROTOCOL_CAFECLEARPRESETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13BE0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeClearPresetResponse_TypeDefinitionIndex = 11381;

	class CafeClearPresetResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFECLEARPRESETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFECLEARPRESETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

