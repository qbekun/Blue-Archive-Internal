#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameData::DAO::Battle { class ShieldHealOverTimeEffectDAO; }

#define MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_SHIELDID_OFFSET UNITYSDK_OFFSET(0x123E9F0)
#define MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123EA00)
#define MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x123EA10)
#define MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x123EA20)
#define MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123EA30)
#define MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123EA40)
#define MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x123EBC0)
#define MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_PERIOD_OFFSET UNITYSDK_OFFSET(0x123EBD0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ShieldHealOverTimeEffectValue_TypeDefinitionIndex = 13922;

	class ShieldHealOverTimeEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48
		::FlatData::StatType* _BonusSource_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0x58
		::System::Int32 _DurationFrame_k__BackingField; // 0x60
		::System::Int32 _Period_k__BackingField; // 0x64
		::System::Boolean _IsDispellable_k__BackingField; // 0x68
		::System::String* _ShieldId_k__BackingField; // 0x70

		::System::String* get_ShieldId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_SHIELDID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ShieldHealOverTimeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ShieldHealOverTimeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Int32 get_Period()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALOVERTIMEEFFECTVALUE_GET_PERIOD_OFFSET))(nullptr);
		}

	};
}

