#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class AmplifyDoTRemoveCondition; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class DotAbility; }
namespace MX::Logic::BattleEntities { class DotProcessor; }
namespace MX::Logic::Data { class AmplifyDoTAdditionalTickEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1406F00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1406F10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_ISTARGETTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1406F20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_TARGETLOGICEFFECTTEMPLATEIDHASH_OFFSET UNITYSDK_OFFSET(0x1406F90)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_ADDITIONALTICKDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1406FA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_REMOVECONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1406FB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x1406FC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_ADDITIONALTICKINTERVAL_OFFSET UNITYSDK_OFFSET(0x1406FD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_APPLYDOTAMPLIFYTO_OFFSET UNITYSDK_OFFSET(0x1406FE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_ISREMOVECONDITIONMET_OFFSET UNITYSDK_OFFSET(0x1407090)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14070B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x14072A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_ADDITIONALTICKDAMAGEAPPLYCOUNT_OFFSET UNITYSDK_OFFSET(0x1407330)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1407340)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int AmplifyDoTAdditionalTickEffect_TypeDefinitionIndex = 14688;

	class AmplifyDoTAdditionalTickEffect : public Il2CppObject
	{
	public:
		::System::Int64 _DurationFrame_k__BackingField; // 0xD0
		::System::Boolean _Dispellable_k__BackingField; // 0xD8
		::FlatData::AmplifyDoTRemoveCondition* _RemoveCondition_k__BackingField; // 0xDC
		::System::String* _RemoveConditionArgument_k__BackingField; // 0xE0
		Il2CppObject* _TargetLogicEffectTemplateIdHash_k__BackingField; // 0xE8
		::System::Int32 _AdditionalTickDamageApplyCount_k__BackingField; // 0xF0
		::System::Int64 _AdditionalTickDamageRate_k__BackingField; // 0xF8
		::System::Int32 _AdditionalTickInterval_k__BackingField; // 0x100
		::System::Int32 totalApplyCount; // 0x104
		::System::Int32 applyCount; // 0x108
		::MX::Logic::Battles::Battle* battle; // 0x110
		Il2CppObject* ability; // 0x118

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Boolean IsTargetTemplate(::MX::Logic::BattleEntities::DotAbility* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_ISTARGETTEMPLATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TargetLogicEffectTemplateIdHash()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_TARGETLOGICEFFECTTEMPLATEIDHASH_OFFSET))(nullptr);
		}

		::System::Int64 get_AdditionalTickDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_ADDITIONALTICKDAMAGERATE_OFFSET))(nullptr);
		}

		::System::String* get_RemoveConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_REMOVECONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::FlatData::AmplifyDoTRemoveCondition* get_RemoveCondition()
		{
			return ((::FlatData::AmplifyDoTRemoveCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_AdditionalTickInterval()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_ADDITIONALTICKINTERVAL_OFFSET))(nullptr);
		}

		::System::Void ApplyDotAmplifyTo(::MX::Logic::BattleEntities::DotAbility* arg, ::MX::Logic::BattleEntities::DotProcessor* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::DotAbility*, ::MX::Logic::BattleEntities::DotProcessor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_APPLYDOTAMPLIFYTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsRemoveConditionMet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_ISREMOVECONDITIONMET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::AmplifyDoTAdditionalTickEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::AmplifyDoTAdditionalTickEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CheckExpired()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_CHECKEXPIRED_OFFSET))(nullptr);
		}

		::System::Int32 get_AdditionalTickDamageApplyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_GET_ADDITIONALTICKDAMAGEAPPLYCOUNT_OFFSET))(nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_AMPLIFYDOTADDITIONALTICKEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

