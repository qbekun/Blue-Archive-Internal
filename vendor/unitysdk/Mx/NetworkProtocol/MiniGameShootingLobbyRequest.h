#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF485E0)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF485F0)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48600)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48610)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameShootingLobbyRequest_TypeDefinitionIndex = 11871;

	class MiniGameShootingLobbyRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

