#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::GameData::DAO::Battle { class HealOverTimeEffectDAO; }

#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_APPLYHEALRATE_OFFSET UNITYSDK_OFFSET(0x123B770)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x123B780)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123B790)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_PERIODMAXHEALRATE_OFFSET UNITYSDK_OFFSET(0x123B7A0)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET UNITYSDK_OFFSET(0x123B7B0)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x123B7C0)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_CHANGERATEBYCOST_OFFSET UNITYSDK_OFFSET(0x123B7D0)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123B7E0)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_PERIODFRAME_OFFSET UNITYSDK_OFFSET(0x123B7F0)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_PERIODMINHEALRATE_OFFSET UNITYSDK_OFFSET(0x123B800)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x123B810)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_APPLYPERIODRATE_OFFSET UNITYSDK_OFFSET(0x123B820)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x123B830)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET UNITYSDK_OFFSET(0x123B840)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_EXTRASTATRATE_OFFSET UNITYSDK_OFFSET(0x123B850)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123B860)
#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x123BA70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HealOverTimeEffectValue_TypeDefinitionIndex = 13898;

	class HealOverTimeEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48
		::FlatData::StatType* _BonusSource_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0x58
		::MX::Logic::Skills::ExtraStatType* _ExtraStatSource_k__BackingField; // 0x60
		::MX::Core::Math::BasisPoint* _ExtraStatRate_k__BackingField; // 0x68
		::System::Int32 _DurationFrame_k__BackingField; // 0x70
		::System::Int32 _PeriodFrame_k__BackingField; // 0x74
		::System::Boolean _IsDispellable_k__BackingField; // 0x78
		::System::String* _ChangeRateByCost_k__BackingField; // 0x80
		::Il2CppArray<::System::Object*>* _ChangeRateByCostList_k__BackingField; // 0x88
		::System::Int64 _ApplyPeriodRate_k__BackingField; // 0x90
		::System::Int64 _PeriodMaxHealRate_k__BackingField; // 0x98
		::System::Int64 _PeriodMinHealRate_k__BackingField; // 0xA0
		::System::Boolean _ApplyHealRate_k__BackingField; // 0xA8
		::System::Boolean _ApplyHealRateByArmorType_k__BackingField; // 0xA9
		::System::Boolean _ApplyHealRateByBulletType_k__BackingField; // 0xAA

		::System::Boolean get_ApplyHealRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_APPLYHEALRATE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_PeriodMaxHealRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_PERIODMAXHEALRATE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChangeRateByCostList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::String* get_ChangeRateByCost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_CHANGERATEBYCOST_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_PeriodFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_PERIODFRAME_OFFSET))(nullptr);
		}

		::System::Int64 get_PeriodMinHealRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_PERIODMINHEALRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByArmorType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ApplyPeriodRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_APPLYPERIODRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ExtraStatRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_EXTRASTATRATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::HealOverTimeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::HealOverTimeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

	};
}

