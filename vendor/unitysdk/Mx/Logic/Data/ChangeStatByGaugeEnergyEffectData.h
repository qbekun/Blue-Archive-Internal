#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }

#define MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3EB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeStatByGaugeEnergyEffectData_TypeDefinitionIndex = 13564;

	class ChangeStatByGaugeEnergyEffectData : public Il2CppObject
	{
	public:
		::System::Int64 CheckStartGaugeEnergyRatio; // 0x58
		::System::Int64 CheckEndGaugeEnergyRatio; // 0x60
		::FlatData::StatType* StatType; // 0x68
		::System::Int64 StartChangeStatBaseAmount; // 0x70
		::System::Int64 EndChangeStatBaseAmount; // 0x78
		::System::Int64 StartChangeStatCoefficient; // 0x80
		::System::Int64 EndChangeStatCoefficient; // 0x88
		::System::Boolean Dispellable; // 0x90
		::System::Int64 duration; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

