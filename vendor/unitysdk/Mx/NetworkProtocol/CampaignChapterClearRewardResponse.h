#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignChapterClearRewardHistoryDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14F00)
#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_SET_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF14F10)
#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF14F20)
#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF14F30)
#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_GET_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF14F40)
#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14F50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignChapterClearRewardResponse_TypeDefinitionIndex = 11433;

	class CampaignChapterClearRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CampaignChapterClearRewardHistoryDB* _CampaignChapterClearRewardHistoryDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CampaignChapterClearRewardHistoryDB(::MX::GameLogic::DBModel::CampaignChapterClearRewardHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignChapterClearRewardHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_SET_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignChapterClearRewardHistoryDB* get_CampaignChapterClearRewardHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignChapterClearRewardHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_GET_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

