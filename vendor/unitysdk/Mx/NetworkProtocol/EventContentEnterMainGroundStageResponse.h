#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class EventContentMainGroundStageSaveDB; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44A80)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF44A90)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44AA0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF44AB0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF44AC0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF44AD0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF44AE0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF44AF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentEnterMainGroundStageResponse_TypeDefinitionIndex = 11716;

	class EventContentEnterMainGroundStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::EventContentMainGroundStageSaveDB* _SaveDataDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _CampaignStageHistoryDB_k__BackingField; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_CampaignStageHistoryDB(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::EventContentMainGroundStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentMainGroundStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentMainGroundStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentMainGroundStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_CampaignStageHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINGROUNDSTAGERESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(nullptr);
		}

	};
}

