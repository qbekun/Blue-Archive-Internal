#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43AC0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF43AD0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF43AE0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF43AF0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43B00)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF43B10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentEnterMainStageRequest_TypeDefinitionIndex = 11683;

	class EventContentEnterMainStageRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _StageUniqueId_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

