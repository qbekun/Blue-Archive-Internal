#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::GameData::DAO::Battle { class ChangeStatLogicApplicationGaugeRecoverEffectDAO; }

#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_GET_EXTRASTATRATE_OFFSET UNITYSDK_OFFSET(0x1236970)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1236980)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET UNITYSDK_OFFSET(0x12369D0)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x12369E0)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x12369F0)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1236A00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeRecoverEffectValue_TypeDefinitionIndex = 13865;

	class ChangeStatLogicApplicationGaugeRecoverEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48
		::FlatData::StatType* _BonusSource_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0x58
		::MX::Logic::Skills::ExtraStatType* _ExtraStatSource_k__BackingField; // 0x60
		::MX::Core::Math::BasisPoint* _ExtraStatRate_k__BackingField; // 0x68

		::MX::Core::Math::BasisPoint* get_ExtraStatRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_GET_EXTRASTATRATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

	};
}

