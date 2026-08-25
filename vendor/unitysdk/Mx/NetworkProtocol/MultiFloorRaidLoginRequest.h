#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4AE20)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AE30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MultiFloorRaidLoginRequest_TypeDefinitionIndex = 11975;

	class MultiFloorRaidLoginRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

