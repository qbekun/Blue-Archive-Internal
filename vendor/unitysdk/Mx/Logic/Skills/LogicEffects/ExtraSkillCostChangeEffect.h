#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class ExtraSkillCostChangeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1416770)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_GET_COEFFICIENT_OFFSET UNITYSDK_OFFSET(0x14167D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x14167E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x14167F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_GET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1416800)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1416810)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ExtraSkillCostChangeEffect_TypeDefinitionIndex = 14741;

	class ExtraSkillCostChangeEffect : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xD0
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xD4
		::System::Boolean _Dispellable_k__BackingField; // 0xD8
		::System::Int64 _BaseAmount_k__BackingField; // 0xE0
		::System::Int64 _Coefficient_k__BackingField; // 0xE8

		::System::Void .ctor(::MX::Logic::Data::ExtraSkillCostChangeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ExtraSkillCostChangeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_Coefficient()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_GET_COEFFICIENT_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_BaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_GET_BASEAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

	};
}

