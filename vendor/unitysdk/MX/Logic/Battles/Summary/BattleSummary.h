#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class BattleEndType; }
namespace MX::Logic::Battles::Summary { class GroupSummary; }
namespace MX::Logic::Battles::Summary { class WeekDungeonSummary; }
namespace MX::Logic::Battles::Summary { class RaidSummary; }
namespace MX::Logic::Data { class ExcessiveTouch; }
namespace MX::Logic::Battles::Summary { class ArenaSummary; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Logic::Battles::Summary { class HeroSummary; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::BattleEntities { class StatusResistEventArgs; }
namespace MX::Logic::Battles { class AttackEventArgs; }
namespace MX::Logic::Battles { class DamageResultEventArgs; }
namespace MX::Logic::Battles { class LifeGainEventArgs; }
namespace MX::Logic::Battles { class EndFindGiftArgs; }
namespace MX::Logic::Battles { class PlayerSkillCardCostAddedEventArgs; }
namespace MX::Logic::Battles { class PlayerSkillCardCostRegenChangedEventArgs; }
namespace MX::Logic::Battles { class PlayerSkillCardUsedEventArgs; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }

#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_HASHKEY_OFFSET UNITYSDK_OFFSET(0x13A31A0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_HASHKEY_OFFSET UNITYSDK_OFFSET(0x13A31B0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ISBOSSBATTLE_OFFSET UNITYSDK_OFFSET(0x13A31C0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ISBOSSBATTLE_OFFSET UNITYSDK_OFFSET(0x13A31D0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x13A31E0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x13A31F0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x13A3200)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x13A3210)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x13A3220)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x13A3230)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_WINNER_OFFSET UNITYSDK_OFFSET(0x13A3240)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_WINNER_OFFSET UNITYSDK_OFFSET(0x13A3250)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ISPLAYERWIN_OFFSET UNITYSDK_OFFSET(0x13A3260)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ENDTYPE_OFFSET UNITYSDK_OFFSET(0x13A3270)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ENDTYPE_OFFSET UNITYSDK_OFFSET(0x13A3280)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x13A3290)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ENDFRAME_OFFSET UNITYSDK_OFFSET(0x13A32A0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_UNITTYPE_OFFSET UNITYSDK_OFFSET(0x13A32B0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_UNITTYPE_OFFSET UNITYSDK_OFFSET(0x13A32C0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_RESULTVALUE_OFFSET UNITYSDK_OFFSET(0x13A32D0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_RESULTVALUE_OFFSET UNITYSDK_OFFSET(0x13A32E0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_GROUP01SUMMARY_OFFSET UNITYSDK_OFFSET(0x13A32F0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_GROUP01SUMMARY_OFFSET UNITYSDK_OFFSET(0x13A3300)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_GROUP02SUMMARY_OFFSET UNITYSDK_OFFSET(0x13A3310)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_GROUP02SUMMARY_OFFSET UNITYSDK_OFFSET(0x13A3320)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_WEEKDUNGEONSUMMARY_OFFSET UNITYSDK_OFFSET(0x13A3330)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_WEEKDUNGEONSUMMARY_OFFSET UNITYSDK_OFFSET(0x13A3340)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_RAIDSUMMARY_OFFSET UNITYSDK_OFFSET(0x13A3350)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_RAIDSUMMARY_OFFSET UNITYSDK_OFFSET(0x13A3360)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_TOUCHCOUNTSUMMARY_OFFSET UNITYSDK_OFFSET(0x13A3370)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_TOUCHCOUNTSUMMARY_OFFSET UNITYSDK_OFFSET(0x13A3380)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ARENASUMMARY_OFFSET UNITYSDK_OFFSET(0x13A33A0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ARENASUMMARY_OFFSET UNITYSDK_OFFSET(0x13A33B0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x13A33C0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_CONTINUECOUNT_OFFSET UNITYSDK_OFFSET(0x13A3420)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_CONTINUECOUNT_OFFSET UNITYSDK_OFFSET(0x13A3430)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ELAPSEDREALTIME_OFFSET UNITYSDK_OFFSET(0x13A3440)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ELAPSEDREALTIME_OFFSET UNITYSDK_OFFSET(0x13A3450)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_FINDGIFTCLEARTEXT_OFFSET UNITYSDK_OFFSET(0x13A3460)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x13A35D0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x13A35E0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x13A35F0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x13A3600)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ISABORT_OFFSET UNITYSDK_OFFSET(0x13A3610)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ISABORT_OFFSET UNITYSDK_OFFSET(0x13A3620)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x13A3630)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x13A3640)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ISDEFEATFAILURE_OFFSET UNITYSDK_OFFSET(0x13A3650)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_MULLIGANLIST_OFFSET UNITYSDK_OFFSET(0x13A3670)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_MULLIGANLIST_OFFSET UNITYSDK_OFFSET(0x13A3680)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A36A0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A3720)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_INITBATTLETYPESUMMARY_OFFSET UNITYSDK_OFFSET(0x13A45C0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x13A5170)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GETGROUPSUMMARY_OFFSET UNITYSDK_OFFSET(0x13A6990)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_CREATETEAMSUMMARY_OFFSET UNITYSDK_OFFSET(0x13A3980)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_CREATEHEROSUMMARY_OFFSET UNITYSDK_OFFSET(0x13A6C90)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_CREATESUPPORTERSUMMARY_OFFSET UNITYSDK_OFFSET(0x13A6CF0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SETWRITEFRAME_OFFSET UNITYSDK_OFFSET(0x13A6F90)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_LISTENEVENT_OFFSET UNITYSDK_OFFSET(0x13A4CF0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x13A6FB0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_LISTENHEROEVENT_OFFSET UNITYSDK_OFFSET(0x13A6BC0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_UNLISTENHEROEVENT_OFFSET UNITYSDK_OFFSET(0x13A5CD0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_FINDHEROSUMMARY_OFFSET UNITYSDK_OFFSET(0x13A5AE0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_WRITEHEROHITPOINT_OFFSET UNITYSDK_OFFSET(0x13A71B0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_WRITEFULLSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x13A7420)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_HERORESULT_KILLMADE_OFFSET UNITYSDK_OFFSET(0x13A7960)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_CHARACTER_STATUSRESISTED_OFFSET UNITYSDK_OFFSET(0x13A7C70)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_HERORESULT_ATTACKPROCESSED_OFFSET UNITYSDK_OFFSET(0x13A7E40)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_HERORESULT_DAMAGEPROCESSED_OFFSET UNITYSDK_OFFSET(0x13A86C0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_HERORESULT_LIFEGAIN_OFFSET UNITYSDK_OFFSET(0x13A90A0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GROUNDMODULERESULT_FINDGIFT_OFFSET UNITYSDK_OFFSET(0x13A9500)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_CHARACTER_DIED_OFFSET UNITYSDK_OFFSET(0x13A96C0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GETGROUPSUMMARYBYGROUPTAG_OFFSET UNITYSDK_OFFSET(0x13A9740)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_BATTLE_PLAYERSKILLCARDCOSTADDED_OFFSET UNITYSDK_OFFSET(0x13A9760)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_BATTLE_PLAYERSKILLCARDCOSTREGENCHANGED_OFFSET UNITYSDK_OFFSET(0x13A98A0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_BATTLE_PLAYERSKILLCARDUSED_OFFSET UNITYSDK_OFFSET(0x13A9A50)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_EQUALS_OFFSET UNITYSDK_OFFSET(0x13A9BD0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13A9D10)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13A9E90)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13A9F10)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_EQUALS_OFFSET UNITYSDK_OFFSET(0x13A9C90)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GETFULLSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x13AA040)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int BattleSummary_TypeDefinitionIndex = 14463;

