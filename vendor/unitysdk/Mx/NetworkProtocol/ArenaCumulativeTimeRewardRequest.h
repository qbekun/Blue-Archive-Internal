#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF110C0)
#define MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF110D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaCumulativeTimeRewardRequest_TypeDefinitionIndex = 11293;

	class ArenaCumulativeTimeRewardRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENACUMULATIVETIMEREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

