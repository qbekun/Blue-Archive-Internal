#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_NETWORKTIMESYNCREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4AE80)
#define MX_NETWORKPROTOCOL_NETWORKTIMESYNCREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AE90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int NetworkTimeSyncRequest_TypeDefinitionIndex = 11977;

	class NetworkTimeSyncRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_NETWORKTIMESYNCREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_NETWORKTIMESYNCREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

