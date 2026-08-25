#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44760)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF44770)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF44780)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF44790)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF447A0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF447B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentPurchasePlayCountHardStageResponse_TypeDefinitionIndex = 11708;

	class EventContentPurchasePlayCountHardStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _CampaignStageHistoryDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_CampaignStageHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_GET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_CampaignStageHistoryDB(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_SET_CAMPAIGNSTAGEHISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

