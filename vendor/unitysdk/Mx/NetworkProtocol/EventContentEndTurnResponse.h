#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentMainStageSaveDB; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF44520)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF44530)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF44540)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44550)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44560)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF44570)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentEndTurnResponse_TypeDefinitionIndex = 11702;

	class EventContentEndTurnResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x58

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::EventContentMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENDTURNRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

	};
}

