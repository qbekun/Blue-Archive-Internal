#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class MaxHPCapGaugeEffectDAO; }

#define MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x123D0F0)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123D100)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x123D110)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123D120)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123D130)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_CAPOVERDEADLYATTACKGROUPID_OFFSET UNITYSDK_OFFSET(0x123D1E0)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_REDUCEVALUEPERHEALPOINT_OFFSET UNITYSDK_OFFSET(0x123D1F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int MaxHPCapGaugeEffectValue_TypeDefinitionIndex = 13907;

	class MaxHPCapGaugeEffectValue : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x48
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x4C
		::System::Boolean _Dispellable_k__BackingField; // 0x50
		::System::Int32 _MaxValue_k__BackingField; // 0x54
		::System::Int32 _ReduceValuePerHealPoint_k__BackingField; // 0x58
		::System::String* _CapOverDeadlyAttackGroupId_k__BackingField; // 0x60

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::MaxHPCapGaugeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::MaxHPCapGaugeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_CapOverDeadlyAttackGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_CAPOVERDEADLYATTACKGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_ReduceValuePerHealPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTVALUE_GET_REDUCEVALUEPERHEALPOINT_OFFSET))(nullptr);
		}

	};
}

