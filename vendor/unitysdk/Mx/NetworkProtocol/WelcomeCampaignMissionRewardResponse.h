#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MissionHistoryDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50920)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF50930)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_GET_ADDEDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF50940)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF50950)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_SET_ADDEDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF50960)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50970)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WelcomeCampaignMissionRewardResponse_TypeDefinitionIndex = 12194;

	class WelcomeCampaignMissionRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MissionHistoryDB* _AddedHistoryDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MissionHistoryDB* get_AddedHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::MissionHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_GET_ADDEDHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_AddedHistoryDB(::MX::GameLogic::DBModel::MissionHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MissionHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_SET_ADDEDHISTORYDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

