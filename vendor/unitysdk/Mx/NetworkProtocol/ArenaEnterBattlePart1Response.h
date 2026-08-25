#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaBattleDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART1RESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10F60)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART1RESPONSE_SET_ARENABATTLEDB_OFFSET UNITYSDK_OFFSET(0xF10F70)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART1RESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10F80)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART1RESPONSE_GET_ARENABATTLEDB_OFFSET UNITYSDK_OFFSET(0xF10F90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaEnterBattlePart1Response_TypeDefinitionIndex = 11290;

	class ArenaEnterBattlePart1Response : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ArenaBattleDB* _ArenaBattleDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART1RESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ArenaBattleDB(::MX::GameLogic::DBModel::ArenaBattleDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART1RESPONSE_SET_ARENABATTLEDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART1RESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaBattleDB* get_ArenaBattleDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaBattleDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART1RESPONSE_GET_ARENABATTLEDB_OFFSET))(nullptr);
		}

	};
}

