#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOGINREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF427E0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOGINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF427F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidLoginRequest_TypeDefinitionIndex = 11639;

	class EliminateRaidLoginRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOGINREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOGINREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

