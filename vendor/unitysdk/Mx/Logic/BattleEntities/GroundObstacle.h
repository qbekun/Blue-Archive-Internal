#pragma once
#include "../../../unitysdk.h"

namespace MX::Data { class GroundObstacleData; }
namespace MX::Core::Physics2D::Shapes { class Circle; }
namespace MX::Core::Physics2D::Shapes { class OBB; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills { class MovingAreaOptions; }
namespace MX::Logic::BattleEntities { class ObstacleState; }
namespace MX::Logic::Battles::StageSaveData { class ObstacleSaveData; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class AreaSpawner; }
namespace MX::Logic::Battles { class ObstacleEventArgs; }
namespace FlatData { class EntityMaterialType; }
namespace FlatData { class ObstacleHeightType; }
namespace FlatData { class CoverMotionType; }
namespace FlatData { class ObstacleCoverType; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::BattleEntities { class O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace UnityEngine { class Vector3; }
class GroundGrid;
namespace MX::Logic::BattleEntities { class ObstaclePoint; }
namespace UnityEngine { class Vector2; }
class GroundNode;
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class DamageAppliedResult; }
namespace MX::Logic::Battles { class DamageResult; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::Actions { class HeroAction; }
namespace MX::Logic::BattleEntities { class StatusParams; }
namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Core::Services { class Hash64; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }
namespace MX::Logic::Battles { class CharacterGroundNodeChangedEventArgs; }
namespace MX::Logic::Battles { class CharacterInteractWithTSSEventArgs; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Core::Physics2D::Shapes { class LineSegment; }
namespace MX::Logic::Battles { class CharacterGroup; }

#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADD_REMOVED_OFFSET UNITYSDK_OFFSET(0x116C0E0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_REMOVE_REMOVED_OFFSET UNITYSDK_OFFSET(0x116C180)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x116C220)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADD_STATECHANGED_OFFSET UNITYSDK_OFFSET(0x116C250)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_REMOVE_STATECHANGED_OFFSET UNITYSDK_OFFSET(0x116C2F0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x116C390)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADD_GROUNDNODECHANGED_OFFSET UNITYSDK_OFFSET(0x116C3C0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_REMOVE_GROUNDNODECHANGED_OFFSET UNITYSDK_OFFSET(0x116C460)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ONGROUNDNODECHANGED_OFFSET UNITYSDK_OFFSET(0x116C500)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADD_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x116C530)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_REMOVE_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x116C5D0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ONACTIVATED_OFFSET UNITYSDK_OFFSET(0x116C670)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x116C6A0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x116C6B0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_MATERIALTYPE_OFFSET UNITYSDK_OFFSET(0x116C6D0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_OBSTACLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x116C6F0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_COVERMOTIONTYPE_OFFSET UNITYSDK_OFFSET(0x116C710)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_OBSTACLECOVERTYPE_OFFSET UNITYSDK_OFFSET(0x116C730)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETSUMMONER_OFFSET UNITYSDK_OFFSET(0x116C750)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_STATEXCEL_OFFSET UNITYSDK_OFFSET(0x116C760)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_STATEXCEL_OFFSET UNITYSDK_OFFSET(0x116C780)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_INNERCIRCLE_OFFSET UNITYSDK_OFFSET(0x116C7B0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_INNERCIRCLE_OFFSET UNITYSDK_OFFSET(0x116C7C0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_OBB_OFFSET UNITYSDK_OFFSET(0x116C7E0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_OBB_OFFSET UNITYSDK_OFFSET(0x116C7F0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ISCRASHBYTSS_OFFSET UNITYSDK_OFFSET(0x116C810)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_ISCRASHBYTSS_OFFSET UNITYSDK_OFFSET(0x116C820)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_TSSBLOCKEDOBB_OFFSET UNITYSDK_OFFSET(0x116C830)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_TSSBLOCKEDOBB_OFFSET UNITYSDK_OFFSET(0x116C840)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ISINDESTRUCTIBLE_OFFSET UNITYSDK_OFFSET(0x116C860)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_ISINDESTRUCTIBLE_OFFSET UNITYSDK_OFFSET(0x116C870)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x116C880)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x116C890)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_PLAYERPOINTS_OFFSET UNITYSDK_OFFSET(0x116C8A0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_PLAYERPOINTS_OFFSET UNITYSDK_OFFSET(0x116C8B0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ENEMYPOINTS_OFFSET UNITYSDK_OFFSET(0x116C8D0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_ENEMYPOINTS_OFFSET UNITYSDK_OFFSET(0x116C8E0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x116C900)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_BATTLE_OFFSET UNITYSDK_OFFSET(0x116C910)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_POSITIONHEIGHT_OFFSET UNITYSDK_OFFSET(0x116C930)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_POSITIONHEIGHT_OFFSET UNITYSDK_OFFSET(0x116C940)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_MOVINGAREAOPTION_OFFSET UNITYSDK_OFFSET(0x116C950)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_MOVINGAREAOPTION_OFFSET UNITYSDK_OFFSET(0x116C960)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x116C970)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x116C980)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_REMOVETYPE_OFFSET UNITYSDK_OFFSET(0x116C990)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_REMOVETYPE_OFFSET UNITYSDK_OFFSET(0x116C9A0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ALIVE_OFFSET UNITYSDK_OFFSET(0x116C9B0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x116C9C0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_OBSTACLESAVEDATA_OFFSET UNITYSDK_OFFSET(0x116C9D0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_OBSTACLESAVEDATA_OFFSET UNITYSDK_OFFSET(0x116C9E0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_STATPROCESSOR_OFFSET UNITYSDK_OFFSET(0x116CA00)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0x116CA10)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0x116CA20)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETEXTRASKILLCOSTUSED_OFFSET UNITYSDK_OFFSET(0x116CA30)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x116CA40)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x116CA50)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_LIFETIMERATE_OFFSET UNITYSDK_OFFSET(0x116CA60)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x116CAC0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_CANNOTSTANDRANGE_OFFSET UNITYSDK_OFFSET(0x116CB30)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_CANNOTSTANDRANGE_OFFSET UNITYSDK_OFFSET(0x116CB40)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_OCCUPYINGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x116CB50)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x116CC50)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x116CD30)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x116D470)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITIALIZECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x116CDD0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITIALIZEGROUND_OFFSET UNITYSDK_OFFSET(0x116D500)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITALIZERUNTIME_OFFSET UNITYSDK_OFFSET(0x116E170)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITOBSTACLESTAT_OFFSET UNITYSDK_OFFSET(0x116E020)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITOBSTACLEPOINTS_OFFSET UNITYSDK_OFFSET(0x116DC90)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITOBSTACLEPOINTS_OFFSET UNITYSDK_OFFSET(0x116D8E0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_CREATEOBSTACLEPOINT_OFFSET UNITYSDK_OFFSET(0x116E660)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SETNEARESTGROUNDNODEANDDIRECTION_OFFSET UNITYSDK_OFFSET(0x116E750)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SETOBSTACLEPOINTSPOSITION_OFFSET UNITYSDK_OFFSET(0x116E800)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_CO_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x116E0C0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x116EE00)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ISOBSTACLEOCCUPIEDBYCHARACTER_OFFSET UNITYSDK_OFFSET(0x116EF60)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ISOCCUPIEDBYPLAYER_OFFSET UNITYSDK_OFFSET(0x116F020)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ISOCCUPIEDBYENEMY_OFFSET UNITYSDK_OFFSET(0x116F0B0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ISGROUNDPOINTOCCUPIED_OFFSET UNITYSDK_OFFSET(0x116F140)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETGROUNDPOINTSFORCHARACTERGROUP_OFFSET UNITYSDK_OFFSET(0x116F1D0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_APPLYDAMAGE_OFFSET UNITYSDK_OFFSET(0x116F220)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_DESTROYOBSTACLE_OFFSET UNITYSDK_OFFSET(0x116F340)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_RETREATOBSTACLE_OFFSET UNITYSDK_OFFSET(0x116F930)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x116FF20)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_CURRENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x116FF50)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_CURRENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x116FF60)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_CURRENTACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x116FF70)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0x116FF80)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0x116FF90)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0x116FFA0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_REMOVESTATUS_OFFSET UNITYSDK_OFFSET(0x116FFB0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASSTATUS_OFFSET UNITYSDK_OFFSET(0x116FFC0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x116FFD0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASSTATUSIMMUNE_OFFSET UNITYSDK_OFFSET(0x116FFE0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x116FFF0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1170050)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETLOGICEFFECTGROUPIDCOUNT_OFFSET UNITYSDK_OFFSET(0x11700C0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1170130)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1170360)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x11703C0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1170440)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETLOGICEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x11704A0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1170510)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETLOGICEFFECTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1170570)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADDSTATCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x11705E0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x11706D0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_BATTLE_BATTLEENTITYNODECHANGED_OFFSET UNITYSDK_OFFSET(0x1170780)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_BATTLE_CHARACTERINTERACTWITHTSS_OFFSET UNITYSDK_OFFSET(0x1170BA0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_CHARACTER_DIED_OFFSET UNITYSDK_OFFSET(0x11710E0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_CHECKALLNODEFORALLCHARACTER_OFFSET UNITYSDK_OFFSET(0x116E5E0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_SUMMONER_OFFSET UNITYSDK_OFFSET(0x1171A00)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_SUMMONER_OFFSET UNITYSDK_OFFSET(0x1171A10)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_INDEXSUMMONEDBY_OFFSET UNITYSDK_OFFSET(0x1171A30)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_INDEXSUMMONEDBY_OFFSET UNITYSDK_OFFSET(0x1171A40)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_SKILLSPECIFICATIONWHENSUMMONED_OFFSET UNITYSDK_OFFSET(0x1171A50)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_SKILLSPECIFICATIONWHENSUMMONED_OFFSET UNITYSDK_OFFSET(0x1171A60)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SETSUMMONERINFO_OFFSET UNITYSDK_OFFSET(0x1171A80)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_INITIALAREASPAWNER_OFFSET UNITYSDK_OFFSET(0x1171C50)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_INITIALAREASPAWNER_OFFSET UNITYSDK_OFFSET(0x1171C60)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1171C80)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ISLINEINTERSECT_OFFSET UNITYSDK_OFFSET(0x1171E90)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1171EE0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE__INITIALIZECONSTRUCTOR_B__122_0_OFFSET UNITYSDK_OFFSET(0x1171EF0)
#define MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE__CHECKALLNODEFORALLCHARACTER_G__CHECK|170_0_OFFSET UNITYSDK_OFFSET(0x1171540)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int GroundObstacle_TypeDefinitionIndex = 13205;

