#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class UseExclusiveHPBarEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_USEEXCLUSIVEHPBAREFFECT_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1423B10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_USEEXCLUSIVEHPBAREFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1423B20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_USEEXCLUSIVEHPBAREFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1423B30)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_USEEXCLUSIVEHPBAREFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1423B40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_USEEXCLUSIVEHPBAREFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1423B50)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int UseExclusiveHPBarEffect_TypeDefinitionIndex = 14815;

	class UseExclusiveHPBarEffect : public Il2CppObject
	{
	public:
		::System::String* _UIPath_k__BackingField; // 0xD0
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xD8
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xDC
		::System::Boolean _Dispellable_k__BackingField; // 0xE0

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_USEEXCLUSIVEHPBAREFFECT_GET_UIPATH_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_USEEXCLUSIVEHPBAREFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_USEEXCLUSIVEHPBAREFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_USEEXCLUSIVEHPBAREFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::UseExclusiveHPBarEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::UseExclusiveHPBarEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_USEEXCLUSIVEHPBAREFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

