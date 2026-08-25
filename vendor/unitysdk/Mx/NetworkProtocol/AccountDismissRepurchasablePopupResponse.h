#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FBE0)
#define MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FBF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountDismissRepurchasablePopupResponse_TypeDefinitionIndex = 11254;

	class AccountDismissRepurchasablePopupResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

