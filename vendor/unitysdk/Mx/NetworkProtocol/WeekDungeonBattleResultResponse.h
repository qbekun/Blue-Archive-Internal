#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WeekDungeonStageHistoryDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50560)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_GET_LEVELUPCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF50570)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_GET_WEEKDUNGEONSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF50580)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_SET_LEVELUPCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF50590)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF505A0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_SET_WEEKDUNGEONSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF505B0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF505C0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF505D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WeekDungeonBattleResultResponse_TypeDefinitionIndex = 12182;

	class WeekDungeonBattleResultResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* _WeekDungeonStageHistoryDB_k__BackingField; // 0x50
		Il2CppObject* _LevelUpCharacterDBs_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_LevelUpCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_GET_LEVELUPCHARACTERDBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* get_WeekDungeonStageHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_GET_WEEKDUNGEONSTAGEHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_LevelUpCharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_SET_LEVELUPCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_WeekDungeonStageHistoryDB(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_SET_WEEKDUNGEONSTAGEHISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

