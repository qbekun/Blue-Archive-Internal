#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::GameData::DAO::Battle { class ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO; }

#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1236A10)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1236A20)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_PERIOD_OFFSET UNITYSDK_OFFSET(0x1236A30)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1236A40)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x1236A50)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1236A60)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_EXTRASTATRATE_OFFSET UNITYSDK_OFFSET(0x1236AD0)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET UNITYSDK_OFFSET(0x1236AE0)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x1236AF0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeRecoverOverTimeEffectValue_TypeDefinitionIndex = 13866;

	class ChangeStatLogicApplicationGaugeRecoverOverTimeEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48
		::FlatData::StatType* _BonusSource_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0x58
		::MX::Logic::Skills::ExtraStatType* _ExtraStatSource_k__BackingField; // 0x60
		::MX::Core::Math::BasisPoint* _ExtraStatRate_k__BackingField; // 0x68
		::System::Int64 _Duration_k__BackingField; // 0x70
		::System::Int64 _Period_k__BackingField; // 0x78
		::System::Boolean _IsDispellable_k__BackingField; // 0x80

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_Period()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_PERIOD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ExtraStatRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_EXTRASTATRATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

	};
}

