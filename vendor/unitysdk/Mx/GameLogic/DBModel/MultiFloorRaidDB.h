#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MultiFloorRaidDB; }
namespace MX::Data::Excel { class MultiFloorRaidSeasonManageExcel; }

#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1004E40)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1004E50)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_CLEAREDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1004E60)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_CLEAREDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1004E70)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_LASTCLEARDATE_OFFSET UNITYSDK_OFFSET(0x1004E80)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_LASTCLEARDATE_OFFSET UNITYSDK_OFFSET(0x1004E90)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_REWARDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1004EA0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_REWARDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1004EB0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_LASTREWARDDATE_OFFSET UNITYSDK_OFFSET(0x1004EC0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_LASTREWARDDATE_OFFSET UNITYSDK_OFFSET(0x1004ED0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_CLEARBATTLEFRAME_OFFSET UNITYSDK_OFFSET(0x1004EE0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_CLEARBATTLEFRAME_OFFSET UNITYSDK_OFFSET(0x1004EF0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_ALLCLEARED_OFFSET UNITYSDK_OFFSET(0x1004F00)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_HASRECEIVABLEREWARDS_OFFSET UNITYSDK_OFFSET(0x1004FE0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_TOTALRECEIVABLEREWARDS_OFFSET UNITYSDK_OFFSET(0x1005000)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_TOTALRECEIVEDREWARDS_OFFSET UNITYSDK_OFFSET(0x10052C0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_CLONE_OFFSET UNITYSDK_OFFSET(0x10052F0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10053B0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1005380)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GETREWARDSDIFFICULTYRANGEINCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1005030)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_ISDIFFICULTYCLEARED_OFFSET UNITYSDK_OFFSET(0x10053C0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_CANRECEIVEREWARDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x10053D0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_CANPLAYDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x10053E0)
#define MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_CANPLAYDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x10055C0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MultiFloorRaidDB_TypeDefinitionIndex = 12668;

	class MultiFloorRaidDB : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int32 _ClearedDifficulty_k__BackingField; // 0x18
		::System::DateTime* _LastClearDate_k__BackingField; // 0x20
		::System::Int32 _RewardDifficulty_k__BackingField; // 0x28
		::System::DateTime* _LastRewardDate_k__BackingField; // 0x30
		::System::Int32 _ClearBattleFrame_k__BackingField; // 0x38

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClearedDifficulty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_CLEAREDDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_ClearedDifficulty(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_CLEAREDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastClearDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_LASTCLEARDATE_OFFSET))(nullptr);
		}

		::System::Void set_LastClearDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_LASTCLEARDATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardDifficulty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_REWARDDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_RewardDifficulty(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_REWARDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastRewardDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_LASTREWARDDATE_OFFSET))(nullptr);
		}

		::System::Void set_LastRewardDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_LASTREWARDDATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClearBattleFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_CLEARBATTLEFRAME_OFFSET))(nullptr);
		}

		::System::Void set_ClearBattleFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_SET_CLEARBATTLEFRAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllCleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_ALLCLEARED_OFFSET))(nullptr);
		}

		::System::Boolean get_HasReceivableRewards()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_HASRECEIVABLEREWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_TotalReceivableRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_TOTALRECEIVABLEREWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_TotalReceivedRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GET_TOTALRECEIVEDREWARDS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MultiFloorRaidDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::MultiFloorRaidDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRewardsDifficultyRangeInclusive(::System::Int32 arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_GETREWARDSDIFFICULTYRANGEINCLUSIVE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsDifficultyCleared(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_ISDIFFICULTYCLEARED_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveRewardDifficulty(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_CANRECEIVEREWARDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanPlayDifficulty(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_CANPLAYDIFFICULTY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanPlayDifficulty(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MULTIFLOORRAIDDB_CANPLAYDIFFICULTY_OFFSET))(arg, nullptr);
		}

	};
}

