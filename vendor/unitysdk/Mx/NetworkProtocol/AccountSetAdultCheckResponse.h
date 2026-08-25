#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FCE0)
#define MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FCF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountSetAdultCheckResponse_TypeDefinitionIndex = 11260;

	class AccountSetAdultCheckResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETADULTCHECKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

