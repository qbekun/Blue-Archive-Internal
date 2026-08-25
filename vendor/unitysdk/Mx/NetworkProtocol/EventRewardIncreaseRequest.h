#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTREWARDINCREASEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46830)
#define MX_NETWORKPROTOCOL_EVENTREWARDINCREASEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46840)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventRewardIncreaseRequest_TypeDefinitionIndex = 11793;

	class EventRewardIncreaseRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTREWARDINCREASEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTREWARDINCREASEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

