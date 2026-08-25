#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidScoreInfo; }
namespace MX::GameLogic::DBModel { class PermanentRaidBattleHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B420)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_SET_BATTLEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4B430)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_GET_BATTLEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4B440)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B450)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_GET_SCOREINFO_OFFSET UNITYSDK_OFFSET(0xF4B460)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_SET_SCOREINFO_OFFSET UNITYSDK_OFFSET(0xF4B470)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int PermanentRaidEndBattleResponse_TypeDefinitionIndex = 11996;

	class PermanentRaidEndBattleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidScoreInfo* _ScoreInfo_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* _BattleHistoryDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_BattleHistoryDB(::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_SET_BATTLEHISTORYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* get_BattleHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_GET_BATTLEHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidScoreInfo* get_ScoreInfo()
		{
			return ((::MX::GameLogic::DBModel::RaidScoreInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_GET_SCOREINFO_OFFSET))(nullptr);
		}

		::System::Void set_ScoreInfo(::MX::GameLogic::DBModel::RaidScoreInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidScoreInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLERESPONSE_SET_SCOREINFO_OFFSET))(arg, nullptr);
		}

	};
}