	class BattleSummary : public Il2CppObject
	{
	public:
		::System::Int64 _HashKey_k__BackingField; // 0x10
		::System::Boolean _IsBossBattle_k__BackingField; // 0x18
		::MX::Logic::Data::BattleTypes* _BattleType_k__BackingField; // 0x1C
		::System::Int64 _StageId_k__BackingField; // 0x20
		::System::Int64 _GroundId_k__BackingField; // 0x28
		::MX::Logic::Battles::GroupTag* _Winner_k__BackingField; // 0x30
		::MX::Logic::Battles::BattleEndType* _EndType_k__BackingField; // 0x34
		::System::Int32 _EndFrame_k__BackingField; // 0x38
		::System::Double _UnitType_k__BackingField; // 0x40
		::System::Double _ResultValue_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::GroupSummary* _Group01Summary_k__BackingField; // 0x50
		::MX::Logic::Battles::Summary::GroupSummary* _Group02Summary_k__BackingField; // 0x58
		::MX::Logic::Battles::Summary::WeekDungeonSummary* _WeekDungeonSummary_k__BackingField; // 0x60
		::MX::Logic::Battles::Summary::RaidSummary* _RaidSummary_k__BackingField; // 0x68
		::MX::Logic::Data::ExcessiveTouch* _TouchCountSummary_k__BackingField; // 0x70
		::MX::Logic::Battles::Summary::ArenaSummary* _ArenaSummary_k__BackingField; // 0x80
		::System::Int32 _ContinueCount_k__BackingField; // 0x88
		::System::Single _ElapsedRealtime_k__BackingField; // 0x8C
		::System::Int32 writeFrame; // 0x90
		::System::Int64 _EventContentId_k__BackingField; // 0x98
		::System::Int64 _FixedEchelonId_k__BackingField; // 0xA0
		::System::Boolean _IsAbort_k__BackingField; // 0xA8
		::System::Boolean _IsDefeatBattle_k__BackingField; // 0xA9
		Il2CppObject* _MulliganList_k__BackingField; // 0xB0
		::MX::Logic::Battles::Battle* battle; // 0xB8

