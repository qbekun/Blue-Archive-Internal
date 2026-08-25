#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class HPRatioBoundaryGaugeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x141B240)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_HPRATIOBOUNDARY_OFFSET UNITYSDK_OFFSET(0x141B250)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x141B260)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141B270)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x141B430)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x141B440)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_UISEPARATEBOUNDARYINDEX_OFFSET UNITYSDK_OFFSET(0x141B450)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int HPRatioBoundaryGaugeEffect_TypeDefinitionIndex = 14759;

	class HPRatioBoundaryGaugeEffect : public Il2CppObject
	{
	public:
		Il2CppObject* _HPRatioBoundary_k__BackingField; // 0xD0
		::System::Int32 _UISeparateBoundaryIndex_k__BackingField; // 0xD8
		::System::String* _UIPath_k__BackingField; // 0xE0
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xE8
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xEC
		::System::Boolean _Dispellable_k__BackingField; // 0xF0

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_UIPATH_OFFSET))(nullptr);
		}

		Il2CppObject* get_HPRatioBoundary()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_HPRATIOBOUNDARY_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::HPRatioBoundaryGaugeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::HPRatioBoundaryGaugeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_UISeparateBoundaryIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HPRATIOBOUNDARYGAUGEEFFECT_GET_UISEPARATEBOUNDARYINDEX_OFFSET))(nullptr);
		}

	};
}

