#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42FC0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42FD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidSeasonRewardRequest_TypeDefinitionIndex = 11653;

	class EliminateRaidSeasonRewardRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSEASONREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

