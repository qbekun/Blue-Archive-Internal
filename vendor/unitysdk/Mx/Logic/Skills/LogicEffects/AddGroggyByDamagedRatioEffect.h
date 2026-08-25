#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a; }
namespace MX::Logic::Data { class AddGroggyByDamagedRatioEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Battles { class DamageResultEventArgs; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1406560)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_GET_GROGGYRATIOBYDAMAGED_OFFSET UNITYSDK_OFFSET(0x1406570)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1406580)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14067C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1406830)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1406840)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x1406750)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1406910)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET UNITYSDK_OFFSET(0x1406920)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int AddGroggyByDamagedRatioEffect_TypeDefinitionIndex = 14679;

	class AddGroggyByDamagedRatioEffect : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xD0
		::System::String* _EndConditionArgument_k__BackingField; // 0xD8
		::System::Int64 _GroggyRatioByDamaged_k__BackingField; // 0xE0
		::System::Boolean _Dispellable_k__BackingField; // 0xE8
		::MX::Logic::Battles::Battle* battle; // 0xF0
		::MX::Logic::Battles::O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a* logicEffectProcessor; // 0xF8
		Il2CppObject* ability; // 0x100

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_GroggyRatioByDamaged()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_GET_GROGGYRATIOBYDAMAGED_OFFSET))(nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::AddGroggyByDamagedRatioEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::AddGroggyByDamagedRatioEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_EndConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void Apply(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CheckExpired()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_CHECKEXPIRED_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_DamageProcessed(::System::Object* arg, ::MX::Logic::Battles::DamageResultEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageResultEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDGROGGYBYDAMAGEDRATIOEFFECT_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