	class GroundObstacle : public ::E7::Native::NativeAudioAnalyzer
	{
	public:
		Il2CppObject* Removed; // 0x100
		Il2CppObject* StateChanged; // 0x108
		Il2CppObject* GroundNodeChanged; // 0x110
		Il2CppObject* Activated; // 0x118
		::MX::Data::GroundObstacleData* _Data_k__BackingField; // 0x120
		Il2CppObject* _StatExcel_k__BackingField; // 0x128
		::MX::Core::Physics2D::Shapes::Circle* _InnerCircle_k__BackingField; // 0x140
		::MX::Core::Physics2D::Shapes::OBB* _OBB_k__BackingField; // 0x148
		::System::Boolean _IsCrashByTSS_k__BackingField; // 0x150
		::MX::Core::Physics2D::Shapes::OBB* _TSSBlockedOBB_k__BackingField; // 0x158
		::System::Boolean _IsIndestructible_k__BackingField; // 0x160
		::System::Boolean _IsDestroyed_k__BackingField; // 0x161
		Il2CppObject* _PlayerPoints_k__BackingField; // 0x168
		Il2CppObject* _EnemyPoints_k__BackingField; // 0x170
		::MX::Logic::Battles::Battle* _Battle_k__BackingField; // 0x178
		Il2CppObject* playerPointsCharacterTable; // 0x180
		Il2CppObject* enemyPointsCharacterTable; // 0x188
		::System::Single _PositionHeight_k__BackingField; // 0x190
		::MX::Logic::Skills::MovingAreaOptions* _MovingAreaOption_k__BackingField; // 0x194
		::MX::Logic::BattleEntities::ObstacleState* _State_k__BackingField; // 0x198
		::MX::Logic::BattleEntities::ObstacleState* _RemoveType_k__BackingField; // 0x19C
		::MX::Logic::Battles::StageSaveData::ObstacleSaveData* _ObstacleSaveData_k__BackingField; // 0x1A0
		::System::Boolean _IsDummy_k__BackingField; // 0x1A8
		::System::Int32 _Duration_k__BackingField; // 0x1AC
		::System::Int32 elapsed; // 0x1B0
		::System::Collections::IEnumerator* currentStateChangeCoroutine; // 0x1B8
		::System::Boolean IsInvokerGroupTag1; // 0x1C0
		::System::Int64 _CanNotStandRange_k__BackingField; // 0x1C8
		::MX::Logic::BattleEntities::BattleEntity* _Summoner_k__BackingField; // 0x1D0
		::System::Int32 _IndexSummonedBy_k__BackingField; // 0x1D8
		::MX::Logic::Skills::SkillSpecification* _SkillSpecificationWhenSummoned_k__BackingField; // 0x1E0
		::MX::Logic::BattleEntities::AreaSpawner* _InitialAreaSpawner_k__BackingField; // 0x1E8

