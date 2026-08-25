#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class SkillCostChangeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_APPLYLOGICEFFECTSONENDCONDITIONARGUMENTCHANGE_OFFSET UNITYSDK_OFFSET(0x1421930)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1421940)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_COEFFICIENT_OFFSET UNITYSDK_OFFSET(0x1421950)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1421960)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1421970)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x14219F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1421A00)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int SkillCostChangeEffect_TypeDefinitionIndex = 14801;

	class SkillCostChangeEffect : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xD0
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xD4
		Il2CppObject* _ApplyLogicEffectsOnEndConditionArgumentChange_k__BackingField; // 0xD8
		::System::Boolean _Dispellable_k__BackingField; // 0xE0
		::System::Int64 _BaseAmount_k__BackingField; // 0xE8
		::System::Int64 _Coefficient_k__BackingField; // 0xF0

		Il2CppObject* get_ApplyLogicEffectsOnEndConditionArgumentChange()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_APPLYLOGICEFFECTSONENDCONDITIONARGUMENTCHANGE_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_Coefficient()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_COEFFICIENT_OFFSET))(nullptr);
		}

		::System::Int64 get_BaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_BASEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::SkillCostChangeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::SkillCostChangeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

	};
}

