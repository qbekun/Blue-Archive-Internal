#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class CampaignTutorialStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF14830)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14840)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF14850)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF14860)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF14870)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14880)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignEnterTutorialStageResponse_TypeDefinitionIndex = 11418;

	class CampaignEnterTutorialStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CampaignTutorialStageSaveDB* _SaveDataDB_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::CampaignTutorialStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignTutorialStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignTutorialStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignTutorialStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTUTORIALSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

