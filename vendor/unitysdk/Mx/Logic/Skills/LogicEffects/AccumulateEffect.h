#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class AccumulateCheckType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace FlatData { class StatType; }
namespace MX::Logic::Data { class AccumulateExecuteCondition; }
namespace MX::Logic::Data { class AccumulateEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1405C90)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_EXECUTELOGICEFFECTGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1405DC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_ACCUMULATERATE_OFFSET UNITYSDK_OFFSET(0x1405DD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1405DE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_ACCUMULATECASTERTARGETSIDEFILTER_OFFSET UNITYSDK_OFFSET(0x1405DF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_LIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0x1405E00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_EXECUTECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1405E10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_EXECUTECONDITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x1405E20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1405E30)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_LIMITSOURCESTATRATE_OFFSET UNITYSDK_OFFSET(0x1405E40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_LIMITSOURCESTAT_OFFSET UNITYSDK_OFFSET(0x1405E50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_ACCUMULATETYPE_OFFSET UNITYSDK_OFFSET(0x1405E60)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int AccumulateEffect_TypeDefinitionIndex = 14675;

	class AccumulateEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::AccumulateCheckType* _AccumulateType_k__BackingField; // 0xD0
		::MX::Core::Math::BasisPoint* _AccumulateRate_k__BackingField; // 0xD8
		::MX::Logic::Skills::TargetSideId* _AccumulateCasterTargetSideFilter_k__BackingField; // 0xE0
		::FlatData::StatType* _LimitSourceStat_k__BackingField; // 0xE4
		::MX::Core::Math::BasisPoint* _LimitSourceStatRate_k__BackingField; // 0xE8
		::System::Int64 _LimitAmount_k__BackingField; // 0xF0
		::MX::Logic::Data::AccumulateExecuteCondition* _ExecuteConditionType_k__BackingField; // 0xF8
		::System::Int64 _ExecuteConditionAmount_k__BackingField; // 0x100
		::System::Int64 _DurationFrame_k__BackingField; // 0x108
		Il2CppObject* _ExecuteLogicEffectGroupIdList_k__BackingField; // 0x110

		::System::Void .ctor(::MX::Logic::Data::AccumulateEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::AccumulateEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_ExecuteLogicEffectGroupIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_EXECUTELOGICEFFECTGROUPIDLIST_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_AccumulateRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_ACCUMULATERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSideId* get_AccumulateCasterTargetSideFilter()
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_ACCUMULATECASTERTARGETSIDEFILTER_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_LIMITAMOUNT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AccumulateExecuteCondition* get_ExecuteConditionType()
		{
			return ((::MX::Logic::Data::AccumulateExecuteCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_EXECUTECONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ExecuteConditionAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_EXECUTECONDITIONAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_LimitSourceStatRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_LIMITSOURCESTATRATE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_LimitSourceStat()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_LIMITSOURCESTAT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AccumulateCheckType* get_AccumulateType()
		{
			return ((::MX::Logic::Data::AccumulateCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ACCUMULATEEFFECT_GET_ACCUMULATETYPE_OFFSET))(nullptr);
		}

	};
}

