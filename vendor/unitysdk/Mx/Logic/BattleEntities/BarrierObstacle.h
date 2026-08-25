#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::Actions { class HeroAction; }
namespace MX::Logic::BattleEntities { class AreaSpawner; }
namespace FlatData { class EntityMaterialType; }
namespace MX::Logic::BattleEntities { class O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace FlatData { class ObstacleHeightType; }
namespace FlatData { class CoverMotionType; }
namespace FlatData { class ObstacleCoverType; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace FlatData { class ArmorType; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Core::Services { class Hash64; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::BattleEntities { class StatusParams; }
namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }
namespace MX::Logic::Battles { class DamageAppliedResult; }
namespace MX::Logic::Battles { class DamageResult; }
namespace MX::Core::Physics2D::Shapes { class LineSegment; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::BattleEntities { class BarrierObstacle; }
namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace MX::Logic::Data { class BarrierObstacleEntityValue; }

#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x11695A0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_BATTLE_OFFSET UNITYSDK_OFFSET(0x11695B0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x11695D0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x11695E0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_CREATEDFRAME_OFFSET UNITYSDK_OFFSET(0x11695F0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_CREATEDFRAME_OFFSET UNITYSDK_OFFSET(0x1169600)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1169610)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1169640)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_LIFETIMERATE_OFFSET UNITYSDK_OFFSET(0x1169680)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1169710)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x1169720)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_SUMMONER_OFFSET UNITYSDK_OFFSET(0x1169740)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_SUMMONER_OFFSET UNITYSDK_OFFSET(0x1169750)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_INDEXSUMMONEDBY_OFFSET UNITYSDK_OFFSET(0x1169770)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_INDEXSUMMONEDBY_OFFSET UNITYSDK_OFFSET(0x1169780)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_SKILLSPECIFICATIONWHENSUMMONED_OFFSET UNITYSDK_OFFSET(0x1169790)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_SKILLSPECIFICATIONWHENSUMMONED_OFFSET UNITYSDK_OFFSET(0x11697A0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_FIXDIRECTION_OFFSET UNITYSDK_OFFSET(0x11697C0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_FIXDIRECTION_OFFSET UNITYSDK_OFFSET(0x11697D0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x11697E0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_LINKEDLOGICEFFECTGROUPIDS_OFFSET UNITYSDK_OFFSET(0x11697F0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_LINKEDLOGICEFFECTGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1169800)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_STATEXCEL_OFFSET UNITYSDK_OFFSET(0x1169820)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_STATEXCEL_OFFSET UNITYSDK_OFFSET(0x1169840)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_STATPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1169870)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_OBSTACLEIDHASH_OFFSET UNITYSDK_OFFSET(0x1169880)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_OBSTACLEIDHASH_OFFSET UNITYSDK_OFFSET(0x1169890)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_OBSTACLEID_OFFSET UNITYSDK_OFFSET(0x11698A0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_OBSTACLEID_OFFSET UNITYSDK_OFFSET(0x11698B0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x11698F0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x1169900)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_ALIVE_OFFSET UNITYSDK_OFFSET(0x1169910)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x1169920)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_CURRENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1169930)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_CURRENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1169940)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_CURRENTACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1169950)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0x1169960)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0x1169970)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_ISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x1169990)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETEXTRASKILLCOSTUSED_OFFSET UNITYSDK_OFFSET(0x11699B0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_INITIALAREASPAWNER_OFFSET UNITYSDK_OFFSET(0x11699C0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_INITIALAREASPAWNER_OFFSET UNITYSDK_OFFSET(0x11699D0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_MATERIALTYPE_OFFSET UNITYSDK_OFFSET(0x11699F0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_OBSTACLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1169A00)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_COVERMOTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1169A10)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_OBSTACLECOVERTYPE_OFFSET UNITYSDK_OFFSET(0x1169A20)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1169A30)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ADD_REMOVED_OFFSET UNITYSDK_OFFSET(0x1169A40)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_REMOVE_REMOVED_OFFSET UNITYSDK_OFFSET(0x1169AE0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1169B80)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1169BB0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1169D40)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x116A1A0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET UNITYSDK_OFFSET(0x116A200)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETLOGICEFFECTGROUPIDCOUNT_OFFSET UNITYSDK_OFFSET(0x116A270)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x116A2E0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x116A510)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x116A570)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x116A5F0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETLOGICEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x116A650)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x116A6C0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETLOGICEFFECTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x116A720)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0x116A790)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_REMOVESTATUS_OFFSET UNITYSDK_OFFSET(0x116A7A0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASSTATUS_OFFSET UNITYSDK_OFFSET(0x116A7B0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x116A7C0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASSTATUSIMMUNE_OFFSET UNITYSDK_OFFSET(0x116A7D0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETSUMMONER_OFFSET UNITYSDK_OFFSET(0x116A7E0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_INITOBSTACLESTAT_OFFSET UNITYSDK_OFFSET(0x116A7F0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ISOBSTACLEOCCUPIEDBYCHARACTER_OFFSET UNITYSDK_OFFSET(0x116A8F0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ADDSTATCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x116A900)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_APPLYDAMAGE_OFFSET UNITYSDK_OFFSET(0x116A9F0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_COVERCHARACTER_OFFSET UNITYSDK_OFFSET(0x116AB40)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_DESTROYOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1169ED0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_INITALIZERUNTIME_OFFSET UNITYSDK_OFFSET(0x116AD10)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ISOCCUPIEDBYPLAYER_OFFSET UNITYSDK_OFFSET(0x116ADF0)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ISOCCUPIEDBYENEMY_OFFSET UNITYSDK_OFFSET(0x116AE40)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ISLINEINTERSECT_OFFSET UNITYSDK_OFFSET(0x116AE90)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SETSUMMONERINFO_OFFSET UNITYSDK_OFFSET(0x116AF60)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_CHARACTER_DIED_OFFSET UNITYSDK_OFFSET(0x116B130)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_CHARACTER_BARRIEROBSTACLECOVERCHANGED_OFFSET UNITYSDK_OFFSET(0x116B140)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x116B170)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_COVER_OFFSET UNITYSDK_OFFSET(0x116B210)
#define MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE__.CTOR_B__100_0_OFFSET UNITYSDK_OFFSET(0x116BC40)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int BarrierObstacle_TypeDefinitionIndex = 13201;

