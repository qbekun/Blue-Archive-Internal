#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10300)
#define MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10310)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CheckAccountLevelRewardRequest_TypeDefinitionIndex = 11263;

	class CheckAccountLevelRewardRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

