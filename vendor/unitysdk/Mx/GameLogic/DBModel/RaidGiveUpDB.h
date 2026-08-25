#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_SET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x10082B0)
#define MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_GET_RANKING_OFFSET UNITYSDK_OFFSET(0x10082C0)
#define MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10082D0)
#define MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_GET_RANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x10082E0)
#define MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_GET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x10082F0)
#define MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_SET_RANKING_OFFSET UNITYSDK_OFFSET(0x1008300)
#define MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_SET_RANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1008310)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidGiveUpDB_TypeDefinitionIndex = 12692;

	class RaidGiveUpDB : public Il2CppObject
	{
	public:
		::System::Int64 _Ranking_k__BackingField; // 0x10
		::System::Int64 _RankingPoint_k__BackingField; // 0x18
		::System::Int64 _BestRankingPoint_k__BackingField; // 0x20

		::System::Void set_BestRankingPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_SET_BESTRANKINGPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Ranking()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_GET_RANKING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_RankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_GET_RANKINGPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_BestRankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_GET_BESTRANKINGPOINT_OFFSET))(nullptr);
		}

		::System::Void set_Ranking(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_SET_RANKING_OFFSET))(arg, nullptr);
		}

		::System::Void set_RankingPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDGIVEUPDB_SET_RANKINGPOINT_OFFSET))(arg, nullptr);
		}

	};
}

