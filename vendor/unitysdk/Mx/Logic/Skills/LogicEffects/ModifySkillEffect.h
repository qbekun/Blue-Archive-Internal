#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillProperty; }
namespace MX::Logic::Skills::LogicEffects { class StatEvalType; }
namespace MX::Logic::Data { class ModifySkillEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_APPLYSLOTS_OFFSET UNITYSDK_OFFSET(0x141F110)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x141F120)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_TARGETPROPERTY_OFFSET UNITYSDK_OFFSET(0x141F130)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x141F140)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141F150)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x141F240)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_EVALTYPE_OFFSET UNITYSDK_OFFSET(0x141F250)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x141F260)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ModifySkillEffect_TypeDefinitionIndex = 14782;

	class ModifySkillEffect : public Il2CppObject
	{
	public:
		Il2CppObject* _ApplySlots_k__BackingField; // 0xD0
		::MX::Logic::Skills::SkillProperty* _TargetProperty_k__BackingField; // 0xD8
		::MX::Logic::Skills::LogicEffects::StatEvalType* _EvalType_k__BackingField; // 0xDC
		::System::Double _Amount_k__BackingField; // 0xE0
		::System::Int32 _DurationFrame_k__BackingField; // 0xE8
		::System::Boolean _Dispellable_k__BackingField; // 0xEC

		Il2CppObject* get_ApplySlots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_APPLYSLOTS_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillProperty* get_TargetProperty()
		{
			return ((::MX::Logic::Skills::SkillProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_TARGETPROPERTY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ModifySkillEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ModifySkillEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::StatEvalType* get_EvalType()
		{
			return ((::MX::Logic::Skills::LogicEffects::StatEvalType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_EVALTYPE_OFFSET))(nullptr);
		}

		::System::Double get_Amount()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MODIFYSKILLEFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

	};
}

