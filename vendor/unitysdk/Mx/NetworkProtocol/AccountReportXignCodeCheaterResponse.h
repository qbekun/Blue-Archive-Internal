#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FB80)
#define MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FB90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountReportXignCodeCheaterResponse_TypeDefinitionIndex = 11252;

	class AccountReportXignCodeCheaterResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTREPORTXIGNCODECHEATERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

