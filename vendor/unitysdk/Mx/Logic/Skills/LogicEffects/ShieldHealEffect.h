#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class ShieldHealEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1421460)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_GET_SHIELDID_OFFSET UNITYSDK_OFFSET(0x14214E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_GET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x14214F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1421500)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x1421510)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_SET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x1421520)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x1421530)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ShieldHealEffect_TypeDefinitionIndex = 14796;

	class ShieldHealEffect : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0xD0
		::FlatData::StatType* _BonusSource_k__BackingField; // 0xD8
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0xE0
		::System::String* _ShieldId_k__BackingField; // 0xE8
		::System::Boolean _TriggerOtherEffect_k__BackingField; // 0xF0

		::System::Void .ctor(::MX::Logic::Data::ShieldHealEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ShieldHealEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_ShieldId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_GET_SHIELDID_OFFSET))(nullptr);
		}

		::System::Boolean get_TriggerOtherEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_GET_TRIGGEROTHEREFFECT_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_TriggerOtherEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_SET_TRIGGEROTHEREFFECT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALEFFECT_GET_BONUSRATE_OFFSET))(nullptr);
		}

	};
}

