#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTLINKREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FAB0)
#define MX_NETWORKPROTOCOL_ACCOUNTLINKREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FAC0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountLinkRewardRequest_TypeDefinitionIndex = 11249;

	class AccountLinkRewardRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLINKREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLINKREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

