#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1009A10)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_SET_RANKING_OFFSET UNITYSDK_OFFSET(0x1009A20)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_SET_SCOREDETAIL_OFFSET UNITYSDK_OFFSET(0x1009A30)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1009A40)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1009A50)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1009A60)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x1009A70)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1009A80)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_GET_RANKING_OFFSET UNITYSDK_OFFSET(0x1009A90)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_GET_SCOREDETAIL_OFFSET UNITYSDK_OFFSET(0x1009AA0)
#define MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1009AB0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidRankingInfo_TypeDefinitionIndex = 12701;

	class RaidRankingInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _AccountId_k__BackingField; // 0x18
		::System::Int64 _Ranking_k__BackingField; // 0x20
		::System::Int64 _Score_k__BackingField; // 0x28
		::System::Double _ScoreDetail_k__BackingField; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Ranking(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_SET_RANKING_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScoreDetail(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_SET_SCOREDETAIL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Score()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_GET_SCORE_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Score(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_SET_SCORE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_Ranking()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_GET_RANKING_OFFSET))(nullptr);
		}

		::System::Double get_ScoreDetail()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_GET_SCOREDETAIL_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDRANKINGINFO_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

	};
}

