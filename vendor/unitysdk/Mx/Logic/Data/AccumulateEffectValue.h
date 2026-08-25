#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AccumulateCheckType; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace FlatData { class StatType; }
namespace MX::Logic::Data { class AccumulateExecuteCondition; }
namespace MX::GameData::DAO::Battle { class AccumulateEffectDAO; }

#define MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_ACCUMULATETYPE_OFFSET UNITYSDK_OFFSET(0x1232FF0)
#define MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_ACCUMULATERATE_OFFSET UNITYSDK_OFFSET(0x1233000)
#define MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_ACCUMULATECASTERTARGETSIDEFILTER_OFFSET UNITYSDK_OFFSET(0x1233010)
#define MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_EXECUTECONDITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x1233020)
#define MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_EXECUTECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1233030)
#define MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_LIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0x1233040)
#define MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1233050)
#define MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_EXECUTELOGICEFFECTGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1233430)
#define MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_LIMITSOURCESTAT_OFFSET UNITYSDK_OFFSET(0x1233440)
#define MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1233450)
#define MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_LIMITSOURCESTATRATE_OFFSET UNITYSDK_OFFSET(0x1233460)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AccumulateEffectValue_TypeDefinitionIndex = 13840;

	class AccumulateEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::Data::AccumulateCheckType* _AccumulateType_k__BackingField; // 0x48
		::System::Int64 _AccumulateRate_k__BackingField; // 0x50
		::MX::Logic::Skills::TargetSideId* _AccumulateCasterTargetSideFilter_k__BackingField; // 0x58
		::FlatData::StatType* _LimitSourceStat_k__BackingField; // 0x5C
		::System::Int64 _LimitSourceStatRate_k__BackingField; // 0x60
		::System::Int64 _LimitAmount_k__BackingField; // 0x68
		::MX::Logic::Data::AccumulateExecuteCondition* _ExecuteConditionType_k__BackingField; // 0x70
		::System::Int64 _ExecuteConditionAmount_k__BackingField; // 0x78
		::System::Int64 _DurationFrame_k__BackingField; // 0x80
		Il2CppObject* _ExecuteLogicEffectGroupIdList_k__BackingField; // 0x88

		::MX::Logic::Data::AccumulateCheckType* get_AccumulateType()
		{
			return ((::MX::Logic::Data::AccumulateCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_ACCUMULATETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_AccumulateRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_ACCUMULATERATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSideId* get_AccumulateCasterTargetSideFilter()
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_ACCUMULATECASTERTARGETSIDEFILTER_OFFSET))(nullptr);
		}

		::System::Int64 get_ExecuteConditionAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_EXECUTECONDITIONAMOUNT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AccumulateExecuteCondition* get_ExecuteConditionType()
		{
			return ((::MX::Logic::Data::AccumulateExecuteCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_EXECUTECONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_LIMITAMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::AccumulateEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AccumulateEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExecuteLogicEffectGroupIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_EXECUTELOGICEFFECTGROUPIDLIST_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_LimitSourceStat()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_LIMITSOURCESTAT_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationFrame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitSourceStatRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEEFFECTVALUE_GET_LIMITSOURCESTATRATE_OFFSET))(nullptr);
		}

	};
}

