#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF500D0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF500E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonLoginRequest_TypeDefinitionIndex = 12168;

	class TimeAttackDungeonLoginRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

