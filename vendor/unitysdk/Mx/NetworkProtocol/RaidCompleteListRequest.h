#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDCOMPLETELISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4C6F0)
#define MX_NETWORKPROTOCOL_RAIDCOMPLETELISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4C700)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidCompleteListRequest_TypeDefinitionIndex = 12019;

	class RaidCompleteListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCOMPLETELISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCOMPLETELISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

