#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF444C0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF444D0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF444E0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF444F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF44500)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44510)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentEndTurnRequest_TypeDefinitionIndex = 11701;

	class EventContentEndTurnRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _StageUniqueId_k__BackingField; // 0x48

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

