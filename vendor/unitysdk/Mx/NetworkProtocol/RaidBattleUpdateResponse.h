#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDBATTLEUPDATERESPONSE_GET_RAIDBATTLEDB_OFFSET UNITYSDK_OFFSET(0xF4CD60)
#define MX_NETWORKPROTOCOL_RAIDBATTLEUPDATERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4CD70)
#define MX_NETWORKPROTOCOL_RAIDBATTLEUPDATERESPONSE_SET_RAIDBATTLEDB_OFFSET UNITYSDK_OFFSET(0xF4CD80)
#define MX_NETWORKPROTOCOL_RAIDBATTLEUPDATERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4CD90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidBattleUpdateResponse_TypeDefinitionIndex = 12030;

	class RaidBattleUpdateResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidBattleDB* _RaidBattleDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::RaidBattleDB* get_RaidBattleDB()
		{
			return ((::MX::GameLogic::DBModel::RaidBattleDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDBATTLEUPDATERESPONSE_GET_RAIDBATTLEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDBATTLEUPDATERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_RaidBattleDB(::MX::GameLogic::DBModel::RaidBattleDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDBATTLEUPDATERESPONSE_SET_RAIDBATTLEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDBATTLEUPDATERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

