#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class CostOverloadEnableEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x140C890)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x140C8A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140C8B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x140C900)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int CostOverloadEnableEffect_TypeDefinitionIndex = 14719;

	class CostOverloadEnableEffect : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xD0
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xD4
		::System::Boolean _Dispellable_k__BackingField; // 0xD8

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::CostOverloadEnableEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::CostOverloadEnableEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

	};
}

