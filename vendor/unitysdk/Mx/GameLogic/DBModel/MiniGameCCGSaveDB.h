#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGStagePlayDB; }
namespace MX::Data::Excel { class MinigameCCGLevelStageExcel; }
namespace MX::GameLogic::DBModel { class MiniGameCCGPlayHistory; }

#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CCGID_OFFSET UNITYSDK_OFFSET(0x10021D0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_CURRENTNODEID_OFFSET UNITYSDK_OFFSET(0x10021E0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_SPECIALS_OFFSET UNITYSDK_OFFSET(0x10021F0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_OVERFLOWEDSPECIALIDS_OFFSET UNITYSDK_OFFSET(0x1002200)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_CALCTOTALDISCARDPOINT_OFFSET UNITYSDK_OFFSET(0x1002210)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_DECK_OFFSET UNITYSDK_OFFSET(0x1002350)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_GAMEOVER_OFFSET UNITYSDK_OFFSET(0x1002360)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_OVERFLOWEDSPECIALIDS_OFFSET UNITYSDK_OFFSET(0x1002370)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_CCGID_OFFSET UNITYSDK_OFFSET(0x1002380)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CLEAREDHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1002390)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x10023A0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_PERKS_OFFSET UNITYSDK_OFFSET(0x10023B0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_TOTALDAMAGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x10023C0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_REWARDPOINT_OFFSET UNITYSDK_OFFSET(0x10023D0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB__GET_LASTSTAGEINDEX_B__52_0_OFFSET UNITYSDK_OFFSET(0x10023E0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_TOTALSKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x10023F0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_CURRENTSTAGEDB_OFFSET UNITYSDK_OFFSET(0x1002410)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_CLEAREDHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1002420)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1002430)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_OVERFLOWEDSTRIKERIDS_OFFSET UNITYSDK_OFFSET(0x1002440)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_TOTALUSEDCOST_OFFSET UNITYSDK_OFFSET(0x1002450)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_TOTALKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x1002460)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_ADDCARDTODECK_OFFSET UNITYSDK_OFFSET(0x1002470)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1002560)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_TOTALSKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x1002570)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_STRIKERS_OFFSET UNITYSDK_OFFSET(0x1002580)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_TOTALKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x1002590)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CLEAR_OFFSET UNITYSDK_OFFSET(0x10025A0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_SPECIALS_OFFSET UNITYSDK_OFFSET(0x10025B0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_LASTSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x10025C0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1002690)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_DECK_OFFSET UNITYSDK_OFFSET(0x1002900)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CURRENTNODEID_OFFSET UNITYSDK_OFFSET(0x1002910)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_OVERFLOWEDSTRIKERIDS_OFFSET UNITYSDK_OFFSET(0x1002920)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1002930)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1002940)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_STRIKERS_OFFSET UNITYSDK_OFFSET(0x1002950)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_TOTALDAMAGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1002960)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_REWARDPOINT_OFFSET UNITYSDK_OFFSET(0x1002970)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_TOTALUSEDCOST_OFFSET UNITYSDK_OFFSET(0x1002980)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_GAMEOVER_OFFSET UNITYSDK_OFFSET(0x1002990)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_PERKS_OFFSET UNITYSDK_OFFSET(0x10029A0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CURRENTSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x10029B0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CURRENTSTAGEDB_OFFSET UNITYSDK_OFFSET(0x10029C0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MiniGameCCGSaveDB_TypeDefinitionIndex = 12652;

	class MiniGameCCGSaveDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _CCGId_k__BackingField; // 0x18
		::System::Boolean _GameOver_k__BackingField; // 0x20
		::System::Boolean _Clear_k__BackingField; // 0x21
		Il2CppObject* _Strikers_k__BackingField; // 0x28
		Il2CppObject* _Specials_k__BackingField; // 0x30
		Il2CppObject* _OverflowedStrikerIds_k__BackingField; // 0x38
		Il2CppObject* _OverflowedSpecialIds_k__BackingField; // 0x40
		::System::Int32 CardDBIdProvider; // 0x48
		Il2CppObject* _Deck_k__BackingField; // 0x50
		::System::Int64 _LevelId_k__BackingField; // 0x58
		::System::Int64 _CurrentNodeId_k__BackingField; // 0x60
		::System::Int32 _RewardPoint_k__BackingField; // 0x68
		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* _CurrentStageDB_k__BackingField; // 0x70
		Il2CppObject* _ClearedHistoryDBs_k__BackingField; // 0x78
		Il2CppObject* _Perks_k__BackingField; // 0x80
		::System::Int32 _TotalUsedCost_k__BackingField; // 0x88
		::System::Int32 _TotalDamageAmount_k__BackingField; // 0x8C
		::System::Int32 _TotalKillCount_k__BackingField; // 0x90
		Il2CppObject* _TotalSkillCount_k__BackingField; // 0x98

		::System::Int64 get_CCGId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CCGID_OFFSET))(nullptr);
		}

		::System::Void set_CurrentNodeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_CURRENTNODEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Specials(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_SPECIALS_OFFSET))(arg, nullptr);
		}

		::System::Void set_OverflowedSpecialIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_OVERFLOWEDSPECIALIDS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalcTotalDiscardPoint(::MX::Data::Excel::MinigameCCGLevelStageExcel* arg)
		{
			return ((::System::Int32(*)(::MX::Data::Excel::MinigameCCGLevelStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_CALCTOTALDISCARDPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Deck(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_DECK_OFFSET))(arg, nullptr);
		}

		::System::Void set_GameOver(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_GAMEOVER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OverflowedSpecialIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_OVERFLOWEDSPECIALIDS_OFFSET))(nullptr);
		}

		::System::Void set_CCGId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_CCGID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClearedHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CLEAREDHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_LevelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_LEVELID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Perks()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_PERKS_OFFSET))(nullptr);
		}

		::System::Void set_TotalDamageAmount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_TOTALDAMAGEAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardPoint(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_REWARDPOINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean _get_LastStageIndex_b__52_0(::MX::GameLogic::DBModel::MiniGameCCGPlayHistory* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::MiniGameCCGPlayHistory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB__GET_LASTSTAGEINDEX_B__52_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_TotalSkillCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_TOTALSKILLCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentStageDB(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_CURRENTSTAGEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClearedHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_CLEAREDHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Clear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_CLEAR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OverflowedStrikerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_OVERFLOWEDSTRIKERIDS_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalUsedCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_TOTALUSEDCOST_OFFSET))(nullptr);
		}

		::System::Void set_TotalKillCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_TOTALKILLCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void AddCardToDeck(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_ADDCARDTODECK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		Il2CppObject* get_TotalSkillCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_TOTALSKILLCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Strikers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_STRIKERS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalKillCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_TOTALKILLCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_Clear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CLEAR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Specials()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_SPECIALS_OFFSET))(nullptr);
		}

		::System::Int32 get_LastStageIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_LASTSTAGEINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Deck()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_DECK_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentNodeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CURRENTNODEID_OFFSET))(nullptr);
		}

		::System::Void set_OverflowedStrikerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_OVERFLOWEDSTRIKERIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LevelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_LEVELID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Strikers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_STRIKERS_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalDamageAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_TOTALDAMAGEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_REWARDPOINT_OFFSET))(nullptr);
		}

		::System::Void set_TotalUsedCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_TOTALUSEDCOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_GameOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_GAMEOVER_OFFSET))(nullptr);
		}

		::System::Void set_Perks(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_SET_PERKS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentStageIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CURRENTSTAGEINDEX_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* get_CurrentStageDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSAVEDB_GET_CURRENTSTAGEDB_OFFSET))(nullptr);
		}

	};
}

