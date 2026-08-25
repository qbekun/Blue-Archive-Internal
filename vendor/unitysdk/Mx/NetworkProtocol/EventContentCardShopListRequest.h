#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44F90)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPLISTREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF44FA0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44FB0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPLISTREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF44FC0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentCardShopListRequest_TypeDefinitionIndex = 11723;

	class EventContentCardShopListRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPLISTREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCARDSHOPLISTREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

