#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14930)
#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF14940)
#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_SET_WITHDRAWECHELONDBS_OFFSET UNITYSDK_OFFSET(0xF14950)
#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14960)
#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF14970)
#define MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_GET_WITHDRAWECHELONDBS_OFFSET UNITYSDK_OFFSET(0xF14980)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignWithdrawEchelonResponse_TypeDefinitionIndex = 11421;

	class CampaignWithdrawEchelonResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x50
		Il2CppObject* _WithdrawEchelonDBs_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::System::Void set_WithdrawEchelonDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_SET_WITHDRAWECHELONDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		Il2CppObject* get_WithdrawEchelonDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNWITHDRAWECHELONRESPONSE_GET_WITHDRAWECHELONDBS_OFFSET))(nullptr);
		}

	};
}

