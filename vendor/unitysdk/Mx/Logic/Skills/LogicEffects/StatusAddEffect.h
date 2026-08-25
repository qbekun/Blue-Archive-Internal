#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Data { class StatusAddEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Data { class StatusAddWithParameterEffectValue; }
namespace MX::Logic::Data { class StatusAddWithStringParameterEffectValue; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1423210)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_CHANGEDSTATUS_OFFSET UNITYSDK_OFFSET(0x1423220)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1423230)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1423240)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_PARAMETERSECOND_OFFSET UNITYSDK_OFFSET(0x1423250)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_IGNOREOPPRESSIONCHECK_OFFSET UNITYSDK_OFFSET(0x1423260)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1423270)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1423330)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1423420)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int StatusAddEffect_TypeDefinitionIndex = 14809;

	class StatusAddEffect : public Il2CppObject
	{
	public:
		::System::Int32 _DurationFrame_k__BackingField; // 0xD0
		::MX::Logic::BattleEntities::HeroStatus* _ChangedStatus_k__BackingField; // 0xD4
		::System::Boolean _Dispellable_k__BackingField; // 0xD8
		::System::String* _Parameter_k__BackingField; // 0xE0
		::System::String* _ParameterSecond_k__BackingField; // 0xE8
		::System::Boolean _IgnoreOppressionCheck_k__BackingField; // 0xF0

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::HeroStatus* get_ChangedStatus()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_CHANGEDSTATUS_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::String* get_Parameter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::String* get_ParameterSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_PARAMETERSECOND_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreOppressionCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_GET_IGNOREOPPRESSIONCHECK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::StatusAddEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::StatusAddEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::StatusAddWithParameterEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::StatusAddWithParameterEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::StatusAddWithStringParameterEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::StatusAddWithStringParameterEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSADDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

