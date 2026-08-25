#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF14B00)
#define MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF14B10)
#define MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14B20)
#define MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14B30)
#define MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF14B40)
#define MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF14B50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignEndTurnResponse_TypeDefinitionIndex = 11425;

	class CampaignEndTurnResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x58

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENDTURNRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

	};
}

