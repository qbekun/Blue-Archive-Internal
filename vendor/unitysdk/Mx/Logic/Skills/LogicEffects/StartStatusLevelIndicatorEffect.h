#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class StartStatusLevelIndicatorEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_MAXSTATUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1421AF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GETLOADHANDUIPATH_OFFSET UNITYSDK_OFFSET(0x1421B00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1421C50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1421C60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GETUIPATH_OFFSET UNITYSDK_OFFSET(0x1421CF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1421DA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1421DB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1421DC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_LOGICEFFECTTEMPLATEFORAPPLYSTATUSLEVEL_OFFSET UNITYSDK_OFFSET(0x1421DD0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int StartStatusLevelIndicatorEffect_TypeDefinitionIndex = 14804;

	class StartStatusLevelIndicatorEffect : public Il2CppObject
	{
	public:
		::System::String* _LogicEffectTemplateForApplyStatusLevel_k__BackingField; // 0xD0
		::System::String* _UIPath_k__BackingField; // 0xD8
		::System::Int32 _MaxStatusLevel_k__BackingField; // 0xE0
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xE4
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xE8
		::System::Boolean _Dispellable_k__BackingField; // 0xEC

		::System::Int32 get_MaxStatusLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_MAXSTATUSLEVEL_OFFSET))(nullptr);
		}

		::System::String* GetLoadHandUIPath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GETLOADHANDUIPATH_OFFSET))(str, nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::StartStatusLevelIndicatorEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::StartStatusLevelIndicatorEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GETUIPATH_OFFSET))(nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_UIPATH_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::String* get_LogicEffectTemplateForApplyStatusLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATOREFFECT_GET_LOGICEFFECTTEMPLATEFORAPPLYSTATUSLEVEL_OFFSET))(nullptr);
		}

	};
}

