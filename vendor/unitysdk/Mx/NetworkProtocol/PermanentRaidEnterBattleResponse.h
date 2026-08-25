#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class PermanentRaidBattleHistoryDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B340)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_GET_BATTLEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4B350)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_SET_ASSISTCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF4B360)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B370)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_GET_ASSISTCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF4B380)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_SET_BATTLEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4B390)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int PermanentRaidEnterBattleResponse_TypeDefinitionIndex = 11994;

	class PermanentRaidEnterBattleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* _BattleHistoryDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::AssistCharacterDB* _AssistCharacterDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* get_BattleHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_GET_BATTLEHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_AssistCharacterDB(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_SET_ASSISTCHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AssistCharacterDB* get_AssistCharacterDB()
		{
			return ((::MX::GameLogic::DBModel::AssistCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_GET_ASSISTCHARACTERDB_OFFSET))(nullptr);
		}

		::System::Void set_BattleHistoryDB(::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENTERBATTLERESPONSE_SET_BATTLEHISTORYDB_OFFSET))(arg, nullptr);
		}

	};
}