		::System::Int64 get_HashKey()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_HASHKEY_OFFSET))(nullptr);
		}

		::System::Void set_HashKey(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_HASHKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsBossBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ISBOSSBATTLE_OFFSET))(nullptr);
		}

		::System::Void set_IsBossBattle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ISBOSSBATTLE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void set_BattleType(::MX::Logic::Data::BattleTypes* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_BATTLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Void set_GroundId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_GROUNDID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_Winner()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_WINNER_OFFSET))(nullptr);
		}

		::System::Void set_Winner(::MX::Logic::Battles::GroupTag* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_WINNER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlayerWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ISPLAYERWIN_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::BattleEndType* get_EndType()
		{
			return ((::MX::Logic::Battles::BattleEndType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ENDTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EndType(::MX::Logic::Battles::BattleEndType* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleEndType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ENDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EndFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ENDFRAME_OFFSET))(nullptr);
		}

		::System::Void set_EndFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ENDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Double get_UnitType()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_UNITTYPE_OFFSET))(nullptr);
		}

		::System::Void set_UnitType(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_UNITTYPE_OFFSET))(arg, nullptr);
		}

		::System::Double get_ResultValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_RESULTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_ResultValue(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_RESULTVALUE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::GroupSummary* get_Group01Summary()
		{
			return ((::MX::Logic::Battles::Summary::GroupSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_GROUP01SUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_Group01Summary(::MX::Logic::Battles::Summary::GroupSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::GroupSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_GROUP01SUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::GroupSummary* get_Group02Summary()
		{
			return ((::MX::Logic::Battles::Summary::GroupSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_GROUP02SUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_Group02Summary(::MX::Logic::Battles::Summary::GroupSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::GroupSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_GROUP02SUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::WeekDungeonSummary* get_WeekDungeonSummary()
		{
			return ((::MX::Logic::Battles::Summary::WeekDungeonSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_WEEKDUNGEONSUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_WeekDungeonSummary(::MX::Logic::Battles::Summary::WeekDungeonSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::WeekDungeonSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_WEEKDUNGEONSUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::RaidSummary* get_RaidSummary()
		{
			return ((::MX::Logic::Battles::Summary::RaidSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_RAIDSUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_RaidSummary(::MX::Logic::Battles::Summary::RaidSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::RaidSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_RAIDSUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::ExcessiveTouch* get_TouchCountSummary()
		{
			return ((::MX::Logic::Data::ExcessiveTouch*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_TOUCHCOUNTSUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_TouchCountSummary(::MX::Logic::Data::ExcessiveTouch* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::ExcessiveTouch*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_TOUCHCOUNTSUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::ArenaSummary* get_ArenaSummary()
		{
			return ((::MX::Logic::Battles::Summary::ArenaSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ARENASUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_ArenaSummary(::MX::Logic::Battles::Summary::ArenaSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::ArenaSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ARENASUMMARY_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_EndTime()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ENDTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_ContinueCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_CONTINUECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ContinueCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_CONTINUECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Single get_ElapsedRealtime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ELAPSEDREALTIME_OFFSET))(nullptr);
		}

		::System::Void set_ElapsedRealtime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ELAPSEDREALTIME_OFFSET))(arg, nullptr);
		}

		::System::String* get_FindGiftClearText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_FINDGIFTCLEARTEXT_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Void set_FixedEchelonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_FIXEDECHELONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAbort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ISABORT_OFFSET))(nullptr);
		}

		::System::Void set_IsAbort(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ISABORT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDefeatBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ISDEFEATBATTLE_OFFSET))(nullptr);
		}

		::System::Void set_IsDefeatBattle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_ISDEFEATBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDefeatFailure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_ISDEFEATFAILURE_OFFSET))(nullptr);
		}

		Il2CppObject* get_MulliganList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GET_MULLIGANLIST_OFFSET))(nullptr);
		}

		::System::Void set_MulliganList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SET_MULLIGANLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InitBattleTypeSummary(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_INITBATTLETYPESUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::GroupTag* arg2, ::MX::Logic::Battles::BattleEndType* arg3, ::System::Int32 arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::GroupTag*, ::MX::Logic::Battles::BattleEndType*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_FINALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::Battles::Summary::GroupSummary* GetGroupSummary(::System::Int64 arg)
		{
			return ((::MX::Logic::Battles::Summary::GroupSummary*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GETGROUPSUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::GroupSummary* CreateTeamSummary(::MX::Logic::Battles::CharacterGroup* arg, ::MX::Logic::Data::TeamSetting* arg2)
		{
			return ((::MX::Logic::Battles::Summary::GroupSummary*(*)(::MX::Logic::Battles::CharacterGroup*, ::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_CREATETEAMSUMMARY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::Summary::HeroSummary* CreateHeroSummary(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::MX::Logic::Battles::Summary::HeroSummary*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_CREATEHEROSUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::HeroSummary* CreateSupporterSummary(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::MX::Logic::Battles::Summary::HeroSummary*(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_CREATESUPPORTERSUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void SetWriteFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_SETWRITEFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void ListenEvent(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_LISTENEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ListenHeroEvent(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_LISTENHEROEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void UnListenHeroEvent(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_UNLISTENHEROEVENT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::HeroSummary* FindHeroSummary(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::MX::Logic::Battles::Summary::HeroSummary*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_FINDHEROSUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteHeroHitPoint(::MX::Logic::BattleEntities::EntityId* arg, ::System::Int32 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_WRITEHEROHITPOINT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void WriteFullSnapshot(::System::Int32 arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_WRITEFULLSNAPSHOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HeroResult_KillMade(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_HERORESULT_KILLMADE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_StatusResisted(::System::Object* arg, ::MX::Logic::BattleEntities::StatusResistEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::StatusResistEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_CHARACTER_STATUSRESISTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HeroResult_AttackProcessed(::System::Object* arg, ::MX::Logic::Battles::AttackEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_HERORESULT_ATTACKPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HeroResult_DamageProcessed(::System::Object* arg, ::MX::Logic::Battles::DamageResultEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageResultEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_HERORESULT_DAMAGEPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HeroResult_LifeGain(::System::Object* arg, ::MX::Logic::Battles::LifeGainEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_HERORESULT_LIFEGAIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void GroundModuleResult_FindGift(::System::Object* arg, ::MX::Logic::Battles::EndFindGiftArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::EndFindGiftArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GROUNDMODULERESULT_FINDGIFT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_Died(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_CHARACTER_DIED_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::Summary::GroupSummary* GetGroupSummaryByGroupTag(::MX::Logic::Battles::GroupTag* arg)
		{
			return ((::MX::Logic::Battles::Summary::GroupSummary*(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GETGROUPSUMMARYBYGROUPTAG_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_PlayerSkillCardCostAdded(::System::Object* arg, ::MX::Logic::Battles::PlayerSkillCardCostAddedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::PlayerSkillCardCostAddedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_BATTLE_PLAYERSKILLCARDCOSTADDED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_PlayerSkillCardCostRegenChanged(::System::Object* arg, ::MX::Logic::Battles::PlayerSkillCardCostRegenChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::PlayerSkillCardCostRegenChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_BATTLE_PLAYERSKILLCARDCOSTREGENCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_PlayerSkillCardUsed(::System::Object* arg, ::MX::Logic::Battles::PlayerSkillCardUsedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::PlayerSkillCardUsedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_BATTLE_PLAYERSKILLCARDUSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Battles::Summary::BattleSummary* arg, ::MX::Logic::Battles::Summary::BattleSummary* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Battles::Summary::BattleSummary* arg, ::MX::Logic::Battles::Summary::BattleSummary* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_EQUALS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFullSnapshot()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLESUMMARY_GETFULLSNAPSHOT_OFFSET))(nullptr);
		}

	};
}

