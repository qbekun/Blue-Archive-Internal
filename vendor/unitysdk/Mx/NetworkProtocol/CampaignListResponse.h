#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_GET_STRATEGYOBJECTHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF145F0)
#define MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_SET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF14600)
#define MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_SET_STRATEGYOBJECTHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF14610)
#define MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_SET_CAMPAIGNCHAPTERCLEARREWARDHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF14620)
#define MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14630)
#define MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14640)
#define MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_GET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF14650)
#define MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_GET_CAMPAIGNCHAPTERCLEARREWARDHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF14660)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignListResponse_TypeDefinitionIndex = 11411;

	class CampaignListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CampaignChapterClearRewardHistoryDBs_k__BackingField; // 0x50
		Il2CppObject* _StageHistoryDBs_k__BackingField; // 0x58
		Il2CppObject* _StrategyObjecthistoryDBs_k__BackingField; // 0x60

		Il2CppObject* get_StrategyObjecthistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_GET_STRATEGYOBJECTHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_StageHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_SET_STAGEHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_StrategyObjecthistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_SET_STRATEGYOBJECTHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CampaignChapterClearRewardHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_SET_CAMPAIGNCHAPTERCLEARREWARDHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_StageHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_GET_STAGEHISTORYDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CampaignChapterClearRewardHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNLISTRESPONSE_GET_CAMPAIGNCHAPTERCLEARREWARDHISTORYDBS_OFFSET))(nullptr);
		}

	};
}

