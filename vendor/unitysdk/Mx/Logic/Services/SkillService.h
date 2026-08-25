#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::Logic::Skills { class AutoUseCheck; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Data::Excel { class CharacterSkillListExcel; }
namespace MX::Data::Excel { class InteractiveWorldRaidCarrierExcel; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Data { class SkillAbilityValue; }
namespace MX::Logic::Data { class ModifierCheckTarget; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::Data { class PassiveTriggerEvent; }
namespace UnityEngine { class Vector2; }
namespace MX::Data { class GroundObstacleData; }
namespace FlatData { class WeekDungeonType; }
namespace MX::Logic::Battles { class PlayerGroup; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameData::DAO::Battle { class ManualSkillDAO; }

#define MX_LOGIC_SERVICES_SKILLSERVICE_GETLEVELENTITYRANGE_OFFSET UNITYSDK_OFFSET(0x10D5E50)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETLEVELENTITYANGLE_OFFSET UNITYSDK_OFFSET(0x10D5F40)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETLEVELENTITYMINRANGE_OFFSET UNITYSDK_OFFSET(0x10D5FE0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_CREATEAUTOUSECHECK_OFFSET UNITYSDK_OFFSET(0x10D5FF0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_FINDSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x10D6F70)
#define MX_LOGIC_SERVICES_SKILLSERVICE_FINDSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x10D7120)
#define MX_LOGIC_SERVICES_SKILLSERVICE_FINDBEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0x10D7140)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x10D7160)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETCARRIERSKILLACTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x10D74B0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETCARRIERSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x10D7620)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x10D7100)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x10D7760)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETBEHAVIORS_OFFSET UNITYSDK_OFFSET(0x10D7780)
#define MX_LOGIC_SERVICES_SKILLSERVICE_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x10D7ED0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETVALUEBYLEVEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SERVICES_SKILLSERVICE_APPLYABILITY_OFFSET UNITYSDK_OFFSET(0x10D7EF0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_CHECKCONDITIONALMODIFIERS_OFFSET UNITYSDK_OFFSET(0x10D83C0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETCONDITIONALMODIFIERTARGET_OFFSET UNITYSDK_OFFSET(0x10D8780)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETDURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x10D8C00)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETALLCHARACTERSANDSUPPORTERS_OFFSET UNITYSDK_OFFSET(0x10D8AA0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISNORMALATTACKSKILL_OFFSET UNITYSDK_OFFSET(0x10D8DB0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISEXSKILL_OFFSET UNITYSDK_OFFSET(0x10D8DD0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x10D8DF0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISEXTRAPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x10D8E10)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISLEADERSKILL_OFFSET UNITYSDK_OFFSET(0x10D8E30)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x10D8E50)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISHIDDENPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x10D8E70)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISGROUNDPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x10D8E90)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISSUPPORTSKILL_OFFSET UNITYSDK_OFFSET(0x10D8EB0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISMANUALSKILL_OFFSET UNITYSDK_OFFSET(0x10D8EC0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISMANUALSKILL_OFFSET UNITYSDK_OFFSET(0x10D8ED0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_REQUIRETRIGGERSOURCE_OFFSET UNITYSDK_OFFSET(0x10D8EE0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x10D8F00)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x10D99F0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISSKILLTYPEEQUALS_OFFSET UNITYSDK_OFFSET(0x10D9B90)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISCHANNELANDTYPEEQUALS_OFFSET UNITYSDK_OFFSET(0x10D9BD0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_TRYGETCHARACTERSPAWNABLENODE_OFFSET UNITYSDK_OFFSET(0x10D9C20)
#define MX_LOGIC_SERVICES_SKILLSERVICE_TRYGETOBSTACLESPAWNABLENODE_OFFSET UNITYSDK_OFFSET(0x10DA570)
#define MX_LOGIC_SERVICES_SKILLSERVICE_TRYGETOUTOFMOVINGAREA_OFFSET UNITYSDK_OFFSET(0x10DC260)
#define MX_LOGIC_SERVICES_SKILLSERVICE_CANSPAWNCHARACTERAREA_OFFSET UNITYSDK_OFFSET(0x10D9EC0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_CANSPAWNOBSTACLEAREA_OFFSET UNITYSDK_OFFSET(0x10DA7E0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_CHECKOBSTACLEPOINTINWALKABLENODE_OFFSET UNITYSDK_OFFSET(0x10DC4A0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISOPEN_OFFSET UNITYSDK_OFFSET(0x10DC4F0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETWEEKDUNGEONGROUPBUFFS_OFFSET UNITYSDK_OFFSET(0x10DC8A0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETWEEKDUNGEONGROUPBUFFS_OFFSET UNITYSDK_OFFSET(0x10DD300)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETCONQUESTBATTLEBUFFS_OFFSET UNITYSDK_OFFSET(0x10DD9E0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETAPPLIEDBUFFS_OFFSET UNITYSDK_OFFSET(0x10DE000)
#define MX_LOGIC_SERVICES_SKILLSERVICE_ISSYNCDEBUFFTARGET_OFFSET UNITYSDK_OFFSET(0x10DE4F0)
#define MX_LOGIC_SERVICES_SKILLSERVICE_GETLOGICEFFECTAMOUNT_OFFSET UNITYSDK_OFFSET(0x10DCF80)
#define MX_LOGIC_SERVICES_SKILLSERVICE__GETSKILLGROUPID_G__ISEMPTYSKILL|7_0_OFFSET UNITYSDK_OFFSET(0x10D7460)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int SkillService_TypeDefinitionIndex = 12987;

