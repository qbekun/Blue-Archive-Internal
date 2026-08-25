#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF452F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45300)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF45310)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45320)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentBoxGachaShopListRequest_TypeDefinitionIndex = 11733;

	class EventContentBoxGachaShopListRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

