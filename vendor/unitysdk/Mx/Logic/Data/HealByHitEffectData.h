#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class HealByHitTriggerType; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class HealByHitRemoveCondition; }

#define MX_LOGIC_DATA_HEALBYHITEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4170)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HealByHitEffectData_TypeDefinitionIndex = 13598;

	class HealByHitEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::System::Int32 Duration; // 0x70
		::MX::Logic::Data::HealByHitTriggerType* TriggerType; // 0x74
		::MX::Logic::Skills::ExtraStatType* ExtraStatSource; // 0x78
		::System::Int64 ExtraStatRate; // 0x80
		::System::Boolean IsDispellable; // 0x88
		::MX::Logic::Data::HealByHitRemoveCondition* RemoveCondition; // 0x8C
		::System::Int32 RemoveConditionArgument; // 0x90
		::System::String* TriggerArgument; // 0x98
		::System::Int64 AddTriggerValueRate; // 0xA0
		::System::Boolean ForceFloaterHide; // 0xA8
		::System::Boolean ApplyHealRate; // 0xA9
		::System::Boolean ApplyHealRateByArmorType; // 0xAA
		::System::Boolean ApplyHealRateByBulletType; // 0xAB

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALBYHITEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

