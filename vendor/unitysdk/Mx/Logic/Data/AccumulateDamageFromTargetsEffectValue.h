#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class StatPhase; }
namespace MX::Logic::Data { class AccumulateDamageActionType; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class AccumulateDamageFromTargetsEffectDAO; }

#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCEBLACKBOARDRATE_OFFSET UNITYSDK_OFFSET(0x1232A70)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ISENDWHENREACHLIMIT_OFFSET UNITYSDK_OFFSET(0x1232A80)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ACCUMULATETARGETSIDEFILTER_OFFSET UNITYSDK_OFFSET(0x1232A90)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_BLACKBOARDKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1232AA0)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ACCUMULATEDAMAGEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1232AB0)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ISWRITEWHENLOGICDISPELLED_OFFSET UNITYSDK_OFFSET(0x1232AC0)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ISWRITEWHENLOGICEXPIRED_OFFSET UNITYSDK_OFFSET(0x1232AD0)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_TARGETLOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x1232AE0)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCESTAT_OFFSET UNITYSDK_OFFSET(0x1232AF0)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ACCUMULATEBULLETTYPEFILTER_OFFSET UNITYSDK_OFFSET(0x1232B00)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_EXECUTELOGICEFFECTGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1232B10)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCESTATRATE_OFFSET UNITYSDK_OFFSET(0x1232B20)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1232B30)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ACCUMULATERATE_OFFSET UNITYSDK_OFFSET(0x1232B40)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ACCUMULATEDAMAGESIDEFILTER_OFFSET UNITYSDK_OFFSET(0x1232B50)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_BLACKBOARDKEYTOWRITE_OFFSET UNITYSDK_OFFSET(0x1232B60)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCEBLACKBOARDKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1232B70)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1232B80)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1232B90)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1232BA0)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCESTATPHASE_OFFSET UNITYSDK_OFFSET(0x1232FC0)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0x1232FD0)
#define MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCEBLACKBOARDKEYSTRING_OFFSET UNITYSDK_OFFSET(0x1232FE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AccumulateDamageFromTargetsEffectValue_TypeDefinitionIndex = 13839;

	class AccumulateDamageFromTargetsEffectValue : public Il2CppObject
	{
	public:
		::FlatData::StatType* _LimitSourceStat_k__BackingField; // 0x48
		::MX::Logic::Data::StatPhase* _LimitSourceStatPhase_k__BackingField; // 0x4C
		::System::Int64 _LimitSourceStatRate_k__BackingField; // 0x50
		::System::Int64 _LimitAmount_k__BackingField; // 0x58
		::System::String* _TargetLogicEffectGroupId_k__BackingField; // 0x60
		::MX::Logic::Data::AccumulateDamageActionType* _AccumulateDamageActionType_k__BackingField; // 0x68
		::FlatData::BulletType* _AccumulateBulletTypeFilter_k__BackingField; // 0x6C
		::MX::Logic::Skills::TargetSideId* _AccumulateDamageSideFilter_k__BackingField; // 0x70
		::MX::Logic::Skills::TargetSideId* _AccumulateTargetSideFilter_k__BackingField; // 0x74
		::System::Int64 _AccumulateRate_k__BackingField; // 0x78
		::System::Boolean _IsWriteWhenLogicExpired_k__BackingField; // 0x80
		::System::Boolean _IsWriteWhenLogicDispelled_k__BackingField; // 0x81
		::System::String* _BlackboardKeyToWrite_k__BackingField; // 0x88
		::MX::Logic::Data::BlackboardKeyType* _BlackboardKeyType_k__BackingField; // 0x90
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x94
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x98
		::System::Boolean _Dispellable_k__BackingField; // 0x9C
		Il2CppObject* _ExecuteLogicEffectGroupIdList_k__BackingField; // 0xA0
		::System::String* _LimitSourceBlackboardKeyString_k__BackingField; // 0xA8
		::MX::Logic::Data::BlackboardKeyType* _LimitSourceBlackboardKeyType_k__BackingField; // 0xB0
		::System::Int64 _LimitSourceBlackboardRate_k__BackingField; // 0xB8
		::System::Boolean _IsEndWhenReachLimit_k__BackingField; // 0xC0

		::System::Int64 get_LimitSourceBlackboardRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCEBLACKBOARDRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEndWhenReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ISENDWHENREACHLIMIT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSideId* get_AccumulateTargetSideFilter()
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ACCUMULATETARGETSIDEFILTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackboardKeyType* get_BlackboardKeyType()
		{
			return ((::MX::Logic::Data::BlackboardKeyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_BLACKBOARDKEYTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AccumulateDamageActionType* get_AccumulateDamageActionType()
		{
			return ((::MX::Logic::Data::AccumulateDamageActionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ACCUMULATEDAMAGEACTIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWriteWhenLogicDispelled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ISWRITEWHENLOGICDISPELLED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWriteWhenLogicExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ISWRITEWHENLOGICEXPIRED_OFFSET))(nullptr);
		}

		::System::String* get_TargetLogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_TARGETLOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_LimitSourceStat()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCESTAT_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_AccumulateBulletTypeFilter()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ACCUMULATEBULLETTYPEFILTER_OFFSET))(nullptr);
		}

		Il2CppObject* get_ExecuteLogicEffectGroupIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_EXECUTELOGICEFFECTGROUPIDLIST_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitSourceStatRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCESTATRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_AccumulateRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ACCUMULATERATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSideId* get_AccumulateDamageSideFilter()
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ACCUMULATEDAMAGESIDEFILTER_OFFSET))(nullptr);
		}

		::System::String* get_BlackboardKeyToWrite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_BLACKBOARDKEYTOWRITE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackboardKeyType* get_LimitSourceBlackboardKeyType()
		{
			return ((::MX::Logic::Data::BlackboardKeyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCEBLACKBOARDKEYTYPE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::AccumulateDamageFromTargetsEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AccumulateDamageFromTargetsEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::StatPhase* get_LimitSourceStatPhase()
		{
			return ((::MX::Logic::Data::StatPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCESTATPHASE_OFFSET))(nullptr);
		}

		::System::Int64 get_LimitAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITAMOUNT_OFFSET))(nullptr);
		}

		::System::String* get_LimitSourceBlackboardKeyString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEDAMAGEFROMTARGETSEFFECTVALUE_GET_LIMITSOURCEBLACKBOARDKEYSTRING_OFFSET))(nullptr);
		}

	};
}

