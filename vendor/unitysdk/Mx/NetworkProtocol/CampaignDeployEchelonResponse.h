#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14890)
#define MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF148A0)
#define MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF148B0)
#define MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF148C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignDeployEchelonResponse_TypeDefinitionIndex = 11419;

	class CampaignDeployEchelonResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNDEPLOYECHELONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

