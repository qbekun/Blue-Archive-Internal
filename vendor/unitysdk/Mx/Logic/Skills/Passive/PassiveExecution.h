#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class BattleExpression; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class PassiveTriggerEvent; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class EchelonConstraint; }
namespace MX::Logic::BattleEntities { class PassiveSkillSpawner; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1402FB0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x1402FC0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x1402FE0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRIGGERSOURCE_OFFSET UNITYSDK_OFFSET(0x1402FF0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1403000)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_SET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1403010)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRIGGEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x1403020)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_SET_TRIGGEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x1403030)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_MAXTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x1403040)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRYCOUNT_OFFSET UNITYSDK_OFFSET(0x1403060)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_RESETTRYCOUNTUSESKILL_OFFSET UNITYSDK_OFFSET(0x1400470)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1403080)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0x13FFD10)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_REMAINEDCOOLTIMENOTTRIGGERFRAME_OFFSET UNITYSDK_OFFSET(0x13FF3E0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_SKILLCACHE_OFFSET UNITYSDK_OFFSET(0x14030C0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRIGGERRATE_OFFSET UNITYSDK_OFFSET(0x14030D0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_ECHELONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1403140)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x14030A0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRIGGEREXPRESSIONTEXT_OFFSET UNITYSDK_OFFSET(0x1403170)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_BATTLECACHE_OFFSET UNITYSDK_OFFSET(0x1403190)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_SET_BATTLECACHE_OFFSET UNITYSDK_OFFSET(0x14031A0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F42F0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1402CC0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F44F0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F4420)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x13F78A0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_DISABLEEVALUATE_OFFSET UNITYSDK_OFFSET(0x1402E00)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1402E40)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_EVALUATEPROBABILITY_OFFSET UNITYSDK_OFFSET(0x13FFF70)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_BUILDEXPRESSION_OFFSET UNITYSDK_OFFSET(0x14031B0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_EVALUATEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1403470)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_EVALUATEECHELONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1402EC0)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_TRIGGER_OFFSET UNITYSDK_OFFSET(0x13F4580)
#define MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_RESERVEAPPLY_OFFSET UNITYSDK_OFFSET(0x14034A0)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int PassiveExecution_TypeDefinitionIndex = 14667;

	class PassiveExecution : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::BattleEntity* _Invoker_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::BattleEntity* _TriggerSource_k__BackingField; // 0x20
		::System::Boolean _IsActivated_k__BackingField; // 0x28
		::MX::Logic::Skills::Passive::BattleExpression* _TriggerExpression_k__BackingField; // 0x30
		::MX::Logic::Skills::Passive::PassiveSkill* _skillCache_k__BackingField; // 0x38
		::System::Boolean isEvaluationEnabled; // 0x40
		::MX::Logic::Battles::Battle* _battleCache_k__BackingField; // 0x48

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::Data::PassiveTriggerEvent* get_TriggerEvent()
		{
			return ((::MX::Logic::Data::PassiveTriggerEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRIGGEREVENT_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Invoker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_INVOKER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_TriggerSource()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRIGGERSOURCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_ISACTIVATED_OFFSET))(nullptr);
		}

		::System::Void set_IsActivated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_SET_ISACTIVATED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::Passive::BattleExpression* get_TriggerExpression()
		{
			return ((::MX::Logic::Skills::Passive::BattleExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRIGGEREXPRESSION_OFFSET))(nullptr);
		}

		::System::Void set_TriggerExpression(::MX::Logic::Skills::Passive::BattleExpression* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::Passive::BattleExpression*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_SET_TRIGGEREXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxTriggerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_MAXTRIGGERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRYCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetTryCountUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_RESETTRYCOUNTUSESKILL_OFFSET))(nullptr);
		}

		::System::Int32 get_Elapsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_ELAPSED_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_CANTRIGGER_OFFSET))(nullptr);
		}

		::System::Int64 get_RemainedCoolTimeNotTriggerFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_REMAINEDCOOLTIMENOTTRIGGERFRAME_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::Passive::PassiveSkill* get_skillCache()
		{
			return ((::MX::Logic::Skills::Passive::PassiveSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_SKILLCACHE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_TriggerRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRIGGERRATE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::EchelonConstraint* get_EchelonConstraint()
		{
			return ((::MX::Logic::Data::EchelonConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_ECHELONCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_DURATION_OFFSET))(nullptr);
		}

		::System::String* get_TriggerExpressionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_TRIGGEREXPRESSIONTEXT_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Battle* get_battleCache()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_GET_BATTLECACHE_OFFSET))(nullptr);
		}

		::System::Void set_battleCache(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_SET_BATTLECACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void DisableEvaluate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_DISABLEEVALUATE_OFFSET))(nullptr);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_EVALUATE_OFFSET))(nullptr);
		}

		::System::Boolean EvaluateProbability()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_EVALUATEPROBABILITY_OFFSET))(nullptr);
		}

		::System::Void BuildExpression(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_BUILDEXPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean EvaluateExpression()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_EVALUATEEXPRESSION_OFFSET))(nullptr);
		}

		::System::Boolean EvaluateEchelonConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_EVALUATEECHELONCONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::PassiveSkillSpawner* Trigger(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::MX::Logic::BattleEntities::PassiveSkillSpawner*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_TRIGGER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::PassiveSkillSpawner* ReserveApply(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::MX::Logic::BattleEntities::PassiveSkillSpawner*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_PASSIVEEXECUTION_RESERVEAPPLY_OFFSET))(arg, nullptr);
		}

	};
}

