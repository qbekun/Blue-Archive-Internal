#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_PROOFTOKENSUBMITREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B500)
#define MX_NETWORKPROTOCOL_PROOFTOKENSUBMITREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B510)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ProofTokenSubmitRequest_TypeDefinitionIndex = 12001;

	class ProofTokenSubmitRequest : public Il2CppObject
	{
	public:
		::System::Int64 Answer; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PROOFTOKENSUBMITREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PROOFTOKENSUBMITREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

