#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFERENAMEPRESETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13B50)
#define MX_NETWORKPROTOCOL_CAFERENAMEPRESETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13B60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeRenamePresetResponse_TypeDefinitionIndex = 11379;

	class CafeRenamePresetResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERENAMEPRESETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERENAMEPRESETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

