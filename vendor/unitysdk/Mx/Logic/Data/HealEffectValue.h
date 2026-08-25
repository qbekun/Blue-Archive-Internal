#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::GameData::DAO::Battle { class HealEffectDAO; }
namespace MX::GameData::DAO::Battle { class AccumulateHealEffectDAO; }

#define MX_LOGIC_DATA_HEALEFFECTVALUE_GET_ISACCUMULATEDHEAL_OFFSET UNITYSDK_OFFSET(0x123B460)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123B470)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123B480)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x123B490)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x123B4A0)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET UNITYSDK_OFFSET(0x123B4B0)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_GET_EXTRASTATRATE_OFFSET UNITYSDK_OFFSET(0x123B4C0)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_GET_CHANGERATEBYCOST_OFFSET UNITYSDK_OFFSET(0x123B4D0)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET UNITYSDK_OFFSET(0x123B4E0)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_GET_APPLYHEALRATE_OFFSET UNITYSDK_OFFSET(0x123B4F0)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x123B500)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x123B510)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123B520)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123B630)
#define MX_LOGIC_DATA_HEALEFFECTVALUE_SETAMOUNT_OFFSET UNITYSDK_OFFSET(0x123B760)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HealEffectValue_TypeDefinitionIndex = 13897;

	class HealEffectValue : public Il2CppObject
	{
	public:
		::System::Boolean _IsAccumulatedHeal_k__BackingField; // 0x48
		::System::Int64 _Amount_k__BackingField; // 0x50
		::FlatData::StatType* _BonusSource_k__BackingField; // 0x58
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0x60
		::MX::Logic::Skills::ExtraStatType* _ExtraStatSource_k__BackingField; // 0x68
		::MX::Core::Math::BasisPoint* _ExtraStatRate_k__BackingField; // 0x70
		::System::String* _ChangeRateByCost_k__BackingField; // 0x78
		::Il2CppArray<::System::Object*>* _ChangeRateByCostList_k__BackingField; // 0x80
		::System::Boolean _ApplyHealRate_k__BackingField; // 0x88
		::System::Boolean _ApplyHealRateByArmorType_k__BackingField; // 0x89
		::System::Boolean _ApplyHealRateByBulletType_k__BackingField; // 0x8A

		::System::Boolean get_IsAccumulatedHeal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_GET_ISACCUMULATEDHEAL_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Amount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ExtraStatRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_GET_EXTRASTATRATE_OFFSET))(nullptr);
		}

		::System::String* get_ChangeRateByCost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_GET_CHANGERATEBYCOST_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChangeRateByCostList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_GET_APPLYHEALRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByArmorType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::HealEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::HealEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::AccumulateHealEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AccumulateHealEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALEFFECTVALUE_SETAMOUNT_OFFSET))(arg, nullptr);
		}

	};
}

