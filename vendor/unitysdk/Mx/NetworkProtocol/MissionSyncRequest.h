#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MISSIONSYNCREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A780)
#define MX_NETWORKPROTOCOL_MISSIONSYNCREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A790)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MissionSyncRequest_TypeDefinitionIndex = 11955;

	class MissionSyncRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONSYNCREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONSYNCREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

