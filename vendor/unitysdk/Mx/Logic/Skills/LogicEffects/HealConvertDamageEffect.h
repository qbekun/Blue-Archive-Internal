#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Data { class HealConvertDamageEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_DAMAGECHECKGROUPID_OFFSET UNITYSDK_OFFSET(0x141ABD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x141ABE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_TRANSFERRATIO_OFFSET UNITYSDK_OFFSET(0x141ABF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x141AC00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x141AC10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_APPLYDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x141AC20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_TRANSFERREDHEALDAMAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x141AC30)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141AC40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_APPLYDAMAGERATIO2_OFFSET UNITYSDK_OFFSET(0x141ACD0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int HealConvertDamageEffect_TypeDefinitionIndex = 14755;

	class HealConvertDamageEffect : public Il2CppObject
	{
	public:
		::MX::Core::Math::BasisPoint* _TransferRatio_k__BackingField; // 0xD0
		::System::Int32 _Duration_k__BackingField; // 0xD8
		::System::Boolean _Dispellable_k__BackingField; // 0xDC
		::System::String* _DamageCheckGroupID_k__BackingField; // 0xE0
		::System::String* _TransferredHealDamageGroupID_k__BackingField; // 0xE8
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio_k__BackingField; // 0xF0
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio2_k__BackingField; // 0xF4

		::System::String* get_DamageCheckGroupID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_DAMAGECHECKGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_TransferRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_TRANSFERRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_DURATION_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_APPLYDAMAGERATIO_OFFSET))(nullptr);
		}

		::System::String* get_TransferredHealDamageGroupID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_TRANSFERREDHEALDAMAGEGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::HealConvertDamageEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::HealConvertDamageEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio2()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALCONVERTDAMAGEEFFECT_GET_APPLYDAMAGERATIO2_OFFSET))(nullptr);
		}

	};
}

