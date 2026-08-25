#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F840)
#define MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F850)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountSetTutorialResponse_TypeDefinitionIndex = 11246;

	class AccountSetTutorialResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

