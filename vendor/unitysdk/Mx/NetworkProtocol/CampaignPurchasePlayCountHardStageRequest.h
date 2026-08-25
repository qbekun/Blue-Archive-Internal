#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF15440)
#define MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15450)
#define MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF15460)
#define MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15470)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignPurchasePlayCountHardStageRequest_TypeDefinitionIndex = 11446;

	class CampaignPurchasePlayCountHardStageRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

