#pragma once
#include "unitysdk.h"

namespace FlatData { class TacticEntityType; }
namespace FlatData { class BulletType; }
namespace FlatData { class School; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::BattleEntities { class O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680; }
namespace MX::Logic::BattleEntities { class DotProcessor; }
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }
namespace MX::Logic::Data { class CostumeSetting; }
namespace MX::Logic::BattleEntities { class SkillProcessor; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace MX::Data::Excel { class CostumeExcel; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class EntityTargetContainer; }
namespace MX::Logic::Battles { class GroupTag; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
class GroundNode;
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::Actions { class HeroAction; }
namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class ArmorType; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Logic::BattleEntities { class StatusProcessor; }
namespace MX::Logic::BattleEntities { class StatusParams; }
namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::BattleEntities { class DotAbility; }
namespace MX::Logic::Skills::LogicEffects { class DamageOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class HealOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ShieldHealOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class DamagedLimitEffect; }
namespace MX::Logic::Skills::LogicEffects { class HealedLimitEffect; }
namespace MX::Logic::Skills::LogicEffects { class DamagedMultiplierbyDamageOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ConfrontationGaugeRecoverOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ChangeStatLogicApplicationGaugeRecoverOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class MaxHPCapGaugeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ExSkillCardRedrawGaugeEffect; }
namespace MX::Logic::Skills::LogicEffects { class NotMoveEffect; }
namespace MX::Logic::Skills::LogicEffects { class DummyEffect; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::BattleEntities { class EffectArea; }

#define ICHARACTER_ADD_ACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_REMOVE_ACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_OWNERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_CHARACTERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_PERSONALITYID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_ISNPC_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_SCHOOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_SET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_BATTLECACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_CHARACTERGROUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_STATPROCESSOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_DOTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_EQUIPMENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_WEAPONSETTING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_GEARSETTING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_COSTUMESETTING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_CHECKCANUSEAUTOPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_POTENTIALSTATLEVELDICT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_SET_POTENTIALSTATLEVELDICT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_SKILLPROCESSOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_CANUSEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GETCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_TARGETCONTAINER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_GROUPTAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_POSITIONVISUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_NEARESTGROUNDNODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_CURRENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_SET_CURRENTBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_CURRENTACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_CURRENTACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_GRADE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_HITPOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_HITPOINTBEFORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_MAXHPCAPGAUGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_SET_MAXHPCAPGAUGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_MAXGAUGECAPINHP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_SUMMONEDTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_MAXHITPOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_HITPOINTRATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_LOSTHITPOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_BATTLEPOWER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_DEFAULTSTAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_CURRENTSTAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_INITIALSTAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_DISPELBYGROUPID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_REMOVESTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_REMOVESTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_HASSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_RUNTIMEIMMUNES_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_GET_RUNTIMEDOTABILITIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ICharacter_TypeDefinitionIndex = 4010;

	class ICharacter : public Il2CppObject
	{
	public:
		::System::Void add_ActionChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ADD_ACTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ActionChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_REMOVE_ACTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Int64 get_OwnerAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_OWNERACCOUNTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterSkillListGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_CHARACTERSKILLLISTGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PersonalityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_PERSONALITYID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_ISNPC_OFFSET))(nullptr);
		}

