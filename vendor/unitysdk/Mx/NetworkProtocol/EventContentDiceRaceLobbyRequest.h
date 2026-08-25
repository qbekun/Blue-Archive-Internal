#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45C10)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF45C20)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45C30)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF45C40)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentDiceRaceLobbyRequest_TypeDefinitionIndex = 11757;

	class EventContentDiceRaceLobbyRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

