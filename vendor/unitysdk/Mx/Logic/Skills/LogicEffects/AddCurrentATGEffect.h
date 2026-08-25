#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class AddCurrentATGEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTATGEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1405E70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTATGEFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1405EB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTATGEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1405EC0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int AddCurrentATGEffect_TypeDefinitionIndex = 14676;

	class AddCurrentATGEffect : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0xD0

		::System::Void .ctor(::MX::Logic::Data::AddCurrentATGEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::AddCurrentATGEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTATGEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTATGEFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTATGEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

	};
}

