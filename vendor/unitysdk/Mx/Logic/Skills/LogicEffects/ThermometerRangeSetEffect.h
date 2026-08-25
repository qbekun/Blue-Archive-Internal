#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class ThermometerRangeSetEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_MAXHPRATIOBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1423770)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1423780)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_THERMOMETERUIINDEX_OFFSET UNITYSDK_OFFSET(0x1423790)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14237A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1423810)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1423820)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_MINHPRATIOBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1423830)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ThermometerRangeSetEffect_TypeDefinitionIndex = 14813;

	class ThermometerRangeSetEffect : public Il2CppObject
	{
	public:
		::System::Int32 _ThermometerUIIndex_k__BackingField; // 0xD0
		::System::Int32 _MinHPRatioBoundary_k__BackingField; // 0xD4
		::System::Int32 _MaxHPRatioBoundary_k__BackingField; // 0xD8
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xDC
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xE0
		::System::Boolean _Dispellable_k__BackingField; // 0xE4

		::System::Int32 get_MaxHPRatioBoundary()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_MAXHPRATIOBOUNDARY_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_ThermometerUIIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_THERMOMETERUIINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ThermometerRangeSetEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ThermometerRangeSetEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_MinHPRatioBoundary()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_THERMOMETERRANGESETEFFECT_GET_MINHPRATIOBOUNDARY_OFFSET))(nullptr);
		}

	};
}

