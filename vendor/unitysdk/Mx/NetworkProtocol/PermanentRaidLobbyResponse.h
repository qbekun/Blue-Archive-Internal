#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class PermanentRaidBattleHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B260)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_GET_BATTLEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4B270)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_GET_BESTSCOREHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4B280)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_SET_BATTLEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4B290)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_SET_BESTSCOREHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4B2A0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B2B0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_SET_BOSSMANAGEDBS_OFFSET UNITYSDK_OFFSET(0xF4B2C0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_GET_BOSSMANAGEDBS_OFFSET UNITYSDK_OFFSET(0xF4B2D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int PermanentRaidLobbyResponse_TypeDefinitionIndex = 11992;

	class PermanentRaidLobbyResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _BossManageDBs_k__BackingField; // 0x50
		Il2CppObject* _BestScoreHistoryDBs_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* _BattleHistoryDB_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* get_BattleHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_GET_BATTLEHISTORYDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_BestScoreHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_GET_BESTSCOREHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_BattleHistoryDB(::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::PermanentRaidBattleHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_SET_BATTLEHISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_BestScoreHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_SET_BESTSCOREHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BossManageDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_SET_BOSSMANAGEDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BossManageDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDLOBBYRESPONSE_GET_BOSSMANAGEDBS_OFFSET))(nullptr);
		}

	};
}

