#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNPORTALRESPONSE_GET_CAMPAIGNMAINSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xF15380)
#define MX_NETWORKPROTOCOL_CAMPAIGNPORTALRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15390)
#define MX_NETWORKPROTOCOL_CAMPAIGNPORTALRESPONSE_SET_CAMPAIGNMAINSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xF153A0)
#define MX_NETWORKPROTOCOL_CAMPAIGNPORTALRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF153B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignPortalResponse_TypeDefinitionIndex = 11443;

	class CampaignPortalResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* _CampaignMainStageSaveDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* get_CampaignMainStageSaveDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPORTALRESPONSE_GET_CAMPAIGNMAINSTAGESAVEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPORTALRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CampaignMainStageSaveDB(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPORTALRESPONSE_SET_CAMPAIGNMAINSTAGESAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPORTALRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

