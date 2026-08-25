#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class MiniGameDefenseStageHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_SET_STAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF496C0)
#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF496D0)
#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_GET_STAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF496E0)
#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF496F0)
#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49700)
#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF49710)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameDefenseBattleResultResponse_TypeDefinitionIndex = 11912;

	class MiniGameDefenseBattleResultResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB* _StageHistoryDB_k__BackingField; // 0x58

		::System::Void set_StageHistoryDB(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_SET_STAGEHISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB* get_StageHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_GET_STAGEHISTORYDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEBATTLERESULTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

