#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ConfrontationGaugeRecoverOverTimeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class StatType; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140C780)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x140C7C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_PERIODFRAME_OFFSET UNITYSDK_OFFSET(0x140C7E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x140C800)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x140C820)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x140C840)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x140C860)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x140C880)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ConfrontationGaugeRecoverOverTimeEffect_TypeDefinitionIndex = 14718;

	class ConfrontationGaugeRecoverOverTimeEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ConfrontationGaugeRecoverOverTimeEffectValue* _value_k__BackingField; // 0xD0

		::System::Void .ctor(::MX::Logic::Data::ConfrontationGaugeRecoverOverTimeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ConfrontationGaugeRecoverOverTimeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_PeriodFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_PERIODFRAME_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::ConfrontationGaugeRecoverOverTimeEffectValue* get_value()
		{
			return ((::MX::Logic::Data::ConfrontationGaugeRecoverOverTimeEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECT_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

