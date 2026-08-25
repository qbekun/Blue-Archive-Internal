#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10780)
#define MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10790)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountRequestBirthdayMailResponse_TypeDefinitionIndex = 11272;

	class AccountRequestBirthdayMailResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREQUESTBIRTHDAYMAILRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

