#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class CampaignSubStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15040)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15050)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF15060)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF15070)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15080)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15090)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignEnterSubStageResponse_TypeDefinitionIndex = 11436;

	class CampaignEnterSubStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CampaignSubStageSaveDB* _SaveDataDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignSubStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignSubStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::CampaignSubStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignSubStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERSUBSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

