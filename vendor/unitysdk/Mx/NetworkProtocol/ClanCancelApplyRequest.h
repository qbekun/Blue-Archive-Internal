#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANCANCELAPPLYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF168C0)
#define MX_NETWORKPROTOCOL_CLANCANCELAPPLYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF168D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanCancelApplyRequest_TypeDefinitionIndex = 11504;

	class ClanCancelApplyRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCANCELAPPLYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCANCELAPPLYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

