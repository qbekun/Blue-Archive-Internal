#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14670)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14680)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14690)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF146A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignEnterMainStageRequest_TypeDefinitionIndex = 11412;

	class CampaignEnterMainStageRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERMAINSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

