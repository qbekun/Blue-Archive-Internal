#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF15480)
#define MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15490)
#define MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF154A0)
#define MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF154B0)
#define MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF154C0)
#define MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF154D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignPurchasePlayCountHardStageResponse_TypeDefinitionIndex = 11447;

	class CampaignPurchasePlayCountHardStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _CampaignStageHistoryDB_k__BackingField; // 0x58

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_CampaignStageHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_CampaignStageHistoryDB(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGERESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(arg, nullptr);
		}

	};
}

