#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHROUNDCOMPLETEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46630)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHROUNDCOMPLETEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46640)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHROUNDCOMPLETEREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF46650)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHROUNDCOMPLETEREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF46660)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentClueSearchRoundCompleteRequest_TypeDefinitionIndex = 11785;

	class EventContentClueSearchRoundCompleteRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHROUNDCOMPLETEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHROUNDCOMPLETEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHROUNDCOMPLETEREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHROUNDCOMPLETEREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

