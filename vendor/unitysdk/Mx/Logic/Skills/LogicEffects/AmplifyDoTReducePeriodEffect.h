#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class AmplifyDoTRemoveCondition; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class DotAbility; }
namespace MX::Logic::BattleEntities { class DotProcessor; }
namespace MX::Logic::Data { class AmplifyDoTReducePeriodEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_REMOVECONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x14076F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_APPLYDOTAMPLIFYTO_OFFSET UNITYSDK_OFFSET(0x1407700)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1407860)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x1407870)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1407900)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_ISREMOVECONDITIONMET_OFFSET UNITYSDK_OFFSET(0x1407840)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1407910)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_TARGETLOGICEFFECTTEMPLATEIDHASH_OFFSET UNITYSDK_OFFSET(0x1407A50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_ISTARGETTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1407A60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_PERIODREDUCERATE_OFFSET UNITYSDK_OFFSET(0x1407AD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1407AE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x1407CD0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int AmplifyDoTReducePeriodEffect_TypeDefinitionIndex = 14690;

	class AmplifyDoTReducePeriodEffect : public Il2CppObject
	{
	public:
		::System::Int64 _DurationFrame_k__BackingField; // 0xD0
		::System::Boolean _Dispellable_k__BackingField; // 0xD8
		::MX::Core::Math::BasisPoint* _PeriodReduceRate_k__BackingField; // 0xE0
		::FlatData::AmplifyDoTRemoveCondition* _RemoveCondition_k__BackingField; // 0xE8
		::System::String* _RemoveConditionArgument_k__BackingField; // 0xF0
		Il2CppObject* _TargetLogicEffectTemplateIdHash_k__BackingField; // 0xF8
		::System::Int32 applyCountRemain; // 0x100
		::MX::Logic::Battles::Battle* battle; // 0x108
		Il2CppObject* ability; // 0x110

		::System::String* get_RemoveConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_REMOVECONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void ApplyDotAmplifyTo(::MX::Logic::BattleEntities::DotAbility* arg, ::MX::Logic::BattleEntities::DotProcessor* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::DotAbility*, ::MX::Logic::BattleEntities::DotProcessor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_APPLYDOTAMPLIFYTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CheckExpired()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_CHECKEXPIRED_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Boolean IsRemoveConditionMet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_ISREMOVECONDITIONMET_OFFSET))(nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_TargetLogicEffectTemplateIdHash()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_TARGETLOGICEFFECTTEMPLATEIDHASH_OFFSET))(nullptr);
		}

		::System::Boolean IsTargetTemplate(::MX::Logic::BattleEntities::DotAbility* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_ISTARGETTEMPLATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_PeriodReduceRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_PERIODREDUCERATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::AmplifyDoTReducePeriodEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::AmplifyDoTReducePeriodEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::AmplifyDoTRemoveCondition* get_RemoveCondition()
		{
			return ((::FlatData::AmplifyDoTRemoveCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTREDUCEPERIODEFFECT_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

	};
}

