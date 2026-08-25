#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class GroggyGaugeEffectDAO; }

#define MX_LOGIC_DATA_GROGGYGAUGEVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123ABE0)
#define MX_LOGIC_DATA_GROGGYGAUGEVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123ABF0)
#define MX_LOGIC_DATA_GROGGYGAUGEVALUE_GET_TARGETCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x123AC80)
#define MX_LOGIC_DATA_GROGGYGAUGEVALUE_GET_CASTERCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x123AC90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int GroggyGaugeValue_TypeDefinitionIndex = 13892;

	class GroggyGaugeValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48
		::System::Int64 _TargetCoefficientAmount_k__BackingField; // 0x50
		::System::Int64 _CasterCoefficientAmount_k__BackingField; // 0x58

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GROGGYGAUGEVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::GroggyGaugeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::GroggyGaugeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GROGGYGAUGEVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetCoefficientAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GROGGYGAUGEVALUE_GET_TARGETCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CasterCoefficientAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GROGGYGAUGEVALUE_GET_CASTERCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

	};
}

