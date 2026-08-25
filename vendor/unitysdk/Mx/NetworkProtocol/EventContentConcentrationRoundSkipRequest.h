#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDSKIPREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF46430)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDSKIPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46440)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDSKIPREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF46450)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDSKIPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46460)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentConcentrationRoundSkipRequest_TypeDefinitionIndex = 11779;

	class EventContentConcentrationRoundSkipRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDSKIPREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDSKIPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDSKIPREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONROUNDSKIPREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

