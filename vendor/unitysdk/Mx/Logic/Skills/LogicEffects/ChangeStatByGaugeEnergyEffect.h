#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class StatType; }
namespace MX::Logic::Data { class ChangeStatByGaugeEnergyEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATBYGAUGEENERGYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140BA10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATBYGAUGEENERGYEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x140BAB0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ChangeStatByGaugeEnergyEffect_TypeDefinitionIndex = 14710;

	class ChangeStatByGaugeEnergyEffect : public Il2CppObject
	{
	public:
		::MX::Core::Math::BasisPoint* CheckStartGaugeEnergyRatio; // 0xD0
		::MX::Core::Math::BasisPoint* CheckEndGaugeEnergyRatio; // 0xD8
		::FlatData::StatType* StatType; // 0xE0
		::System::Int64 StartChangeStatBaseAmount; // 0xE8
		::System::Int64 EndChangeStatBaseAmount; // 0xF0
		::MX::Core::Math::BasisPoint* StartChangeStatCoefficient; // 0xF8
		::MX::Core::Math::BasisPoint* EndChangeStatCoefficient; // 0x100
		::System::Boolean Dispellable; // 0x108
		::System::Int64 Duration; // 0x110

		::System::Void .ctor(::MX::Logic::Data::ChangeStatByGaugeEnergyEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ChangeStatByGaugeEnergyEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATBYGAUGEENERGYEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATBYGAUGEENERGYEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

	};
}