	class SkillService : public Il2CppObject
	{
	public:
		::System::Int64 GetLevelEntityRange(::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::SkillEntityDAO* arg2)
		{
			return ((::System::Int64(*)(::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::SkillEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETLEVELENTITYRANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLevelEntityAngle(::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::SkillEntityDAO* arg2)
		{
			return ((::System::Int64(*)(::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::SkillEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETLEVELENTITYANGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLevelEntityMinRange(::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::SkillEntityDAO* arg2)
		{
			return ((::System::Int64(*)(::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::SkillEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETLEVELENTITYMINRANGE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::AutoUseCheck* CreateAutoUseCheck(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			return ((::MX::Logic::Skills::AutoUseCheck*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_CREATEAUTOUSECHECK_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::String* FindSkillGroupId(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int64 arg5, ::MX::Logic::BattleEntities::SkillSlot* arg6)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int64, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_FINDSKILLGROUPID_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* FindSkillSlot(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_FINDSKILLSLOT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* FindBehaviorType(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_FINDBEHAVIORTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetSkillGroupId(::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Data::Excel::CharacterSkillListExcel* arg2)
		{
			return ((::System::String*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::MX::Data::Excel::CharacterSkillListExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETSKILLGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetCarrierSkillActionGroupId(::System::Int64 arg, ::MX::Logic::BattleEntities::SkillSlot* arg2)
		{
			return ((::System::String*(*)(::System::Int64, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETCARRIERSKILLACTIONGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* GetCarrierSkillSlot(::MX::Data::Excel::InteractiveWorldRaidCarrierExcel* arg, ::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::MX::Data::Excel::InteractiveWorldRaidCarrierExcel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETCARRIERSKILLSLOT_OFFSET))(arg, str, nullptr);
		}

		::MX::Logic::Skills::SkillType* GetSkillType(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETSKILLTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillType* GetSkillType(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETSKILLTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBehaviors(::MX::Logic::Skills::SkillType* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETBEHAVIORS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanLevelUp(::MX::Logic::Skills::SkillType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_CANLEVELUP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetValueByLevel(Il2CppObject* arg, ::System::Int32 arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETVALUEBYLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyAbility(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3, ::MX::Logic::Data::SkillAbilityValue* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::MX::Logic::Data::SkillAbilityValue*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_APPLYABILITY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean CheckConditionalModifiers(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_CHECKCONDITIONALMODIFIERS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* GetConditionalModifierTarget(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Data::ModifierCheckTarget* arg4)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::ModifierCheckTarget*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETCONDITIONALMODIFIERTARGET_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 GetDurationFrame(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETDURATIONFRAME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllCharactersAndSupporters(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::CharacterGroup* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::CharacterGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETALLCHARACTERSANDSUPPORTERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsNormalAttackSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISNORMALATTACKSKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISEXSKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPassiveSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISPASSIVESKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExtraPassiveSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISEXTRAPASSIVESKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLeaderSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISLEADERSKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPublicSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISPUBLICSKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsHiddenPassiveSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISHIDDENPASSIVESKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGroundPassiveSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISGROUNDPASSIVESKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSupportSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISSUPPORTSKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsManualSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISMANUALSKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsManualSkill(::MX::Logic::Skills::SkillType* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISMANUALSKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean RequireTriggerSource(::MX::Logic::Data::PassiveTriggerEvent* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::PassiveTriggerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_REQUIRETRIGGERSOURCE_OFFSET))(arg, nullptr);
		}

		::System::String* GetSkillGroupId(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Int64 arg2)
		{
			return ((::System::String*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETSKILLGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* GetSkillSlot(::MX::Data::Excel::CharacterSkillListExcel* arg, ::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::MX::Data::Excel::CharacterSkillListExcel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETSKILLSLOT_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsSkillTypeEquals(::MX::Logic::BattleEntities::SkillSlot* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISSKILLTYPEEQUALS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsChannelAndTypeEquals(::MX::Logic::Skills::LogicEffects::LogicEffect* arg, ::MX::Logic::Skills::LogicEffects::LogicEffect* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISCHANNELANDTYPEEQUALS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetCharacterSpawnableNode(::MX::Logic::Battles::Battle* arg, ::System::Single arg2, ::UnityEngine::Vector2* arg3, GroundNode&* arg4, ::System::Boolean arg5, ::MX::Logic::BattleEntities::BattleEntity* arg6, ::System::Boolean arg7)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::System::Single, ::UnityEngine::Vector2*, GroundNode&*, ::System::Boolean, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_TRYGETCHARACTERSPAWNABLENODE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Boolean TryGetObstacleSpawnableNode(::MX::Logic::Battles::Battle* arg, ::MX::Data::GroundObstacleData* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, ::System::Boolean arg5, GroundNode&* arg6)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Data::GroundObstacleData*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Boolean, GroundNode&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_TRYGETOBSTACLESPAWNABLENODE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean TryGetOutOfMovingArea(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2, GroundNode&* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, GroundNode&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_TRYGETOUTOFMOVINGAREA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanSpawnCharacterArea(::MX::Logic::Battles::Battle* arg, ::System::Single arg2, ::UnityEngine::Vector2* arg3, ::System::Boolean arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5, ::System::Boolean arg6)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::System::Single, ::UnityEngine::Vector2*, ::System::Boolean, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_CANSPAWNCHARACTERAREA_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CanSpawnObstacleArea(::MX::Logic::Battles::Battle* arg, ::MX::Data::GroundObstacleData* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, ::System::Boolean arg5)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Data::GroundObstacleData*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_CANSPAWNOBSTACLEAREA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean CheckObstaclePointInWalkableNode(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_CHECKOBSTACLEPOINTINWALKABLENODE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsOpen(::System::Int64 arg, ::System::Int32 arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISOPEN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetWeekDungeonGroupBuffs(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETWEEKDUNGEONGROUPBUFFS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetWeekDungeonGroupBuffs(::FlatData::WeekDungeonType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETWEEKDUNGEONGROUPBUFFS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConquestBattleBuffs(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETCONQUESTBATTLEBUFFS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAppliedBuffs(::MX::Logic::Battles::PlayerGroup* arg, ::System::Int32 arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::PlayerGroup*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETAPPLIEDBUFFS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSyncDebuffTarget(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_ISSYNCDEBUFFTARGET_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* GetLogicEffectAmount(::MX::GameData::DAO::Battle::ManualSkillDAO* arg, ::System::Int32 arg2)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::GameData::DAO::Battle::ManualSkillDAO*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE_GETLOGICEFFECTAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _GetSkillGroupId_g__IsEmptySkill|7_0(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLSERVICE__GETSKILLGROUPID_G__ISEMPTYSKILL|7_0_OFFSET))(str, nullptr);
		}

	};
}

