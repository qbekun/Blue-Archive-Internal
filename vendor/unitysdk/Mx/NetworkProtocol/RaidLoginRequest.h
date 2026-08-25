#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDLOGINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4C450)
#define MX_NETWORKPROTOCOL_RAIDLOGINREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4C460)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidLoginRequest_TypeDefinitionIndex = 12013;

	class RaidLoginRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

