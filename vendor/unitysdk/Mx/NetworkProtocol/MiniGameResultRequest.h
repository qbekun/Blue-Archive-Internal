#pragma once
#include "../../unitysdk.h"

class MinigameRhythmSummary;
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF482E0)
#define MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF482F0)
#define MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF48300)
#define MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48310)
#define MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48320)
#define MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF48330)
#define MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48340)
#define MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48350)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameResultRequest_TypeDefinitionIndex = 11863;

	class MiniGameResultRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _UniqueId_k__BackingField; // 0x48
		MinigameRhythmSummary* _Summary_k__BackingField; // 0x50

		MinigameRhythmSummary* get_Summary()
		{
			return ((MinigameRhythmSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_Summary(MinigameRhythmSummary* arg)
		{
			((::System::Void(*)(MinigameRhythmSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMERESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

