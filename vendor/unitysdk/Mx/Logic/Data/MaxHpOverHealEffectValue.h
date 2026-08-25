#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::GameData::DAO::Battle { class MaxHpOverHealEffectDAO; }

#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123D290)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x123D4B0)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123D4C0)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_EXTRASTATRATE_OFFSET UNITYSDK_OFFSET(0x123D4D0)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123D4E0)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x123D4F0)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_APPLYHEALRATE_OFFSET UNITYSDK_OFFSET(0x123D500)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPBASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x123D510)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_ISACCUMULATEDHEAL_OFFSET UNITYSDK_OFFSET(0x123D520)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPREDUCEBASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x123D530)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET UNITYSDK_OFFSET(0x123D540)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPDURATION_OFFSET UNITYSDK_OFFSET(0x123D550)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPREDUCEBYHEALAMOUNTRATE_OFFSET UNITYSDK_OFFSET(0x123D560)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPLIMITRATEBYTARGETMAXHP_OFFSET UNITYSDK_OFFSET(0x123D570)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123D580)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x123D590)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_CHANGERATEBYCOST_OFFSET UNITYSDK_OFFSET(0x123D5A0)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPREDUCEPERIOD_OFFSET UNITYSDK_OFFSET(0x123D5B0)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x123D5C0)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPBYOVERHEALRATE_OFFSET UNITYSDK_OFFSET(0x123D5D0)
#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET UNITYSDK_OFFSET(0x123D5E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int MaxHpOverHealEffectValue_TypeDefinitionIndex = 13909;

	class MaxHpOverHealEffectValue : public Il2CppObject
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
		::System::Int32 _TemporaryHpDuration_k__BackingField; // 0x8C
		::System::Boolean _TemporaryHpDispellable_k__BackingField; // 0x90
		::System::Int64 _TemporaryHpLimitRateByTargetMaxHp_k__BackingField; // 0x98
		::System::Int32 _TemporaryHpBaseAmount_k__BackingField; // 0xA0
		::System::Int64 _TemporaryHpByOverHealRate_k__BackingField; // 0xA8
		::System::Int32 _TemporaryHpReducePeriod_k__BackingField; // 0xB0
		::System::Int32 _TemporaryHpReduceBaseAmount_k__BackingField; // 0xB4
		::System::Int64 _TemporaryHpReduceByHealAmountRate_k__BackingField; // 0xB8

		::System::Void .ctor(::MX::GameData::DAO::Battle::MaxHpOverHealEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::MaxHpOverHealEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ExtraStatRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_EXTRASTATRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_TemporaryHpDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_APPLYHEALRATE_OFFSET))(nullptr);
		}

		::System::Int32 get_TemporaryHpBaseAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPBASEAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAccumulatedHeal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_ISACCUMULATEDHEAL_OFFSET))(nullptr);
		}

		::System::Int32 get_TemporaryHpReduceBaseAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPREDUCEBASEAMOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChangeRateByCostList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET))(nullptr);
		}

		::System::Int32 get_TemporaryHpDuration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_TemporaryHpReduceByHealAmountRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPREDUCEBYHEALAMOUNTRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_TemporaryHpLimitRateByTargetMaxHp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPLIMITRATEBYTARGETMAXHP_OFFSET))(nullptr);
		}

		::System::Void set_Amount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyHealRateByArmorType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ChangeRateByCost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_CHANGERATEBYCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_TemporaryHpReducePeriod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPREDUCEPERIOD_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::Int64 get_TemporaryHpByOverHealRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_TEMPORARYHPBYOVERHEALRATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET))(nullptr);
		}

	};
}

