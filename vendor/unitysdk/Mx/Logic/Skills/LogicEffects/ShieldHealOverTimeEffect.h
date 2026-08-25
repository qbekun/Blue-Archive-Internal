#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ShieldHealOverTimeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_SHIELDID_OFFSET UNITYSDK_OFFSET(0x1421540)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1421560)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1421580)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14215A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x14215F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1421610)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1421620)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x1421640)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_PERIODFRAME_OFFSET UNITYSDK_OFFSET(0x1421660)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ShieldHealOverTimeEffect_TypeDefinitionIndex = 14797;

	class ShieldHealOverTimeEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ShieldHealOverTimeEffectValue* _value_k__BackingField; // 0xD0

		::System::String* get_ShieldId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_SHIELDID_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ShieldHealOverTimeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ShieldHealOverTimeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::ShieldHealOverTimeEffectValue* get_value()
		{
			return ((::MX::Logic::Data::ShieldHealOverTimeEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Int32 get_PeriodFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALOVERTIMEEFFECT_GET_PERIODFRAME_OFFSET))(nullptr);
		}

	};
}

