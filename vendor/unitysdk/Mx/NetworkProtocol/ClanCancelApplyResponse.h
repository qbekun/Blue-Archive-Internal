#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANCANCELAPPLYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF168E0)
#define MX_NETWORKPROTOCOL_CLANCANCELAPPLYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF168F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanCancelApplyResponse_TypeDefinitionIndex = 11505;

	class ClanCancelApplyResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCANCELAPPLYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCANCELAPPLYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

