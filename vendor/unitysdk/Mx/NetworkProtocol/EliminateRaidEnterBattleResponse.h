#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_SET_RAIDDB_OFFSET UNITYSDK_OFFSET(0xF42BA0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_GET_ASSISTCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF42BB0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_GET_RAIDDB_OFFSET UNITYSDK_OFFSET(0xF42BC0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42BD0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF42BE0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_GET_RAIDBATTLEDB_OFFSET UNITYSDK_OFFSET(0xF42BF0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_SET_ASSISTCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF42C00)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF42C10)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_SET_RAIDBATTLEDB_OFFSET UNITYSDK_OFFSET(0xF42C20)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42C30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidEnterBattleResponse_TypeDefinitionIndex = 11646;

	class EliminateRaidEnterBattleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidDB* _RaidDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::RaidBattleDB* _RaidBattleDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::AssistCharacterDB* _AssistCharacterDB_k__BackingField; // 0x68

		::System::Void set_RaidDB(::MX::GameLogic::DBModel::RaidDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_SET_RAIDDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AssistCharacterDB* get_AssistCharacterDB()
		{
			return ((::MX::GameLogic::DBModel::AssistCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_GET_ASSISTCHARACTERDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidDB* get_RaidDB()
		{
			return ((::MX::GameLogic::DBModel::RaidDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_GET_RAIDDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::RaidBattleDB* get_RaidBattleDB()
		{
			return ((::MX::GameLogic::DBModel::RaidBattleDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_GET_RAIDBATTLEDB_OFFSET))(nullptr);
		}

		::System::Void set_AssistCharacterDB(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_SET_ASSISTCHARACTERDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::System::Void set_RaidBattleDB(::MX::GameLogic::DBModel::RaidBattleDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_SET_RAIDBATTLEDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

