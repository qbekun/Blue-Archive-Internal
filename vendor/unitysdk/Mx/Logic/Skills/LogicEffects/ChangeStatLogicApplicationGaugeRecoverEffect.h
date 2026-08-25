#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class ChangeStatLogicApplicationGaugeRecoverEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_EXTRASTATRATE_OFFSET UNITYSDK_OFFSET(0x140C4D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x140C4E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x140C4F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_EXTRASTATSOURCE_OFFSET UNITYSDK_OFFSET(0x140C500)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140C510)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x140C570)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x140C580)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeRecoverEffect_TypeDefinitionIndex = 14714;

	class ChangeStatLogicApplicationGaugeRecoverEffect : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0xD0
		::FlatData::StatType* _BonusSource_k__BackingField; // 0xD8
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0xE0
		::MX::Logic::Skills::ExtraStatType* _ExtraStatSource_k__BackingField; // 0xE8
		::MX::Core::Math::BasisPoint* _ExtraStatRate_k__BackingField; // 0xF0

		::MX::Core::Math::BasisPoint* get_ExtraStatRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_EXTRASTATRATE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_EXTRASTATSOURCE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ChangeStatLogicApplicationGaugeRecoverEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ChangeStatLogicApplicationGaugeRecoverEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

	};
}

