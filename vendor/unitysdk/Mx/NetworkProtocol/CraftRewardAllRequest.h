#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTREWARDALLREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF421C0)
#define MX_NETWORKPROTOCOL_CRAFTREWARDALLREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF421D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftRewardAllRequest_TypeDefinitionIndex = 11617;

	class CraftRewardAllRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDALLREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDALLREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

