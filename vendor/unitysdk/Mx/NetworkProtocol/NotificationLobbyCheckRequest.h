#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_NOTIFICATIONLOBBYCHECKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4AF00)
#define MX_NETWORKPROTOCOL_NOTIFICATIONLOBBYCHECKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AF10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int NotificationLobbyCheckRequest_TypeDefinitionIndex = 11979;

	class NotificationLobbyCheckRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_NOTIFICATIONLOBBYCHECKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_NOTIFICATIONLOBBYCHECKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

