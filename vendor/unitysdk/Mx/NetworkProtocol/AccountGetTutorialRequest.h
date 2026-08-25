#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F7A0)
#define MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F7B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountGetTutorialRequest_TypeDefinitionIndex = 11243;

	class AccountGetTutorialRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

