#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class ThermometerChangeByCurrentHPEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x14236A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x14236B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_GET_THERMOMETERRANGESET_OFFSET UNITYSDK_OFFSET(0x14236C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14236D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1423750)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1423760)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ThermometerChangeByCurrentHPEffect_TypeDefinitionIndex = 14812;

	class ThermometerChangeByCurrentHPEffect : public Il2CppObject
	{
	public:
		::System::String* _ThermometerRangeSet_k__BackingField; // 0xD0
		::System::String* _UIPath_k__BackingField; // 0xD8
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xE0
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xE4
		::System::Boolean _Dispellable_k__BackingField; // 0xE8

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::String* get_ThermometerRangeSet()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_GET_THERMOMETERRANGESET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ThermometerChangeByCurrentHPEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ThermometerChangeByCurrentHPEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_GET_UIPATH_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERCHANGEBYCURRENTHPEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

	};
}

