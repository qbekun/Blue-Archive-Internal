#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNRESTARTMAINSTAGEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF154E0)
#define MX_NETWORKPROTOCOL_CAMPAIGNRESTARTMAINSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF154F0)
#define MX_NETWORKPROTOCOL_CAMPAIGNRESTARTMAINSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF15500)
#define MX_NETWORKPROTOCOL_CAMPAIGNRESTARTMAINSTAGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15510)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignRestartMainStageRequest_TypeDefinitionIndex = 11448;

	class CampaignRestartMainStageRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRESTARTMAINSTAGEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRESTARTMAINSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRESTARTMAINSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRESTARTMAINSTAGEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

