#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNRETREATREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14E00)
#define MX_NETWORKPROTOCOL_CAMPAIGNRETREATREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14E10)
#define MX_NETWORKPROTOCOL_CAMPAIGNRETREATREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14E20)
#define MX_NETWORKPROTOCOL_CAMPAIGNRETREATREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14E30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignRetreatRequest_TypeDefinitionIndex = 11430;

	class CampaignRetreatRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRETREATREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRETREATREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRETREATREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRETREATREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

