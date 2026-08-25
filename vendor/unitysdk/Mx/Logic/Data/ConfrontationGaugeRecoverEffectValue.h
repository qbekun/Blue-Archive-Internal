#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameData::DAO::Battle { class ConfrontationGaugeRecoverEffectDAO; }

#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1236B00)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1236B40)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1236B50)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_GET_ISACCUMULATEDHEAL_OFFSET UNITYSDK_OFFSET(0x1236B60)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_SETAMOUNT_OFFSET UNITYSDK_OFFSET(0x1236B70)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x1236B80)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x1236B90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ConfrontationGaugeRecoverEffectValue_TypeDefinitionIndex = 13867;

	class ConfrontationGaugeRecoverEffectValue : public Il2CppObject
	{
	public:
		::System::Boolean _IsAccumulatedHeal_k__BackingField; // 0x48
		::System::Int64 _Amount_k__BackingField; // 0x50
		::FlatData::StatType* _BonusSource_k__BackingField; // 0x58
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0x60

		::System::Void .ctor(::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Amount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAccumulatedHeal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_GET_ISACCUMULATEDHEAL_OFFSET))(nullptr);
		}

		::System::Void SetAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_SETAMOUNT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

	};
}

