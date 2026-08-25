#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameData::DAO::Battle { class ConfrontationGaugeRecoverOverTimeEffectDAO; }

#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1236BA0)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x1236CB0)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1236CC0)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_PERIOD_OFFSET UNITYSDK_OFFSET(0x1236CD0)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x1236CE0)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1236CF0)
#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1236D00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ConfrontationGaugeRecoverOverTimeEffectValue_TypeDefinitionIndex = 13868;

	class ConfrontationGaugeRecoverOverTimeEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48
		::FlatData::StatType* _BonusSource_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0x58
		::System::Int32 _DurationFrame_k__BackingField; // 0x60
		::System::Int32 _Period_k__BackingField; // 0x64
		::System::Boolean _IsDispellable_k__BackingField; // 0x68

		::System::Void .ctor(::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverOverTimeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverOverTimeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_Period()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_PERIOD_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

	};
}