	class BarrierObstacle : public ::E7::Native::NativeAudioAnalyzer
	{
	public:
		::MX::Logic::Battles::Battle* _Battle_k__BackingField; // 0x100
		::System::Int32 _Duration_k__BackingField; // 0x108
		::System::Int32 _CreatedFrame_k__BackingField; // 0x10C
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _Character_k__BackingField; // 0x110
		::MX::Logic::BattleEntities::BattleEntity* _Summoner_k__BackingField; // 0x118
		::System::Int32 _IndexSummonedBy_k__BackingField; // 0x120
		::MX::Logic::Skills::SkillSpecification* _SkillSpecificationWhenSummoned_k__BackingField; // 0x128
		::System::Boolean _FixDirection_k__BackingField; // 0x130
		::UnityEngine::Vector2* _PositionOffset_k__BackingField; // 0x134
		::Il2CppArray<::System::Object*>* _LinkedLogicEffectGroupIds_k__BackingField; // 0x140
		Il2CppObject* _StatExcel_k__BackingField; // 0x148
		::System::String* obstacleId; // 0x160
		::System::Int64 _ObstacleIdHash_k__BackingField; // 0x168
		::System::Boolean _IsDestroyed_k__BackingField; // 0x170
		::MX::Logic::Battles::GroupTag* _GroupTag_k__BackingField; // 0x174
		::MX::Logic::BattleEntities::BehaviorType* _CurrentBehavior_k__BackingField; // 0x178
		::MX::Logic::Actions::ActionState* _CurrentActionState_k__BackingField; // 0x17C
		::MX::Logic::Actions::HeroAction* _CurrentAction_k__BackingField; // 0x180
		::MX::Logic::BattleEntities::AreaSpawner* _InitialAreaSpawner_k__BackingField; // 0x188
		::FlatData::EntityMaterialType* materialType; // 0x190
		Il2CppObject* Removed; // 0x198

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_BATTLE_OFFSET))(nullptr);
		}

		::System::Void set_Battle(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_BATTLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void set_Duration(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CreatedFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_CREATEDFRAME_OFFSET))(nullptr);
		}

