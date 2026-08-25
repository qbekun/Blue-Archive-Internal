#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Services { class Hash64; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Skills::LogicEffects { class DamageSourceType; }
namespace MX::Logic::Data { class DamagedMultiplierbyDamageOverTimeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_APPLYLOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1413790)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_APPLYLOGICEFFECTTEMPLATEIDHASH_OFFSET UNITYSDK_OFFSET(0x14137A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x14137B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_ADDRATE_OFFSET UNITYSDK_OFFSET(0x14137C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x14137D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14137E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_REMOVECONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1413870)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DamagedMultiplierbyDamageOverTimeEffect_TypeDefinitionIndex = 14729;

	class DamagedMultiplierbyDamageOverTimeEffect : public Il2CppObject
	{
	public:
		::System::Int64 _AddRate_k__BackingField; // 0xD0
		::MX::Core::Services::Hash64* _ApplyLogicEffectTemplateIdHash_k__BackingField; // 0xD8
		::FlatData::EndCondition* _RemoveCondition_k__BackingField; // 0xE0
		::System::String* _RemoveConditionArgument_k__BackingField; // 0xE8
		::System::Boolean _IsDispellable_k__BackingField; // 0xF0
		::MX::Logic::Skills::LogicEffects::DamageSourceType* _ApplyLogicEffectType_k__BackingField; // 0xF4

		::MX::Logic::Skills::LogicEffects::DamageSourceType* get_ApplyLogicEffectType()
		{
			return ((::MX::Logic::Skills::LogicEffects::DamageSourceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_APPLYLOGICEFFECTTYPE_OFFSET))(nullptr);
		}

		::MX::Core::Services::Hash64* get_ApplyLogicEffectTemplateIdHash()
		{
			return ((::MX::Core::Services::Hash64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_APPLYLOGICEFFECTTEMPLATEIDHASH_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_RemoveCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_AddRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_ADDRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::DamagedMultiplierbyDamageOverTimeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::DamagedMultiplierbyDamageOverTimeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_RemoveConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECT_GET_REMOVECONDITIONARGUMENT_OFFSET))(nullptr);
		}

	};
}

