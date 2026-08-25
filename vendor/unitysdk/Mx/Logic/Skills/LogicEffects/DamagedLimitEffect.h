#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class DamagedLimitEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1413690)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1413720)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_LIMITHPRATE_OFFSET UNITYSDK_OFFSET(0x1413730)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1413740)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_EXTRASTATTYPE_OFFSET UNITYSDK_OFFSET(0x1413750)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_ENDCONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x1413760)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_ENDCONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x1413770)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_LIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0x1413780)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DamagedLimitEffect_TypeDefinitionIndex = 14728;

	class DamagedLimitEffect : public Il2CppObject
	{
	public:
		::System::Int64 _LimitAmount_k__BackingField; // 0xD0
		::MX::Core::Math::BasisPoint* _LimitHPRate_k__BackingField; // 0xD8
		::MX::Logic::Skills::ExtraStatType* _ExtraStatType_k__BackingField; // 0xE0
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xE4
		::System::String* _EndConditionArgumentFirst_k__BackingField; // 0xE8
		::System::String* _EndConditionArgumentSecond_k__BackingField; // 0xF0
		::System::Boolean _Dispellable_k__BackingField; // 0xF8

		::System::Void .ctor(::MX::Logic::Data::DamagedLimitEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::DamagedLimitEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_LimitHPRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_LIMITHPRATE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatType()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_EXTRASTATTYPE_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_ENDCONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_ENDCONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEDLIMITEFFECT_GET_LIMITAMOUNT_OFFSET))(nullptr);
		}

	};
}

