#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace MX::Logic::Data { class FormConversionEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_FORMCONVERSIONENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1419010)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_EXSKILLCARDREDRAWINHAND_OFFSET UNITYSDK_OFFSET(0x1419020)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x1419030)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_AFFECTUIGAUGETYPE_OFFSET UNITYSDK_OFFSET(0x1419040)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_NORMALATTACKINDEX_OFFSET UNITYSDK_OFFSET(0x1419050)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_PUBLICSKILLINDEX_OFFSET UNITYSDK_OFFSET(0x1419060)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_DISABLEUSESKILL_OFFSET UNITYSDK_OFFSET(0x1419070)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1419080)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_USEIMMEDIATEFORMRELEASEONDISPEL_OFFSET UNITYSDK_OFFSET(0x1419090)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14190A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1419140)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_RELEASEFORMCONVERSIONDURATION_OFFSET UNITYSDK_OFFSET(0x1419150)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_RELEASEFORMCONVERSIONREQUIRED_OFFSET UNITYSDK_OFFSET(0x1419160)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int FormConversionEffect_TypeDefinitionIndex = 14750;

	class FormConversionEffect : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::LogicEffectEndCondition* _FormConversionEndCondition_k__BackingField; // 0xD0
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xD4
		::System::Int32 _FormIndex_k__BackingField; // 0xD8
		::System::Int32 _NormalAttackIndex_k__BackingField; // 0xDC
		::System::Int32 _PublicSkillIndex_k__BackingField; // 0xE0
		::System::Boolean _Dispellable_k__BackingField; // 0xE4
		::System::Boolean _ReleaseFormConversionRequired_k__BackingField; // 0xE5
		::System::Int32 _ReleaseFormConversionDuration_k__BackingField; // 0xE8
		::System::Boolean _DisableUseSkill_k__BackingField; // 0xEC
		::System::Boolean _ExSkillCardRedrawInHand_k__BackingField; // 0xED
		::System::Boolean _AffectUIGaugeType_k__BackingField; // 0xEE
		::System::Boolean _UseImmediateFormReleaseOnDispel_k__BackingField; // 0xEF

		::MX::Logic::BattleEntities::LogicEffectEndCondition* get_FormConversionEndCondition()
		{
			return ((::MX::Logic::BattleEntities::LogicEffectEndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_FORMCONVERSIONENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_ExSkillCardRedrawInHand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_EXSKILLCARDREDRAWINHAND_OFFSET))(nullptr);
		}

		::System::Int32 get_FormIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_FORMINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_AffectUIGaugeType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_AFFECTUIGAUGETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_NormalAttackIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_NORMALATTACKINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_PublicSkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_PUBLICSKILLINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_DisableUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_DISABLEUSESKILL_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseImmediateFormReleaseOnDispel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_USEIMMEDIATEFORMRELEASEONDISPEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::FormConversionEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::FormConversionEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_ReleaseFormConversionDuration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_RELEASEFORMCONVERSIONDURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_ReleaseFormConversionRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORMCONVERSIONEFFECT_GET_RELEASEFORMCONVERSIONREQUIRED_OFFSET))(nullptr);
		}

	};
}

