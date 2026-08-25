#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF455F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45600)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF45610)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF45620)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentCollectionForMissionRequest_TypeDefinitionIndex = 11741;

	class EventContentCollectionForMissionRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

