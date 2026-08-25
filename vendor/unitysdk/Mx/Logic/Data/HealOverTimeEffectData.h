#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class ExtraStatType; }

#define MX_LOGIC_DATA_HEALOVERTIMEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F41B0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HealOverTimeEffectData_TypeDefinitionIndex = 13602;

	class HealOverTimeEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::MX::Logic::Skills::ExtraStatType* ExtraStatSource; // 0x70
		::System::Int64 ExtraStatRate; // 0x78
		::System::Int32 Duration; // 0x80
		::System::Int32 Period; // 0x84
		::System::Boolean IsDispellable; // 0x88
		::System::String* ChangeRateByCost; // 0x90
		::System::Int64 ApplyPeriodRate; // 0x98
		::System::Int64 PeriodMaxHealRate; // 0xA0
		::System::Int64 PeriodMinHealRate; // 0xA8
		::System::Boolean ForceFloaterHide; // 0xB0
		::System::Boolean ApplyHealRate; // 0xB1
		::System::Boolean ApplyHealRateByArmorType; // 0xB2
		::System::Boolean ApplyHealRateByBulletType; // 0xB3

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALOVERTIMEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

