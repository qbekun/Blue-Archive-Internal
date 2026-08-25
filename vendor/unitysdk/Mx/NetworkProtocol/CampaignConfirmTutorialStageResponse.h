#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNCONFIRMTUTORIALSTAGERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF15400)
#define MX_NETWORKPROTOCOL_CAMPAIGNCONFIRMTUTORIALSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15410)
#define MX_NETWORKPROTOCOL_CAMPAIGNCONFIRMTUTORIALSTAGERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF15420)
#define MX_NETWORKPROTOCOL_CAMPAIGNCONFIRMTUTORIALSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15430)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignConfirmTutorialStageResponse_TypeDefinitionIndex = 11445;

	class CampaignConfirmTutorialStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x50

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCONFIRMTUTORIALSTAGERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCONFIRMTUTORIALSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCONFIRMTUTORIALSTAGERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCONFIRMTUTORIALSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

