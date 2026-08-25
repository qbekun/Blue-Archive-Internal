#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class ConfrontationGaugeRecoverEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x140C6B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x140C6C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_SET_AMOUNTAPPLIED_OFFSET UNITYSDK_OFFSET(0x140C6D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_AMOUNTAPPLIED_OFFSET UNITYSDK_OFFSET(0x140C6E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140C6F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_ISACCUMULATEDHEAL_OFFSET UNITYSDK_OFFSET(0x140C750)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x140C760)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x140C770)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ConfrontationGaugeRecoverEffect_TypeDefinitionIndex = 14717;

	class ConfrontationGaugeRecoverEffect : public Il2CppObject
	{
	public:
		::System::Boolean _IsAccumulatedHeal_k__BackingField; // 0xD0
		::System::Int64 _Amount_k__BackingField; // 0xD8
		::FlatData::StatType* _BonusSource_k__BackingField; // 0xE0
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0xE8
		::System::Int64 _AmountApplied_k__BackingField; // 0xF0

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Void set_AmountApplied(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_SET_AMOUNTAPPLIED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AmountApplied()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_AMOUNTAPPLIED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ConfrontationGaugeRecoverEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ConfrontationGaugeRecoverEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsAccumulatedHeal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_ISACCUMULATEDHEAL_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEREFFECT_GET_BONUSRATE_OFFSET))(nullptr);
		}

	};
}

