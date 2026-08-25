#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTRECEIVESTAGETOTALREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44940)
#define MX_NETWORKPROTOCOL_EVENTCONTENTRECEIVESTAGETOTALREWARDREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF44950)
#define MX_NETWORKPROTOCOL_EVENTCONTENTRECEIVESTAGETOTALREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44960)
#define MX_NETWORKPROTOCOL_EVENTCONTENTRECEIVESTAGETOTALREWARDREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF44970)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentReceiveStageTotalRewardRequest_TypeDefinitionIndex = 11713;

	class EventContentReceiveStageTotalRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTRECEIVESTAGETOTALREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTRECEIVESTAGETOTALREWARDREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTRECEIVESTAGETOTALREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTRECEIVESTAGETOTALREWARDREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

