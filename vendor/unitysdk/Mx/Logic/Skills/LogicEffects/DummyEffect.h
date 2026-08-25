#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class DummyEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace FlatData { class EndCondition; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x14153A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_STACKSAMEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x14153B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x14153D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140A030)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET UNITYSDK_OFFSET(0x14153F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1415410)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1415430)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1415440)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DummyEffect_TypeDefinitionIndex = 14738;

	class DummyEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::DummyEffectValue* _Value_k__BackingField; // 0xD0
		::System::Boolean isDurationChangedByStat; // 0xD8

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Int32 get_StackSameEffectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_STACKSAMEEFFECTCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::DummyEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::Data::DummyEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean get_ExpireOldIfStackCountOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::DummyEffectValue* get_Value()
		{
			return ((::MX::Logic::Data::DummyEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_VALUE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DUMMYEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

	};
}

