#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class DispelLogicEffectGroupIdEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTGROUPIDEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1415280)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTGROUPIDEFFECT_GET_DISPELCOUNT_OFFSET UNITYSDK_OFFSET(0x1415290)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTGROUPIDEFFECT_GET_LOGICEFFECTGROUPIDTODISPEL_OFFSET UNITYSDK_OFFSET(0x14152A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTGROUPIDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14152B0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DispelLogicEffectGroupIdEffect_TypeDefinitionIndex = 14736;

	class DispelLogicEffectGroupIdEffect : public Il2CppObject
	{
	public:
		::System::String* _LogicEffectGroupIdToDispel_k__BackingField; // 0xD0
		::System::Int32 _DispelCount_k__BackingField; // 0xD8

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTGROUPIDEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Int32 get_DispelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTGROUPIDEFFECT_GET_DISPELCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_LogicEffectGroupIdToDispel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTGROUPIDEFFECT_GET_LOGICEFFECTGROUPIDTODISPEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::DispelLogicEffectGroupIdEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::DispelLogicEffectGroupIdEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTGROUPIDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

