#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class MaxHpOverHealEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPBYOVERHEALRATE_OFFSET UNITYSDK_OFFSET(0x141EF60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPREDUCEBASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x141EF70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPBASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x141EF80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x141EF90)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPREDUCEPERIOD_OFFSET UNITYSDK_OFFSET(0x141EFA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141EFB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPDURATION_OFFSET UNITYSDK_OFFSET(0x141F050)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPREDUCEBYHEALAMOUNTRATE_OFFSET UNITYSDK_OFFSET(0x141F060)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x141F070)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPLIMITRATEBYTARGETMAXHP_OFFSET UNITYSDK_OFFSET(0x141F100)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int MaxHpOverHealEffect_TypeDefinitionIndex = 14781;

	class MaxHpOverHealEffect : public Il2CppObject
	{
	public:
		::System::Int32 _TemporaryHpDuration_k__BackingField; // 0x120
		::System::Boolean _TemporaryHpDispellable_k__BackingField; // 0x124
		::System::Int64 _TemporaryHpLimitRateByTargetMaxHp_k__BackingField; // 0x128
		::System::Int32 _TemporaryHpBaseAmount_k__BackingField; // 0x130
		::System::Int64 _TemporaryHpByOverHealRate_k__BackingField; // 0x138
		::System::Int32 _TemporaryHpReducePeriod_k__BackingField; // 0x140
		::System::Int32 _TemporaryHpReduceBaseAmount_k__BackingField; // 0x144
		::System::Int64 _TemporaryHpReduceByHealAmountRate_k__BackingField; // 0x148

		::System::Int64 get_TemporaryHpByOverHealRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPBYOVERHEALRATE_OFFSET))(nullptr);
		}

		::System::Int32 get_TemporaryHpReduceBaseAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPREDUCEBASEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TemporaryHpBaseAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPBASEAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_TemporaryHpDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_TemporaryHpReducePeriod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPREDUCEPERIOD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::MaxHpOverHealEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::MaxHpOverHealEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_TemporaryHpDuration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_TemporaryHpReduceByHealAmountRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPREDUCEBYHEALAMOUNTRATE_OFFSET))(nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_ACTIVATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 get_TemporaryHpLimitRateByTargetMaxHp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPOVERHEALEFFECT_GET_TEMPORARYHPLIMITRATEBYTARGETMAXHP_OFFSET))(nullptr);
		}

	};
}

