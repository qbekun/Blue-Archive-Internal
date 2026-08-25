#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45F70)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45F80)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF45F90)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF45FA0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentTreasureLobbyRequest_TypeDefinitionIndex = 11767;

	class EventContentTreasureLobbyRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