		::System::Void add_Removed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADD_REMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Removed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_REMOVE_REMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemoved(::MX::Logic::Battles::ObstacleEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::ObstacleEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ONREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void add_StateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADD_STATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_StateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_REMOVE_STATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnStateChanged(::MX::Logic::Battles::ObstacleEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::ObstacleEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_GroundNodeChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADD_GROUNDNODECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_GroundNodeChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_REMOVE_GROUNDNODECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnGroundNodeChanged(::MX::Logic::Battles::ObstacleEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::ObstacleEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ONGROUNDNODECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Activated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADD_ACTIVATED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Activated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_REMOVE_ACTIVATED_OFFSET))(arg, nullptr);
		}

		::System::Void OnActivated(::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ONACTIVATED_OFFSET))(arg, nullptr);
		}

		::MX::Data::GroundObstacleData* get_Data()
		{
			return ((::MX::Data::GroundObstacleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_Data(::MX::Data::GroundObstacleData* arg)
		{
			((::System::Void(*)(::MX::Data::GroundObstacleData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_DATA_OFFSET))(arg, nullptr);
		}

		::FlatData::EntityMaterialType* get_MaterialType()
		{
			return ((::FlatData::EntityMaterialType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_MATERIALTYPE_OFFSET))(nullptr);
		}

		::FlatData::ObstacleHeightType* get_ObstacleHeight()
		{
			return ((::FlatData::ObstacleHeightType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_OBSTACLEHEIGHT_OFFSET))(nullptr);
		}

		::FlatData::CoverMotionType* get_CoverMotionType()
		{
			return ((::FlatData::CoverMotionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_COVERMOTIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::ObstacleCoverType* get_ObstacleCoverType()
		{
			return ((::FlatData::ObstacleCoverType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_OBSTACLECOVERTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetSummoner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETSUMMONER_OFFSET))(nullptr);
		}

		Il2CppObject* get_StatExcel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_STATEXCEL_OFFSET))(nullptr);
		}

		::System::Void set_StatExcel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_STATEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Circle* get_InnerCircle()
		{
			return ((::MX::Core::Physics2D::Shapes::Circle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_INNERCIRCLE_OFFSET))(nullptr);
		}

		::System::Void set_InnerCircle(::MX::Core::Physics2D::Shapes::Circle* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_INNERCIRCLE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::OBB* get_OBB()
		{
			return ((::MX::Core::Physics2D::Shapes::OBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_OBB_OFFSET))(nullptr);
		}

		::System::Void set_OBB(::MX::Core::Physics2D::Shapes::OBB* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_OBB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCrashByTSS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ISCRASHBYTSS_OFFSET))(nullptr);
		}

		::System::Void set_IsCrashByTSS(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_ISCRASHBYTSS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::OBB* get_TSSBlockedOBB()
		{
			return ((::MX::Core::Physics2D::Shapes::OBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_TSSBLOCKEDOBB_OFFSET))(nullptr);
		}

		::System::Void set_TSSBlockedOBB(::MX::Core::Physics2D::Shapes::OBB* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_TSSBLOCKEDOBB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsIndestructible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ISINDESTRUCTIBLE_OFFSET))(nullptr);
		}

		::System::Void set_IsIndestructible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_ISINDESTRUCTIBLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ISDESTROYED_OFFSET))(nullptr);
		}

