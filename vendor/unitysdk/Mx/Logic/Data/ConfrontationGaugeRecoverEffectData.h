#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }

#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3EF0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ConfrontationGaugeRecoverEffectData_TypeDefinitionIndex = 13568;

	class ConfrontationGaugeRecoverEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEREFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

