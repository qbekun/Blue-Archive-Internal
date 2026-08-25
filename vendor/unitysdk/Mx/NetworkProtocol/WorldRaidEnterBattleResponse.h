#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50DA0)
#define MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_SET_RAIDBATTLEDB_OFFSET UNITYSDK_OFFSET(0xF50DB0)
#define MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_GET_RAIDBATTLEDB_OFFSET UNITYSDK_OFFSET(0xF50DC0)
#define MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_SET_ASSISTCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF50DD0)
#define MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50DE0)
#define MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_GET_ASSISTCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF50DF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WorldRaidEnterBattleResponse_TypeDefinitionIndex = 12204;

	class WorldRaidEnterBattleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidBattleDB* _RaidBattleDB_k__BackingField; // 0x50
		Il2CppObject* _AssistCharacterDBs_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_RaidBattleDB(::MX::GameLogic::DBModel::RaidBattleDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_SET_RAIDBATTLEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::RaidBattleDB* get_RaidBattleDB()
		{
			return ((::MX::GameLogic::DBModel::RaidBattleDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_GET_RAIDBATTLEDB_OFFSET))(nullptr);
		}

		::System::Void set_AssistCharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_SET_ASSISTCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_AssistCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDENTERBATTLERESPONSE_GET_ASSISTCHARACTERDBS_OFFSET))(nullptr);
		}

	};
}