		::FlatData::TacticEntityType* get_TacticEntityType()
		{
			return ((::FlatData::TacticEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_TACTICENTITYTYPE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::School* get_School()
		{
			return ((::FlatData::School*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_SCHOOL_OFFSET))(nullptr);
		}

		::System::Int32 get_FavorRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Void set_FavorRank(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_SET_FAVORRANK_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Battle* get_BattleCache()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_BATTLECACHE_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::CharacterGroup* get_CharacterGroup()
		{
			return ((::MX::Logic::Battles::CharacterGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_CHARACTERGROUP_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680* get_StatProcessor()
		{
			return ((::MX::Logic::BattleEntities::O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_STATPROCESSOR_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::DotProcessor* get_DotProcessor()
		{
			return ((::MX::Logic::BattleEntities::DotProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_DOTPROCESSOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Equipments()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_EQUIPMENTS_OFFSET))(nullptr);
		}

		::MX::Logic::Data::WeaponSetting* get_WeaponSetting()
		{
			return ((::MX::Logic::Data::WeaponSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_WEAPONSETTING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::GearSetting* get_GearSetting()
		{
			return ((::MX::Logic::Data::GearSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_GEARSETTING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::CostumeSetting* get_CostumeSetting()
		{
			return ((::MX::Logic::Data::CostumeSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_COSTUMESETTING_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckCanUseAutoPublicSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_CHECKCANUSEAUTOPUBLICSKILL_OFFSET))(nullptr);
		}

		Il2CppObject* get_PotentialStatLevelDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_POTENTIALSTATLEVELDICT_OFFSET))(nullptr);
		}

		::System::Void set_PotentialStatLevelDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_SET_POTENTIALSTATLEVELDICT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillProcessor* get_SkillProcessor()
		{
			return ((::MX::Logic::BattleEntities::SkillProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_SKILLPROCESSOR_OFFSET))(nullptr);
		}

		::System::Boolean CanUseAutoSkill(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_CANUSEAUTOSKILL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CostumeExcel* GetCostumeExcel()
		{
			return ((::MX::Data::Excel::CostumeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GETCOSTUMEEXCEL_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_ENTITYID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityTargetContainer* get_TargetContainer()
		{
			return ((::MX::Logic::BattleEntities::EntityTargetContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_TARGETCONTAINER_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroupTag* get_GroupTag()
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_GROUPTAG_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Position2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_POSITION2D_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Direction()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_Direction(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_PositionVisual()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_POSITIONVISUAL_OFFSET))(nullptr);
		}

		GroundNode* get_NearestGroundNode()
		{
			return ((GroundNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_NEARESTGROUNDNODE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* get_CurrentBehavior()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_CURRENTBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_SET_CURRENTBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_CurrentActionState()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_CURRENTACTIONSTATE_OFFSET))(nullptr);
		}

		::MX::Logic::Actions::HeroAction* get_CurrentAction()
		{
			return ((::MX::Logic::Actions::HeroAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_CURRENTACTION_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Grade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_GRADE_OFFSET))(nullptr);
		}

		::System::Int64 get_HitPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_HITPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_HitPointBefore()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_HITPOINTBEFORE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHPCapGauge()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_MAXHPCAPGAUGE_OFFSET))(nullptr);
		}

		::System::Void set_MaxHPCapGauge(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_SET_MAXHPCAPGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxGaugeCapInHP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_MAXGAUGECAPINHP_OFFSET))(nullptr);
		}

		::System::Int64 get_SummonedTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_SUMMONEDTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHitPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_MAXHITPOINT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_HitPointRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_HITPOINTRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_LostHitPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_LOSTHITPOINT_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_ArmorType()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_ARMORTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_BattlePower()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_BATTLEPOWER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* get_DefaultStat()
		{
			return ((::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_DEFAULTSTAT_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* get_CurrentStat()
		{
			return ((::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_CURRENTSTAT_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* get_InitialStat()
		{
			return ((::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_INITIALSTAT_OFFSET))(nullptr);
		}

		::System::Void DispelByGroupId(::MX::Logic::BattleEntities::EntityId* arg, ::System::String* str, ::System::Int32 arg2, ::MX::Logic::BattleEntities::StatusProcessor* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::String*, ::System::Int32, ::MX::Logic::BattleEntities::StatusProcessor*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_DISPELBYGROUPID_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::System::Void AddStatus(::MX::Logic::BattleEntities::StatusParams* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ADDSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveStatus(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_REMOVESTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveStatus(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_REMOVESTATUS_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean HasStatus(::MX::Logic::BattleEntities::HeroStatus* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::HeroStatus*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_HASSTATUS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_RuntimeImmunes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_RUNTIMEIMMUNES_OFFSET))(nullptr);
		}

		Il2CppObject* get_RuntimeDotAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_GET_RUNTIMEDOTABILITIES_OFFSET))(nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::DotAbility* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::DotAbility*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::HealOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::HealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DamagedLimitEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DamagedLimitEffect*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::HealedLimitEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::HealedLimitEffect*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DamagedMultiplierbyDamageOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DamagedMultiplierbyDamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeRecoverOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeRecoverOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::MaxHPCapGaugeEffect* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::MaxHPCapGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::NotMoveEffect* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::NotMoveEffect*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DummyEffect* arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DummyEffect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DummyEffect* arg2, ::FlatData::EndCondition* arg3, ::System::String* str, ::System::String* str2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DummyEffect*, ::FlatData::EndCondition*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, arg2, arg3, str, str2, nullptr);
		}

		::System::Void Attach(::MX::Logic::BattleEntities::EffectArea* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EffectArea*, ::PVOID))((::PBYTE)hIl2Cpp + ICHARACTER_ATTACH_OFFSET))(arg, nullptr);
		}

	};

