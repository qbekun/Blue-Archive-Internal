#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_PROOFTOKENSUBMITRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B520)
#define MX_NETWORKPROTOCOL_PROOFTOKENSUBMITRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B530)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ProofTokenSubmitResponse_TypeDefinitionIndex = 12002;

	class ProofTokenSubmitResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PROOFTOKENSUBMITRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PROOFTOKENSUBMITRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