		::System::Void set_CreatedFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_CREATEDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Elapsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_ELAPSED_OFFSET))(nullptr);
		}

		::System::Void set_Elapsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_ELAPSED_OFFSET))(arg, nullptr);
		}

		::System::Single get_LifeTimeRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_LIFETIMERATE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_Character()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_Character(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Summoner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_SUMMONER_OFFSET))(nullptr);
		}

		::System::Void set_Summoner(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_SUMMONER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IndexSummonedBy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_INDEXSUMMONEDBY_OFFSET))(nullptr);
		}

		::System::Void set_IndexSummonedBy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_INDEXSUMMONEDBY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecificationWhenSummoned()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_SKILLSPECIFICATIONWHENSUMMONED_OFFSET))(nullptr);
		}

		::System::Void set_SkillSpecificationWhenSummoned(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_SKILLSPECIFICATIONWHENSUMMONED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FixDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_FIXDIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_FixDirection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_FIXDIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_PositionOffset()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_POSITIONOFFSET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_LinkedLogicEffectGroupIds()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_LINKEDLOGICEFFECTGROUPIDS_OFFSET))(nullptr);
		}

		::System::Void set_LinkedLogicEffectGroupIds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_LINKEDLOGICEFFECTGROUPIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StatExcel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_STATEXCEL_OFFSET))(nullptr);
		}

		::System::Void set_StatExcel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_STATEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680* get_StatProcessor()
		{
			return ((::MX::Logic::BattleEntities::O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_STATPROCESSOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ObstacleIdHash()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_OBSTACLEIDHASH_OFFSET))(nullptr);
		}

		::System::Void set_ObstacleIdHash(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_OBSTACLEIDHASH_OFFSET))(arg, nullptr);
		}

		::System::String* get_ObstacleId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_OBSTACLEID_OFFSET))(nullptr);
		}

		::System::Void set_ObstacleId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_OBSTACLEID_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_ISDESTROYED_OFFSET))(nullptr);
		}

		::System::Void set_IsDestroyed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_ISDESTROYED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Alive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_ALIVE_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_GroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_GROUPTAG_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* get_CurrentBehavior()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_CURRENTBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_CURRENTBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_CurrentActionState()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_CURRENTACTIONSTATE_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::HeroAction* get_CurrentAction()
		{
			return ((::MX::Logic::Actions::HeroAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_CURRENTACTION_OFFSET))(nullptr);
		}

		::System::Void set_CurrentAction(::MX::Logic::Actions::HeroAction* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::HeroAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_CURRENTACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOccupied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_ISOCCUPIED_OFFSET))(nullptr);
		}

		::System::Int32 GetExtraSkillCostUsed(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETEXTRASKILLCOSTUSED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::AreaSpawner* get_InitialAreaSpawner()
		{
			return ((::MX::Logic::BattleEntities::AreaSpawner*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_INITIALAREASPAWNER_OFFSET))(nullptr);
		}

		::System::Void set_InitialAreaSpawner(::MX::Logic::BattleEntities::AreaSpawner* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::AreaSpawner*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SET_INITIALAREASPAWNER_OFFSET))(arg, nullptr);
		}

		::FlatData::EntityMaterialType* get_MaterialType()
		{
			return ((::FlatData::EntityMaterialType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_MATERIALTYPE_OFFSET))(nullptr);
		}

		::FlatData::ObstacleHeightType* get_ObstacleHeight()
		{
			return ((::FlatData::ObstacleHeightType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_OBSTACLEHEIGHT_OFFSET))(nullptr);
		}

		::FlatData::CoverMotionType* get_CoverMotionType()
		{
			return ((::FlatData::CoverMotionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_COVERMOTIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::ObstacleCoverType* get_ObstacleCoverType()
		{
			return ((::FlatData::ObstacleCoverType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_OBSTACLECOVERTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Entity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GET_ENTITY_OFFSET))(nullptr);
		}

		::System::Void add_Removed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ADD_REMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Removed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_REMOVE_REMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemoved(::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ONREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::UnityEngine::Vector2* arg3, ::FlatData::EntityMaterialType* arg4, ::FlatData::ArmorType* arg5, ::System::Boolean arg6, ::MX::Core::Physics2D::Shapes::Shape* arg7)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::UnityEngine::Vector2*, ::FlatData::EntityMaterialType*, ::FlatData::ArmorType*, ::System::Boolean, ::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLogicEffectTemplateId(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECTTEMPLATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTemplateIdCount(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectGroupIdCount(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETLOGICEFFECTGROUPIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECT_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectCount(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETLOGICEFFECTCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffectType(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASLOGICEFFECTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTypeCount(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETLOGICEFFECTTYPECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStatus(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ADDSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveStatus(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_REMOVESTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasStatus(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASSTATUS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasCrowdControl(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASCROWDCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasStatusImmune(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_HASSTATUSIMMUNE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetSummoner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_GETSUMMONER_OFFSET))(nullptr);
		}

		::System::Void InitObstacleStat(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_INITOBSTACLESTAT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsObstacleOccupiedByCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ISOBSTACLEOCCUPIEDBYCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void AddStatChangeEffect(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ADDSTATCHANGEEFFECT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::DamageAppliedResult* ApplyDamage(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Battles::DamageResult* arg2, ::MX::Logic::Skills::SkillSpecification* arg3)
		{
			return ((::MX::Logic::Battles::DamageAppliedResult*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Battles::DamageResult*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_APPLYDAMAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CoverCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_COVERCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyObstacle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_DESTROYOBSTACLE_OFFSET))(nullptr);
		}

		::System::Void InitalizeRuntime(::MX::Logic::Battles::Battle* arg, ::System::String* str, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_INITALIZERUNTIME_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Boolean IsOccupiedByPlayer(::MX::Logic::Battles::GroupTag* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ISOCCUPIEDBYPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOccupiedByEnemy(::MX::Logic::Battles::GroupTag* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ISOCCUPIEDBYENEMY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLineIntersect(::MX::Core::Physics2D::Shapes::LineSegment* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_ISLINEINTERSECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetSummonerInfo(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_SETSUMMONERINFO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Character_Died(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_CHARACTER_DIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_BarrierObstacleCoverChanged(::System::Object* arg, ::MX::Logic::BattleEntities::BarrierObstacle* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::BarrierObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_CHARACTER_BARRIEROBSTACLECOVERCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Cover(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BarrierObstacle* arg2, ::MX::Logic::Skills::IEntitySpawnable* arg3, ::MX::Logic::Data::BarrierObstacleEntityValue* arg4, ::System::Int32 arg5)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BarrierObstacle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::BarrierObstacleEntityValue*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE_COVER_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int32 _.ctor_b__100_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BARRIEROBSTACLE__.CTOR_B__100_0_OFFSET))(nullptr);
		}

	};
}

