#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4350)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int MaxHPCapGaugeEffectData_TypeDefinitionIndex = 13615;

	class MaxHPCapGaugeEffectData : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean Dispellable; // 0x60
		::System::Int32 MaxValue; // 0x64
		::System::Int32 ReduceValuePerHealPoint; // 0x68
		::System::String* CapOverDeadlyAttackGroupId; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

