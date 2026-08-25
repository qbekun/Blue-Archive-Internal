#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }

#define MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3F00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ConfrontationGaugeRecoverOverTimeEffectData_TypeDefinitionIndex = 13569;

	class ConfrontationGaugeRecoverOverTimeEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::System::Int32 Duration; // 0x70
		::System::Int32 Period; // 0x74
		::System::Boolean IsDispellable; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

