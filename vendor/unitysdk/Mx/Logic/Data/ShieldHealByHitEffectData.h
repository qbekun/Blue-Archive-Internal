#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class HealByHitTriggerType; }
namespace MX::Logic::Data { class HealByHitRemoveCondition; }

#define MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4430)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ShieldHealByHitEffectData_TypeDefinitionIndex = 13629;

	class ShieldHealByHitEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::System::Int32 Duration; // 0x70
		::MX::Logic::Data::HealByHitTriggerType* TriggerType; // 0x74
		::System::Boolean IsDispellable; // 0x78
		::MX::Logic::Data::HealByHitRemoveCondition* RemoveCondition; // 0x7C
		::System::Int32 RemoveConditionArgument; // 0x80
		::System::String* TriggerArgument; // 0x88
		::System::Int64 AddTriggerValueRate; // 0x90
		::System::String* ShieldId; // 0x98
		::System::Boolean ForceFloaterHide; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALBYHITEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

