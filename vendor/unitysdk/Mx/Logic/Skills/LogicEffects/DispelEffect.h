#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Data { class DispelEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELEFFECT_GET_DISPELTARGET_OFFSET UNITYSDK_OFFSET(0x1415200)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1415210)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1415220)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELEFFECT_GET_DISPELCOUNT_OFFSET UNITYSDK_OFFSET(0x1415270)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DispelEffect_TypeDefinitionIndex = 14735;

	class DispelEffect : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* _DispelTarget_k__BackingField; // 0xD0
		::System::Int32 _DispelCount_k__BackingField; // 0xD4

		::FlatData::LogicEffectCategory* get_DispelTarget()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELEFFECT_GET_DISPELTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::DispelEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::DispelEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_DispelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELEFFECT_GET_DISPELCOUNT_OFFSET))(nullptr);
		}

	};
}

