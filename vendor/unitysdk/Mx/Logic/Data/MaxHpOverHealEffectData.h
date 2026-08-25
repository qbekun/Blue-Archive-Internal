#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class ExtraStatType; }

#define MX_LOGIC_DATA_MAXHPOVERHEALEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4370)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int MaxHpOverHealEffectData_TypeDefinitionIndex = 13617;

	class MaxHpOverHealEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::MX::Logic::Skills::ExtraStatType* ExtraStatSource; // 0x70
		::System::Int64 ExtraStatRate; // 0x78
		::System::String* ChangeRateByCost; // 0x80
		::System::Boolean ForceFloaterHide; // 0x88
		::System::Boolean ApplyHealRate; // 0x89
		::System::Boolean ApplyHealRateByArmorType; // 0x8A
		::System::Boolean ApplyHealRateByBulletType; // 0x8B
		::System::Int32 TemporaryHpDuration; // 0x8C
		::System::Boolean TemporaryHpDispellable; // 0x90
		::System::Int64 TemporaryHpLimitRateByTargetMaxHp; // 0x98
		::System::Int32 TemporaryHpBaseAmount; // 0xA0
		::System::Int64 TemporaryHpByOverHealRate; // 0xA8
		::System::Int32 TemporaryHpReducePeriod; // 0xB0
		::System::Int32 TemporaryHpReduceBaseAmount; // 0xB4
		::System::Int64 TemporaryHpReduceByHealAmountRate; // 0xB8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPOVERHEALEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

