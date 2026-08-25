#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0EBD0)
#define MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0EBE0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountCurrencySyncRequest_TypeDefinitionIndex = 11227;

	class AccountCurrencySyncRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