		::System::Void set_IsDestroyed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_ISDESTROYED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PlayerPoints()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_PLAYERPOINTS_OFFSET))(nullptr);
		}

		::System::Void set_PlayerPoints(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_PLAYERPOINTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EnemyPoints()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ENEMYPOINTS_OFFSET))(nullptr);
		}

		::System::Void set_EnemyPoints(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_ENEMYPOINTS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_BATTLE_OFFSET))(nullptr);
		}

		::System::Void set_Battle(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_BATTLE_OFFSET))(arg, nullptr);
		}

		::System::Single get_PositionHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_POSITIONHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_PositionHeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_POSITIONHEIGHT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::MovingAreaOptions* get_MovingAreaOption()
		{
			return ((::MX::Logic::Skills::MovingAreaOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_MOVINGAREAOPTION_OFFSET))(nullptr);
		}

		::System::Void set_MovingAreaOption(::MX::Logic::Skills::MovingAreaOptions* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::MovingAreaOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_MOVINGAREAOPTION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::ObstacleState* get_State()
		{
			return ((::MX::Logic::BattleEntities::ObstacleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::MX::Logic::BattleEntities::ObstacleState* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ObstacleState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::ObstacleState* get_RemoveType()
		{
			return ((::MX::Logic::BattleEntities::ObstacleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_REMOVETYPE_OFFSET))(nullptr);
		}

		::System::Void set_RemoveType(::MX::Logic::BattleEntities::ObstacleState* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ObstacleState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_REMOVETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Alive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ALIVE_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_GroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_GROUPTAG_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::StageSaveData::ObstacleSaveData* get_ObstacleSaveData()
		{
			return ((::MX::Logic::Battles::StageSaveData::ObstacleSaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_OBSTACLESAVEDATA_OFFSET))(nullptr);
		}

		::System::Void set_ObstacleSaveData(::MX::Logic::Battles::StageSaveData::ObstacleSaveData* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::StageSaveData::ObstacleSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_OBSTACLESAVEDATA_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680* get_StatProcessor()
		{
			return ((::MX::Logic::BattleEntities::O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_STATPROCESSOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDummy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ISDUMMY_OFFSET))(nullptr);
		}

		::System::Void set_IsDummy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_ISDUMMY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetExtraSkillCostUsed(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETEXTRASKILLCOSTUSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void set_Duration(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Single get_LifeTimeRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_LIFETIMERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOccupied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ISOCCUPIED_OFFSET))(nullptr);
		}

		::System::Int64 get_CanNotStandRange()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_CANNOTSTANDRANGE_OFFSET))(nullptr);
		}

		::System::Void set_CanNotStandRange(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_CANNOTSTANDRANGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OccupyingCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_OCCUPYINGCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Battles::StageSaveData::ObstacleSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::System::String* str, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::String*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_.CTOR_OFFSET))(arg, str, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void InitializeConstructor(::System::String* str, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITIALIZECONSTRUCTOR_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InitializeGround(::MX::Logic::Battles::Battle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITIALIZEGROUND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitalizeRuntime(::MX::Logic::Battles::Battle* arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITALIZERUNTIME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitObstacleStat(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITOBSTACLESTAT_OFFSET))(arg, nullptr);
		}

		::System::Void InitObstaclePoints(GroundGrid* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(GroundGrid*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITOBSTACLEPOINTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitObstaclePoints(GroundGrid* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(GroundGrid*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_INITOBSTACLEPOINTS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::BattleEntities::ObstaclePoint* CreateObstaclePoint(GroundGrid* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::MX::Logic::BattleEntities::ObstaclePoint*(*)(GroundGrid*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_CREATEOBSTACLEPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetNearestGroundNodeAndDirection(::MX::Logic::Battles::Battle* arg, GroundNode* arg2, ::UnityEngine::Vector2* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, GroundNode*, ::UnityEngine::Vector2*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SETNEARESTGROUNDNODEANDDIRECTION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetObstaclePointsPosition(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SETOBSTACLEPOINTSPOSITION_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Collections::IEnumerator* co_ChangeState(::System::Single arg, ::MX::Logic::BattleEntities::ObstacleState* arg2, ::MX::Logic::BattleEntities::ObstacleState* arg3, ::System::Boolean arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::MX::Logic::BattleEntities::ObstacleState*, ::MX::Logic::BattleEntities::ObstacleState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_CO_CHANGESTATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ChangeState(::MX::Logic::BattleEntities::ObstacleState* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ObstacleState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_CHANGESTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsObstacleOccupiedByCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ISOBSTACLEOCCUPIEDBYCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOccupiedByPlayer(::MX::Logic::Battles::GroupTag* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ISOCCUPIEDBYPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOccupiedByEnemy(::MX::Logic::Battles::GroupTag* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ISOCCUPIEDBYENEMY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGroundPointOccupied(::MX::Logic::BattleEntities::ObstaclePoint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::ObstaclePoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ISGROUNDPOINTOCCUPIED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGroundPointsForCharacterGroup(::MX::Logic::Battles::GroupTag* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::GroupTag*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETGROUNDPOINTSFORCHARACTERGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::DamageAppliedResult* ApplyDamage(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Battles::DamageResult* arg2, ::MX::Logic::Skills::SkillSpecification* arg3)
		{
			return ((::MX::Logic::Battles::DamageAppliedResult*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Battles::DamageResult*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_APPLYDAMAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void DestroyObstacle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_DESTROYOBSTACLE_OFFSET))(nullptr);
		}

		::System::Void RetreatObstacle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_RETREATOBSTACLE_OFFSET))(nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* get_CurrentBehavior()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_CURRENTBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_CURRENTBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_CurrentActionState()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_CURRENTACTIONSTATE_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::HeroAction* get_CurrentAction()
		{
			return ((::MX::Logic::Actions::HeroAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_CURRENTACTION_OFFSET))(nullptr);
		}

		::System::Void set_CurrentAction(::MX::Logic::Actions::HeroAction* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::HeroAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_CURRENTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void AddStatus(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADDSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveStatus(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_REMOVESTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasStatus(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASSTATUS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasCrowdControl(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASCROWDCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasStatusImmune(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASSTATUSIMMUNE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffectTemplateId(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECTTEMPLATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTemplateIdCount(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectGroupIdCount(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETLOGICEFFECTGROUPIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECT_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectCount(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETLOGICEFFECTCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffectType(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_HASLOGICEFFECTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTypeCount(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GETLOGICEFFECTTYPECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStatChangeEffect(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ADDSTATCHANGEEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_BattleEntityNodeChanged(::System::Object* arg, ::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_BATTLE_BATTLEENTITYNODECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_CharacterInteractWithTSS(::System::Object* arg, ::MX::Logic::Battles::CharacterInteractWithTSSEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterInteractWithTSSEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_BATTLE_CHARACTERINTERACTWITHTSS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_Died(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_CHARACTER_DIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckAllNodeForAllCharacter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_CHECKALLNODEFORALLCHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Summoner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_SUMMONER_OFFSET))(nullptr);
		}

		::System::Void set_Summoner(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_SUMMONER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IndexSummonedBy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_INDEXSUMMONEDBY_OFFSET))(nullptr);
		}

		::System::Void set_IndexSummonedBy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_INDEXSUMMONEDBY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecificationWhenSummoned()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_SKILLSPECIFICATIONWHENSUMMONED_OFFSET))(nullptr);
		}

		::System::Void set_SkillSpecificationWhenSummoned(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_SKILLSPECIFICATIONWHENSUMMONED_OFFSET))(arg, nullptr);
		}

		::System::Void SetSummonerInfo(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SETSUMMONERINFO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::BattleEntities::AreaSpawner* get_InitialAreaSpawner()
		{
			return ((::MX::Logic::BattleEntities::AreaSpawner*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_INITIALAREASPAWNER_OFFSET))(nullptr);
		}

		::System::Void set_InitialAreaSpawner(::MX::Logic::BattleEntities::AreaSpawner* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::AreaSpawner*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_SET_INITIALAREASPAWNER_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean IsLineIntersect(::MX::Core::Physics2D::Shapes::LineSegment* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_ISLINEINTERSECT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Entity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE_GET_ENTITY_OFFSET))(nullptr);
		}

		::System::Int32 _InitializeConstructor_b__122_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE__INITIALIZECONSTRUCTOR_B__122_0_OFFSET))(nullptr);
		}

		::System::Void _CheckAllNodeForAllCharacter_g__Check|170_0(::MX::Logic::Battles::CharacterGroup* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterGroup*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDOBSTACLE__CHECKALLNODEFORALLCHARACTER_G__CHECK|170_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

