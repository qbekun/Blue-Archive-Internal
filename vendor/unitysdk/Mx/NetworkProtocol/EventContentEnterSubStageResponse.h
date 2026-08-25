#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class EventContentSubStageSaveDB; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF43FD0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF43FE0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43FF0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF44000)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44010)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF44020)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF44030)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF44040)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentEnterSubStageResponse_TypeDefinitionIndex = 11692;

	class EventContentEnterSubStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::EventContentSubStageSaveDB* _SaveDataDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _CampaignStageHistoryDB_k__BackingField; // 0x60

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::EventContentSubStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentSubStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentSubStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentSubStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CampaignStageHistoryDB(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_CampaignStageHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERSUBSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

