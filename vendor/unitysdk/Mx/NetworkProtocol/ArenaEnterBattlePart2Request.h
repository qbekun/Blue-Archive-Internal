#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaBattleDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART2REQUEST_SET_ARENABATTLEDB_OFFSET UNITYSDK_OFFSET(0xF10FA0)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART2REQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10FB0)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART2REQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10FC0)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART2REQUEST_GET_ARENABATTLEDB_OFFSET UNITYSDK_OFFSET(0xF10FD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaEnterBattlePart2Request_TypeDefinitionIndex = 11291;

	class ArenaEnterBattlePart2Request : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ArenaBattleDB* _ArenaBattleDB_k__BackingField; // 0x40

		::System::Void set_ArenaBattleDB(::MX::GameLogic::DBModel::ArenaBattleDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART2REQUEST_SET_ARENABATTLEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART2REQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART2REQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaBattleDB* get_ArenaBattleDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaBattleDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEPART2REQUEST_GET_ARENABATTLEDB_OFFSET))(nullptr);
		}

	};
}

